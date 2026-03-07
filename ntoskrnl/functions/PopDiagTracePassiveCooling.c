char __fastcall PopDiagTracePassiveCooling(__int64 a1, __int64 a2, char a3, int a4, unsigned int a5)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  bool v9; // cc
  void *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // kr00_4
  unsigned int v13; // kr04_4
  const EVENT_DESCRIPTOR *v14; // rdx
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER *p_LocalTime; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  int *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  char *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  __int64 v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v43; // [rsp+150h] [rbp+48h] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v43 = a4;
  LOWORD(v16) = 0;
  LocalTime.QuadPart = 0LL;
  v18 = 0LL;
  LOWORD(v17) = 0;
  if ( PopDiagHandleRegistered )
  {
    if ( a5
      || (LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(
                                                     PopDiagHandle,
                                                     &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC),
          (_BYTE)DeviceAttachmentBaseRefWithTag) )
    {
      v9 = a5 <= 1;
      if ( a5 == 1 )
      {
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL);
        if ( !(_BYTE)DeviceAttachmentBaseRefWithTag )
          return (char)DeviceAttachmentBaseRefWithTag;
        v9 = a5 <= 1;
      }
      if ( v9 )
      {
        DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
        v10 = DeviceAttachmentBaseRefWithTag;
        if ( DeviceAttachmentBaseRefWithTag )
        {
          v11 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
          if ( v11 )
          {
            LOWORD(v16) = *(_WORD *)(v11 + 128) >> 1;
            UserData.Ptr = (ULONGLONG)&v16;
            *(_QWORD *)&UserData.Size = 2LL;
            v22 = *(_QWORD *)(v11 + 136);
            v23 = 2 * (unsigned int)(unsigned __int16)v16;
            SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
            ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
            v25 = 8LL;
            p_LocalTime = &LocalTime;
            v28 = &v18;
            v27 = 2LL;
            v29 = 4LL;
            v31 = 4LL;
            LOWORD(v17) = a3 != 0;
            v26 = &v17;
            v12 = *(_DWORD *)(a1 + 20);
            v33 = 4LL;
            LODWORD(v18) = v12 / 0xA;
            v13 = *(_DWORD *)(a1 + 16);
            v35 = 4LL;
            v30 = (char *)&v18 + 4;
            v32 = a1 + 4;
            v34 = a1 + 8;
            v36 = a1 + 12;
            v38 = &v43;
            v40 = a1 + 80;
            HIDWORD(v18) = v13 / 0xA;
            v14 = &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC;
            v37 = 4LL;
            v39 = 4LL;
            v41 = 4LL;
            if ( a5 )
              v14 = &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL;
            EtwWrite(PopDiagHandle, v14, 0LL, 0xBu, &UserData);
          }
          LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v10, 0x67446F50u);
        }
      }
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
