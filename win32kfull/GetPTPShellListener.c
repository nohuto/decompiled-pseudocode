/*
 * XREFs of GetPTPShellListener @ 0x1C01491A6
 * Callers:
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01C6C2C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     GetPTPShellTarget @ 0x1C01F7BC0 (GetPTPShellTarget.c)
 * Callees:
 *     <none>
 */

__int64 GetPTPShellListener()
{
  __int64 v0; // rax

  if ( grpdeskRitInput && (v0 = *(_QWORD *)(grpdeskRitInput + 8LL)) != 0 )
    return *(_QWORD *)(v0 + 232);
  else
    return 0LL;
}
