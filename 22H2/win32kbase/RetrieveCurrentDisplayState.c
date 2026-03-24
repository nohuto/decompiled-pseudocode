/*
 * XREFs of RetrieveCurrentDisplayState @ 0x1C00C4B44
 * Callers:
 *     SetProtocolType @ 0x1C0079EB0 (SetProtocolType.c)
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS RetrieveCurrentDisplayState()
{
  int v0; // ebx
  NTSTATUS result; // eax
  NTSTATUS v2; // edx
  int v3; // eax
  bool v4; // zf
  int OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  OutputBuffer = 0;
  result = ZwPowerInformation(SystemVideoState, 0LL, 0, &OutputBuffer, 4u);
  v2 = result;
  if ( result < 0 )
  {
    dword_1C0251210 = 0;
  }
  else
  {
    v3 = OutputBuffer;
    if ( *(_BYTE *)gpbInHiberBoot )
      v3 = 0;
    v4 = v3 == 0;
    dword_1C0251210 = v3;
    result = v2;
    LOBYTE(v0) = !v4;
  }
  gPowerTransitionsState = v0;
  return result;
}
