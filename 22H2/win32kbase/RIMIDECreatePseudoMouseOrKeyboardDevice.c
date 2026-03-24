/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0168270
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0131AA0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C000BA60 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimFindReferencedRimObj @ 0x1C015274C (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C01528B8 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01547D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01672B0 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v12[9]; // [rsp+60h] [rbp-A0h] BYREF
  char v13; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 865);
  v11[0] = 0x1000000LL;
  v11[1] = &v13;
  Handle = (HANDLE)-1LL;
  v10 = -1LL;
  memset(v12, 0, sizeof(v12));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath();
  if ( ReferencedRimObj >= 0 )
  {
    v5 = rimInputTypeFromDeviceTypeAndUsages(a1, 0, 0);
    if ( v5 - 1 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 879);
    ReferencedRimObj = rimFindReferencedRimObj(v5, 0, 0, (struct _LIST_ENTRY **)&Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v12[0]) &= 0xFFFFFFF8;
        *(_QWORD *)&v12[5] = 0LL;
        DWORD2(v12[5]) = 0;
        *(_QWORD *)((char *)&v12[7] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v6) + 880);
        HIDWORD(v12[7]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v12[7] + 4)) + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, (__int64)v11, a1, v12, 0, &v10);
        if ( ReferencedRimObj >= 0 )
          *a2 = v10;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
