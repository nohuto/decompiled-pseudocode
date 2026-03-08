/*
 * XREFs of RtlpFlsSlotDataValidateEmpty @ 0x1402F8F60
 * Callers:
 *     PspTlsDataCleanup @ 0x1407D9C28 (PspTlsDataCleanup.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpFlsSlotDataValidateEmpty(__int64 a1, __int64 a2)
{
  char v2; // r8
  unsigned int v5; // r9d
  int v6; // ecx
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v2 = 1;
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 && dword_140D0BFE8 )
  {
    v5 = 17;
    while ( 1 )
    {
      _BitScanReverse((unsigned int *)&v6, v5);
      v7 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v6 - 4));
      if ( v7 )
      {
        v8 = (_QWORD *)(v7 + 8 * (3 * (v5 ^ (unsigned __int64)(unsigned int)(1 << v6)) + 1));
        if ( v8 )
        {
          if ( *v8 )
            break;
        }
      }
      if ( ++v5 - 16 > dword_140D0BFE8 )
        return v2;
    }
    return 0;
  }
  return v2;
}
