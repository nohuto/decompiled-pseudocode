/*
 * XREFs of MmMapMdl @ 0x14062CC90
 * Callers:
 *     <none>
 * Callees:
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiMappingHasIoReferences @ 0x14029B1A0 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x14029B3BC (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiFreeUltraMdlContext @ 0x14065F358 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x14065F3EC (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  struct _SLIST_ENTRY *v5; // r15
  unsigned int ProtectionMask; // ebp
  void (__fastcall *v7)(__int64, _QWORD); // r8
  __int64 v8; // r9
  unsigned __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // r14
  int v16; // r13d
  int v17; // ebp
  __int64 i; // rsi
  unsigned __int64 v19; // rbx
  int v20; // ebp
  __int64 v21; // r8
  bool v22; // zf
  _DWORD v23[18]; // [rsp+30h] [rbp-48h] BYREF

  v23[0] = 0;
  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    v7(v8, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v11 = v10;
  if ( MmProtectFreedNonPagedPool )
    v11 = v10 + 1;
  if ( v11 > 0x200
    || (UltraMdlContext = MiGetUltraMdlContext(), (v5 = (struct _SLIST_ENTRY *)UltraMdlContext) == 0LL)
    || (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v11, 0),
        v14 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL) )
  {
    v14 = MiReservePtes((__int64)&qword_140C695C0, v11);
    if ( !v14 )
      return 3221225626LL;
  }
  v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
  v16 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, v23);
  if ( v16 >= 0 )
  {
    v17 = v23[0] & 1;
    if ( (v23[0] & 1) != 0 )
    {
      MiMappingHasIoReferences(v15);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    v16 = 0;
    a3(a4, v15);
    if ( v17 )
      MiZeroAndFlushPtes(v15, v10, 0);
  }
  if ( v5 )
  {
    if ( v11 )
    {
      for ( i = v11; i; --i )
      {
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v14) )
        {
          if ( MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C6697C) )
            {
              v22 = (ZeroPte & 1) == 0;
              goto LABEL_29;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
LABEL_29:
            if ( !v22 )
              v19 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = v19;
        if ( v20 )
          MiWritePteShadow(v14, v19, v21);
        v14 += 8LL;
      }
    }
    MiFreeUltraMdlContext(v5);
  }
  else if ( v14 )
  {
    MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v14, v11);
  }
  return (unsigned int)v16;
}
