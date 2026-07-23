/*
 * XREFs of PsGetCurrentProcessWow64Process @ 0x14021B600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWow64Process()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( result )
    return *(_QWORD *)result;
  return result;
}
