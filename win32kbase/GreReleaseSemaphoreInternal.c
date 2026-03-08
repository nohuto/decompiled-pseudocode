/*
 * XREFs of GreReleaseSemaphoreInternal @ 0x1C004B6D0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleaseSemaphoreInternal(struct _ERESOURCE *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(a1);
    return PsLeavePriorityRegion(v2, v1);
  }
  return result;
}
