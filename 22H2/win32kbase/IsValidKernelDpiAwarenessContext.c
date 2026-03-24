/*
 * XREFs of IsValidKernelDpiAwarenessContext @ 0x1C0094F64
 * Callers:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002C07C (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0094C20 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     DrvIsUniformSpaceMapping @ 0x1C0011110 (DrvIsUniformSpaceMapping.c)
 */

_BOOL8 __fastcall IsValidKernelDpiAwarenessContext(int a1)
{
  int v1; // ecx
  int v2; // ecx
  _BOOL8 result; // rax

  v1 = a1 & 0x5FFFFFFF;
  result = 1;
  if ( v1 != 18 && v1 != 34 && v1 != 1073766416 && v1 != 24592 )
  {
    v2 = v1 & 0x7FFE00FF;
    if ( v2 != 17 && (v2 != 19 || !(unsigned int)DrvIsUniformSpaceMapping(*(_QWORD *)(gpDispInfo + 16))) )
      return 0;
  }
  return result;
}
