/*
 * XREFs of ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0143534
 * Callers:
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0143608 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0145664 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPathPreferredScalingToAdapterDefault(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a1 & 0x40000000000LL) == 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
    v2 = *(_QWORD *)a1;
  }
  if ( (v2 & 0x10000) == 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)a1 + 35) == 253 )
  {
    if ( (*(_QWORD *)a1 & 0x100000000000LL) == 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(0x100000000000LL, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    ((void (__fastcall *)(char *, char *))qword_1C02519A8)((char *)a1 + 16, (char *)a1 + 140);
  }
  *(_QWORD *)a1 |= 0x40000000000uLL;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
}
