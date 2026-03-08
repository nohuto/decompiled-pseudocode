/*
 * XREFs of MiStoreSetEvictPageFile @ 0x14065A380
 * Callers:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r8
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 248);
  v3 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 32LL) + ((unsigned __int64)a2 >> 3));
  *v3 &= ~(1 << (a2 & 7));
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1240), 0, 0);
  result = MiSufficientAvailablePages(v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1240), 0, 0);
  return result;
}
