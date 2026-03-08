/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x1406391E0
 * Callers:
 *     <none>
 * Callees:
 *     MiFindFreePageFileSpace @ 0x140209F7C (MiFindFreePageFileSpace.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(PRKEVENT Event)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 Flink_high; // r8
  unsigned int FreePageFileSpace; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(_QWORD *)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 17056);
  v4 = MiSwizzleInvalidPte((unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 32);
  Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
  v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v4 & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v1, &v13, Flink_high, 0xABuLL);
  v7 = FreePageFileSpace;
  if ( FreePageFileSpace >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
  {
    v8 = v13;
    if ( qword_140C657C0 && (v13 & 0x10) == 0 )
      v8 = v13 & ~qword_140C657C0;
    v9 = HIDWORD(v8);
    LODWORD(Event[1].Header.WaitListHead.Blink) = v9;
    v10 = MiSwizzleInvalidPte((unsigned __int64)(FreePageFileSpace + (unsigned int)v9) << 32);
    v11 = *(_QWORD *)v3;
    v13 = ((unsigned __int64)(*(_WORD *)(v3 + 204) & 0xF) << 12) | v10 & 0xFFFFFFFFFFFF0FFFuLL;
    HIDWORD(Event[1].Header.WaitListHead.Blink) = v7 + MiFindFreePageFileSpace(v1, &v13, v11, 0x6BuLL);
  }
  return KeSetEvent(Event, 0, 0);
}
