/*
 * XREFs of DlpGetServiceNameInSystemSpace @ 0x1C00BE9FC
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C00BE900 (DlpLoadDxgkrnl.c)
 *     DlpUnloadDxgkrnl @ 0x1C0210238 (DlpUnloadDxgkrnl.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

_OWORD *DlpGetServiceNameInSystemSpace()
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v1; // rbx
  _OWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, 0x78uLL, 0x706D6C44u);
  v1 = PoolWithTag;
  if ( ExPoolZeroingNativelySupported )
  {
    if ( PoolWithTag )
      goto LABEL_4;
  }
  else if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x78uLL);
LABEL_4:
    result = v1;
    *v1 = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\DXGKrnl";
    v1[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\DXGKrnl";
    v1[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\DXGKrnl";
    v1[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\DXGKrnl";
    v1[4] = *(_OWORD *)L"ControlSet\\Services\\DXGKrnl";
    v1[5] = *(_OWORD *)L"et\\Services\\DXGKrnl";
    v1[6] = *(_OWORD *)L"ces\\DXGKrnl";
    *((_QWORD *)v1 + 14) = *(_QWORD *)L"rnl";
    return result;
  }
  return 0LL;
}
