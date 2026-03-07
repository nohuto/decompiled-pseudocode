__int64 __fastcall HvpApplyIncrementalLogFile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 result; // rax
  _DWORD *v9; // rbx
  _DWORD *v10; // r15
  REGHANDLE v11; // r14
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v16; // [rsp+48h] [rbp-31h] BYREF
  _DWORD v17[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h]
  __int64 v19; // [rsp+60h] [rbp-19h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-1h] BYREF
  int *v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+94h] [rbp+1Bh]

  v6 = *(_QWORD *)(a2 + 8);
  LODWORD(v13) = 0;
  v16 = 0LL;
  v18 = v6;
  v19 = *(_QWORD *)(a2 + 16);
  v17[1] = *(_DWORD *)(a3 + 8);
  v17[0] = 512;
  while ( 1 )
  {
    result = HvpIncrementalLogFileEnumeratorAdvance(v17, &v16);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    v9 = v16;
    v10 = v16 + 10;
    result = HvpApplyLogEntryDataToFileBackedHive(BugCheckParameter2, v16[1] - (8 * v16[5] + 40), (__int64)&v13);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 40) = v9[4];
    if ( (v9[2] & 1) != 0 )
      *(_DWORD *)(a1 + 144) |= 1u;
    v11 = EtwpRegTraceHandle;
    v15 = v13;
    v12 = v9[1];
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_MOUNT_LOG_ENTRY_APPLIED;
    v14 = v12;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    {
      UserData.Reserved = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 4;
      v22 = &v15;
      v23 = 4;
      EtwWrite(v11, &EventDescriptor, 0LL, 2u, &UserData);
    }
    if ( a6 )
      HvpUpdateRecoveryVector(v10, (unsigned int)v9[5], a6);
  }
  return 1073741833LL;
}
