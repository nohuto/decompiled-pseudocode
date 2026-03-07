__int64 __fastcall ClientEventCallback(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rbx
  _BYTE v10[4]; // [rsp+30h] [rbp-298h] BYREF
  int v11; // [rsp+34h] [rbp-294h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-288h] BYREF
  __int128 v14; // [rsp+48h] [rbp-280h] BYREF
  __int64 v15; // [rsp+58h] [rbp-270h]
  __int64 v16; // [rsp+60h] [rbp-268h]
  _OWORD v17[3]; // [rsp+70h] [rbp-258h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-228h]
  unsigned __int8 v19[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = a2[3] + 8;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v5 = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v4, v19, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v5;
  if ( !v5 )
    return 0LL;
  PtiCurrentShared();
  v14 = 0LL;
  v15 = 0LL;
  if ( v5 != (unsigned __int8 *)v17 && v5 != v19 )
    PushW32ThreadLock(v5, &v14, Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2, v4, (void **)v5 + 6) >= 0
    && (LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10),
        EtwTraceBeginCallback(65LL),
        *((_QWORD *)v5 + 2) = 0LL,
        v6 = KeUserModeCallback(65LL, v5, *(unsigned int *)v5, &v13, &v11),
        EtwTraceEndCallback(65LL),
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10),
        v6 >= 0)
    && v11 == 24 )
  {
    v7 = (__int64 *)v13;
    if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
      v7 = (__int64 *)MmUserProbeAddress;
    v8 = *v7;
    v16 = *v7;
  }
  else
  {
    LODWORD(v8) = 0;
  }
  if ( v5 != (unsigned __int8 *)v17 && v5 != v19 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v14);
  }
  return (unsigned int)v8;
}
