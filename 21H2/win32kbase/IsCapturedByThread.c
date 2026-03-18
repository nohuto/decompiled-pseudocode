/*
 * XREFs of IsCapturedByThread @ 0x1C01E7FA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C003B2DC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1)
{
  __int64 MouseProcessor; // rax
  char v3; // dl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v3 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3576)) == *a1;
  return v3;
}
