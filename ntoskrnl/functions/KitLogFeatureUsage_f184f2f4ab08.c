NTSTATUS __fastcall KitLogFeatureUsage(ULONGLONG a1, unsigned __int64 a2, int a3)
{
  int v6; // ebx
  int v7; // eax
  __int16 v9; // [rsp+48h] [rbp-C0h] BYREF
  int v10; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING v11; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v13; // [rsp+78h] [rbp-90h]
  int v14; // [rsp+80h] [rbp-88h]
  int v15; // [rsp+84h] [rbp-84h]
  __int16 *v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+90h] [rbp-78h]
  int v18; // [rsp+94h] [rbp-74h]
  wchar_t *Buffer; // [rsp+98h] [rbp-70h]
  int Length; // [rsp+A0h] [rbp-68h]
  int v21; // [rsp+A4h] [rbp-64h]
  _BYTE v22[512]; // [rsp+A8h] [rbp-60h] BYREF

  v10 = a3;
  v11 = 0LL;
  if ( KitEtwHandle && EtwEventEnabled(KitEtwHandle, &KitFeatureIdUsedEvent) )
  {
    if ( a3 )
    {
      v6 = a3 - 1;
      if ( v6 )
      {
        if ( v6 != 1 || (a2 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_13:
          v10 = 3;
          v11 = *(UNICODE_STRING *)&NoCallerIdString;
LABEL_14:
          UserData.Reserved = 0;
          v15 = 0;
          v18 = 0;
          v21 = 0;
          v13 = &v10;
          v9 = v11.Length >> 1;
          v16 = &v9;
          Buffer = v11.Buffer;
          Length = v11.Length;
          v14 = 4;
          UserData.Ptr = a1;
          UserData.Size = 16;
          v17 = 2;
          return EtwWriteEx(KitEtwHandle, &KitFeatureIdUsedEvent, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( a2 )
    {
      memset(v22, 0, 0x1FEuLL);
      v11.MaximumLength = 510;
      v11.Buffer = (wchar_t *)v22;
      v7 = KeGetCurrentIrql() > 1u ? RtlPcToFileName(a2, &v11) : RtlPcToFilePath(a2, &v11);
      if ( v7 >= 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  return 0;
}
