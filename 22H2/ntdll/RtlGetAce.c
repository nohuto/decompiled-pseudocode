/*
 * XREFs of RtlGetAce @ 0x1800721F0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800886B0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAce(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u && a2 < *(unsigned __int16 *)(a1 + 4) )
  {
    v4 = a1 + 8;
    *a3 = a1 + 8;
    v5 = 0;
    if ( a2 )
    {
      while ( v4 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
      {
        ++v5;
        v4 += *(unsigned __int16 *)(v4 + 2);
        *a3 = v4;
        if ( v5 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( v4 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
        return 0LL;
    }
  }
  return 3221225485LL;
}
