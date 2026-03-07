__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[18]; // [rsp+60h] [rbp-A0h] BYREF
  char v14; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 868LL);
  v12[0] = 0x1000000LL;
  v12[1] = &v14;
  v11 = -1LL;
  memset(v13, 0, sizeof(v13));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0LL, 0LL, v12);
  if ( ReferencedRimObj >= 0 )
  {
    v5 = 1;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v5 = 2;
      }
      else
      {
        v5 = 0;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 882LL);
      }
    }
    ReferencedRimObj = rimFindReferencedRimObj(v5, 0LL, 0LL, &Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3LL, 0LL);
      if ( ReferencedRimObj >= 0 )
      {
        HIDWORD(v13[1]) &= 0xFFFFFFF8;
        v13[10] = 0LL;
        LODWORD(v13[11]) = 0;
        v6 = ((__int64 (*)(void))PsGetCurrentProcessWin32Process)();
        if ( v6 )
        {
          v7 = -*(_QWORD *)v6;
          v6 &= -(__int64)(*(_QWORD *)v6 != 0LL);
        }
        *(_QWORD *)((char *)&v13[14] + 4) = *(_QWORD *)(v6 + 864);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        HIDWORD(v13[15]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType(-1, (unsigned int)v12, a1, (unsigned int)v13, 0, (__int64)&v11);
        if ( ReferencedRimObj >= 0 )
          *a2 = v11;
        ZwClose((HANDLE)0xFFFFFFFFFFFFFFFFLL);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
