/*
 * XREFs of PiCMGetRelatedDeviceInstance @ 0x1406C6068
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x1402E1820 (RtlStringCbCopyExW.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceParent @ 0x1406C7D1C (_CmGetDeviceParent.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     PiGetRelatedDevice @ 0x1406C8018 (PiGetRelatedDevice.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRelatedDeviceInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  wchar_t *Pool2; // rdi
  int v8; // r12d
  wchar_t *v9; // r15
  __int64 v10; // rcx
  NTSTATUS inited; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // esi
  NTSTATUS DeviceParent; // eax
  NTSTATUS v15; // eax
  __int64 v17; // rax
  unsigned int v18; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  __int128 v20; // [rsp+70h] [rbp-1h] BYREF
  PCWSTR SourceString[2]; // [rsp+80h] [rbp+Fh]
  __int64 v22; // [rsp+90h] [rbp+1Fh]

  v6 = a4;
  v22 = 0LL;
  Pool2 = 0LL;
  v20 = 0LL;
  v8 = 0;
  v9 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  *a6 = 0;
  DestinationString = 0LL;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, &v20);
  if ( inited < 0 )
    goto LABEL_21;
  if ( !SourceString[0] || *(_QWORD *)((char *)&v20 + 4) != 0x100000000LL || !a3 )
    goto LABEL_38;
  if ( a4 < 0x14 )
  {
    v6 = a4;
LABEL_38:
    inited = -1073741811;
    goto LABEL_23;
  }
  v12 = 2;
  v13 = 0;
  if ( a4 - 20 >= 2 )
    v13 = a4 - 20;
  if ( v13 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v13, 879783504LL);
    if ( !Pool2 )
      inited = -1073741670;
    if ( inited < 0 )
      goto LABEL_22;
  }
  inited = CmValidateDeviceName(v10, SourceString[0]);
  if ( inited < 0 )
    goto LABEL_22;
  if ( HIDWORD(SourceString[1]) == 1 )
  {
    v18 = v13 >> 1;
    DeviceParent = CmGetDeviceParent(*(_QWORD *)&PiPnpRtlCtx, SourceString[0], Pool2, &v18);
    v8 = v18;
    inited = DeviceParent;
  }
  else
  {
    if ( HIDWORD(SourceString[1]) != 2 )
    {
      if ( HIDWORD(SourceString[1]) != 3 )
      {
        inited = -1073741811;
        goto LABEL_22;
      }
      if ( (unsigned __int8)CmIsRootDevice(SourceString[0]) )
      {
        inited = -1073741810;
        goto LABEL_22;
      }
      v12 = 3;
    }
    inited = RtlInitUnicodeStringEx(&DestinationString, SourceString[0]);
    if ( inited < 0 )
      goto LABEL_22;
    v18 = 400;
    v17 = ExAllocatePool2(256LL, 400LL, 879783504LL);
    v9 = (wchar_t *)v17;
    if ( !v17 )
    {
      inited = -1073741670;
      goto LABEL_22;
    }
    inited = PiGetRelatedDevice(&DestinationString, v17, &v18, v12);
    if ( inited < 0 )
      goto LABEL_22;
    inited = RtlStringCbCopyExW(Pool2, v13, v9, 0LL, 0LL, 0x800u);
    if ( inited == -2147483643 )
      inited = -1073741789;
    v8 = (v18 >> 1) + 1;
  }
  if ( inited < 0 )
  {
LABEL_22:
    v6 = a4;
LABEL_23:
    v15 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v8), 0LL, 0LL, 0, v22, a3, v6, a6);
    goto LABEL_17;
  }
  v15 = PiCMReturnBufferResultData((unsigned int)inited, (unsigned int)(2 * v8), 0LL, Pool2, 2 * v8, v22, a3, a4, a6);
LABEL_17:
  inited = v15;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x34706E50u);
LABEL_21:
  PiCMReleaseObjectInputData(&v20);
  return (unsigned int)inited;
}
