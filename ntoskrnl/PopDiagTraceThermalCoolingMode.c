/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x140846CFC
 * Callers:
 *     PopThermalWorker @ 0x140846460 (PopThermalWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(__int64 a1, __int16 a2)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  const WCHAR *v8; // rdx
  unsigned __int16 v10; // [rsp+38h] [rbp-19h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  __int16 *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v11 = 0;
  DestinationString = 0LL;
  v10 = 0;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x67446F50u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v6 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
        if ( v6 )
        {
          v10 = *(_WORD *)(v6 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v10;
          *(_QWORD *)&UserData.Size = 2LL;
          v7 = *(_QWORD *)(v6 + 136);
          v15 = 2 * v10;
          v8 = L"active";
          v14 = v7;
          v16 = 0;
          if ( a2 )
            v8 = L"passive";
          RtlInitUnicodeString(&DestinationString, v8);
          v11 = DestinationString.Length >> 1;
          v17 = &v11;
          Buffer = DestinationString.Buffer;
          v20 = 2 * (DestinationString.Length >> 1);
          v18 = 2LL;
          v21 = 0;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE, 0LL, 4u, &UserData);
        }
        LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
      }
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
