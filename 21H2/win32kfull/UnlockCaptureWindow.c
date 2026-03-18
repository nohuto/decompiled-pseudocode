/*
 * XREFs of UnlockCaptureWindow @ 0x1C0102730
 * Callers:
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 */

__int64 __fastcall UnlockCaptureWindow(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 104);
  if ( *v2 )
  {
    --*(_DWORD *)(gpsi + 6992LL);
    HMAssignmentUnlock(v2);
    return UpdateRawMouseMode(a1, v3, v4, v5);
  }
  return result;
}
