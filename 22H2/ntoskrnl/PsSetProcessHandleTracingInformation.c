/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1409079C8
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x1409E05B4 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExDisableHandleTracing @ 0x1405B28D8 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x14094C704 (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection(a1 + 139);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
