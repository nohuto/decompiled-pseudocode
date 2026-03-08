/*
 * XREFs of SmmValidateParameters @ 0x1C006F8CC
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F9F0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SmmValidateParameters(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  char v4; // bl
  int v6; // eax

  v4 = a4;
  if ( ((a3 | a2) & 0xFFF) != 0 )
  {
    WdLogSingleEntry3(3LL, a2, a3, 499LL);
  }
  else if ( a3 <= 0xFFFFFFFF000LL )
  {
    if ( a2 + a3 >= a2 )
    {
      if ( a2 + a3 <= *(_QWORD *)a1 )
      {
        if ( (a4 & 0xFFFFFFFC) != 0 )
          WdLogSingleEntry1(3LL, a4);
        if ( (v4 & 1) == 0 )
          return 1;
        v6 = *(_DWORD *)(a1 + 44) & 0x1E;
        if ( v6 == 10 || v6 == 6 )
          return 1;
        WdLogSingleEntry1(3LL, (*(_DWORD *)(a1 + 44) >> 1) & 0xF);
      }
      else
      {
        WdLogSingleEntry4(3LL, a2, a3, *(_QWORD *)a1, 526LL);
      }
    }
    else
    {
      WdLogSingleEntry3(3LL, a2, a3, 516LL);
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, 0xFFFFFFFF000LL);
  }
  return 0;
}
