/*
 * XREFs of DlpGetServiceNameInSystemSpace @ 0x1C00B2AD4
 * Callers:
 *     DlpLoadDxgkrnl @ 0x1C00B29D8 (DlpLoadDxgkrnl.c)
 *     DlpUnloadDxgkrnl @ 0x1C01D14CC (DlpUnloadDxgkrnl.c)
 * Callees:
 *     <none>
 */

_OWORD *DlpGetServiceNameInSystemSpace()
{
  _OWORD *result; // rax

  result = ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x706D6C44u);
  if ( result )
  {
    *result = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\DXGKrnl";
    result[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\DXGKrnl";
    result[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\DXGKrnl";
    result[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\DXGKrnl";
    result[4] = *(_OWORD *)L"ControlSet\\Services\\DXGKrnl";
    result[5] = *(_OWORD *)L"et\\Services\\DXGKrnl";
    result[6] = *(_OWORD *)L"ces\\DXGKrnl";
    *((_QWORD *)result + 14) = *(_QWORD *)L"rnl";
  }
  return result;
}
