/*
 * XREFs of CcShouldLazyWriteCacheMap @ 0x140219060
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x140533B4C (CcLazyWriteScan.c)
 * Callees:
 *     CcIsCacheMapACursorInPrivateVCM @ 0x1402191A4 (CcIsCacheMapACursorInPrivateVCM.c)
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 */

char __fastcall CcShouldLazyWriteCacheMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r10
  char IsCacheMapACursorInPrivateVCM; // al
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v12; // r9

  v6 = a1;
  if ( a3 )
    IsCacheMapACursorInPrivateVCM = CcIsCacheMapACursorInPrivateVCM(a3, a1);
  else
    IsCacheMapACursorInPrivateVCM = a1 == a2 + 520 || a1 == a2 + 544;
  if ( IsCacheMapACursorInPrivateVCM )
    return 0;
  v8 = *(_DWORD *)(v6 + 152);
  if ( (v8 & 0x400020) != 0 )
    return 0;
  if ( (v8 & 0x10000) == 0 )
  {
    if ( *(_DWORD *)(v6 + 524) )
      return 0;
    v9 = *(_DWORD *)(v6 + 4);
    if ( (v9 || *(_DWORD *)(v6 + 112) && *(_QWORD *)(v6 + 8)) && (v8 & 0x40000000) == 0 )
    {
      v10 = *(_DWORD *)(v6 + 112);
      if ( !v10 || !a4 )
        return 0;
      v11 = *(_DWORD *)(v6 + 276) + 1;
      *(_DWORD *)(v6 + 276) = v11;
      if ( (v8 & 0x1000000) != 0 )
      {
        v12 = *(_QWORD *)(v6 + 248);
        if ( !*(_DWORD *)(v12 + 104)
          && MEMORY[0xFFFFF78000000320] <= (__int64)(*(_QWORD *)(v12 + 136)
                                                   + 0x9896800uLL / (unsigned int)KeMaximumIncrement)
          && *(_DWORD *)(v6 + 112) < 0x40u )
        {
          return 0;
        }
      }
      else if ( (v8 & 0x200) != 0 )
      {
        if ( (v11 & 0xF) != 0 && v10 < 0x40 && a6 != 16 )
          return 0;
      }
      else if ( (*(_DWORD *)(a5 + 80) & 0x8000) != 0
             && v9
             && (unsigned __int8)CcCanIWriteStreamEx(
                                   *(_QWORD *)(v6 + 536),
                                   *(_QWORD *)(v6 + 600),
                                   a5,
                                   0x1000000,
                                   0,
                                   8,
                                   0LL) )
      {
        return 0;
      }
    }
  }
  return 1;
}
