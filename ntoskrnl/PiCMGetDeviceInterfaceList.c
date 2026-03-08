/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1406C46EC
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     McTemplateK0d_EtwWriteTransfer @ 0x14055D19C (McTemplateK0d_EtwWriteTransfer.c)
 *     McTemplateK0jzt_EtwWriteTransfer @ 0x1405621A8 (McTemplateK0jzt_EtwWriteTransfer.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406C488C (PiCMCaptureInterfaceListInputData.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  void *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r8
  int v14; // edi
  const WCHAR *v15; // r15
  NTSTATUS inited; // eax
  int v17; // r9d
  __int64 v18; // rcx
  int DeviceInterfaces; // eax
  int v20; // eax
  unsigned int v22; // [rsp+50h] [rbp-59h] BYREF
  void *v23; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  __int128 v26; // [rsp+78h] [rbp-31h] BYREF
  PCWSTR SourceString[2]; // [rsp+88h] [rbp-21h]
  __int64 v28; // [rsp+98h] [rbp-11h]

  v24 = a6;
  v28 = 0LL;
  *a6 = 0;
  v8 = 0LL;
  v9 = 0;
  v23 = 0LL;
  DestinationString = 0LL;
  v22 = 0;
  v26 = 0LL;
  *(_OWORD *)SourceString = 0LL;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, &v26);
  if ( v12 < 0 )
    goto LABEL_14;
  v14 = DWORD1(v26);
  v15 = SourceString[1];
  if ( (byte_140C0E10B & 2) != 0 )
    McTemplateK0jzt_EtwWriteTransfer(v11, v10, v13, (__int64)&v26 + 8, SourceString[1], BYTE6(v26) & 1);
  if ( !a3 || a4 < 0x14 || (v14 & 0xFFFE0000) != 0 || (_WORD)v14 )
  {
    v18 = 3221225485LL;
    goto LABEL_11;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, v15);
  v18 = (unsigned int)inited;
  if ( inited < 0 )
    goto LABEL_11;
  LOBYTE(v17) = 1;
  DeviceInterfaces = IopGetDeviceInterfaces(
                       (unsigned int)&v26 + 8,
                       (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                       (v14 & 0x10000) == 0,
                       v17,
                       (__int64)&v23,
                       (__int64)&v22);
  v9 = v22;
  v18 = (unsigned int)DeviceInterfaces;
  v8 = v23;
  if ( a4 - 20 < v22 )
  {
    v18 = 3221225507LL;
    goto LABEL_11;
  }
  if ( DeviceInterfaces < 0 )
  {
LABEL_11:
    v20 = PiCMReturnBufferResultData(v18, v9, 0LL, 0LL, 0, HIDWORD(v28), a3, a4, v24);
    goto LABEL_12;
  }
  v20 = PiCMReturnBufferResultData((unsigned int)DeviceInterfaces, v22, 0LL, v23, v22, HIDWORD(v28), a3, a4, v24);
LABEL_12:
  v12 = v20;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_14:
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString[1]);
  if ( (byte_140C0E10B & 2) != 0 )
    McTemplateK0d_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
