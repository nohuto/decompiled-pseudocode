char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  int v6; // r14d
  REGHANDLE v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 *v13; // rdx
  char v14; // al
  REGHANDLE v15; // rbx
  const EVENT_DESCRIPTOR *v16; // rdx
  int ActivityId; // [rsp+28h] [rbp-91h]
  int RelatedActivityId; // [rsp+30h] [rbp-89h]
  ULONG UserDataCount; // [rsp+38h] [rbp-81h]
  char v21; // [rsp+48h] [rbp-71h] BYREF
  char v22; // [rsp+49h] [rbp-70h] BYREF
  char v23; // [rsp+4Ah] [rbp-6Fh] BYREF
  int v24; // [rsp+4Ch] [rbp-6Dh] BYREF
  __int64 v25; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-61h] BYREF
  char *v27; // [rsp+68h] [rbp-51h]
  __int64 v28; // [rsp+70h] [rbp-49h]
  char *v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+80h] [rbp-39h]
  char *v31; // [rsp+88h] [rbp-31h]
  __int64 v32; // [rsp+90h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+98h] [rbp-21h] BYREF
  int *v34; // [rsp+B8h] [rbp-1h]
  __int64 v35; // [rsp+C0h] [rbp+7h]
  __int64 *v36; // [rsp+C8h] [rbp+Fh]
  __int64 v37; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  __int64 v39; // [rsp+118h] [rbp+5Fh] BYREF

  v5 = &retaddr;
  v39 = a1;
  v6 = a5;
  if ( a4 == 2 )
  {
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      LOBYTE(v5) = tlgKeywordOn(&dword_140C03928, 0x400000000000LL);
      if ( (_BYTE)v5 )
      {
        v34 = &v24;
        v13 = (unsigned __int8 *)byte_14002ED30;
        UserDataCount = 3;
        goto LABEL_12;
      }
    }
  }
  else if ( a4 == 3 )
  {
    _m_prefetchw(&PopLogFxDefaultPepWorkerOrphaned);
    LODWORD(v5) = _InterlockedAnd(&PopLogFxDefaultPepWorkerOrphaned, 0);
    if ( (_DWORD)v5 )
    {
      if ( (unsigned int)dword_140C03928 > 5 )
      {
        LOBYTE(v5) = tlgKeywordOn(&dword_140C03928, 0x400000000000LL);
        if ( (_BYTE)v5 )
        {
          v25 = 0x1000000LL;
          v34 = &v24;
          v13 = (unsigned __int8 *)&word_14002ECE2;
          v37 = 8LL;
          v36 = &v25;
          UserDataCount = v12;
LABEL_12:
          v35 = v12;
          v24 = v6;
          LOBYTE(v5) = tlgWriteEx_EtwWriteEx(
                         (__int64)&dword_140C03928,
                         v13,
                         v11,
                         1u,
                         ActivityId,
                         RelatedActivityId,
                         UserDataCount,
                         &v33);
        }
      }
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END)
      || EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v14 = -1;
        }
        else
        {
          v14 = a3;
          if ( a2 == 3 )
            v14 = -2;
        }
      }
      else
      {
        v14 = -3;
      }
      v21 = v14;
      v22 = a4;
      UserData.Ptr = (ULONGLONG)&v39;
      v23 = v6;
      v27 = &v21;
      v29 = &v22;
      v31 = &v23;
      *(_QWORD *)&UserData.Size = 8LL;
      v28 = 1LL;
      v30 = 1LL;
      v32 = 1LL;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
        LOBYTE(v5) = EtwWriteEx(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
      if ( a4 == 2 )
      {
        v15 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v16 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED;
      }
      else
      {
        if ( a4 != 3 )
          return (char)v5;
        v15 = PopDiagHandle;
        LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v16 = &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED;
      }
      LOBYTE(v5) = EtwWriteEx(v15, v16, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v5;
}
