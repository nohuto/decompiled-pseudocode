void __fastcall PopDiagTraceActiveCooling(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  bool v8; // cc
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rdi
  __int64 v11; // rax
  char *v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned int v16; // kr00_4
  unsigned int *v17; // r8
  unsigned int v18; // edx
  const EVENT_DESCRIPTOR *v19; // rdx
  unsigned __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int16 *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char v33; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  _DWORD v36[10]; // [rsp+140h] [rbp+40h] BYREF

  v21 = 0;
  v22 = 0;
  v20 = 0;
  LocalTime.QuadPart = 0LL;
  if ( PopDiagHandleRegistered && (a4 || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC)) )
  {
    v8 = a4 <= 1;
    if ( a4 == 1 )
    {
      if ( !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL) )
        return;
      v8 = 1;
    }
    if ( v8 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a2, 0x67446F50u);
      v10 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v11 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
        if ( v11 )
        {
          v20 = *(_WORD *)(v11 + 128) >> 1;
          UserData.Ptr = (ULONGLONG)&v20;
          *(_QWORD *)&UserData.Size = 2LL;
          v26 = *(_QWORD *)(v11 + 136);
          v27 = 2 * v20;
          v28 = 0;
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
          v30 = 8LL;
          p_LocalTime = &LocalTime;
          v12 = &v33;
          v32 = 2LL;
          v13 = 0;
          v14 = 10LL;
          v21 = a3 != 0;
          v31 = &v21;
          do
          {
            v15 = v13;
            *(_QWORD *)(v12 - 4) = 4LL;
            ++v13;
            v12 += 16;
            v16 = *(_DWORD *)(a1 + 4 * v15 + 36);
            v17 = &v36[v15];
            *(_QWORD *)(v12 - 28) = v17;
            *v17 = v16 / 0xA;
            --v14;
          }
          while ( v14 );
          v35 = 4LL;
          v18 = *(_DWORD *)(a1 + 16) / 0xAu;
          v34 = &v22;
          v22 = v18;
          v19 = &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC;
          if ( a4 )
            v19 = &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL;
          EtwWrite(PopDiagHandle, v19, 0LL, 0xFu, &UserData);
        }
        ObfDereferenceObjectWithTag(v10, 0x67446F50u);
      }
    }
  }
}
