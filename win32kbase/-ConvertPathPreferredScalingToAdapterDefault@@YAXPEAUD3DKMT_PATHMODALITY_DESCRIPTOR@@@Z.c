/*
 * XREFs of ?ConvertPathPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018D294
 * Callers:
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018D34C (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C01913D4 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ConvertPathPreferredScalingToAdapterDefault(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1, __int64 a2)
{
  __int64 DxgkWin32kInterface; // rax

  if ( (*(_QWORD *)a1 & 0x40000000000LL) == 0 )
    WdLogSingleEntry0(1LL);
  if ( (*(_DWORD *)a1 & 0x10000) == 0 )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)a1 + 35) == 253 )
  {
    if ( !_bittest64((const signed __int64 *)a1, 0x2Cu) )
      WdLogSingleEntry0(1LL);
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    (*(void (__fastcall **)(char *, char *))(DxgkWin32kInterface + 312))((char *)a1 + 16, (char *)a1 + 140);
  }
  *(_QWORD *)a1 |= 0x40000000000uLL;
  *((_DWORD *)a1 + 34) = *((_DWORD *)a1 + 35);
}
