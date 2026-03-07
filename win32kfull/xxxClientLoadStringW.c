__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdi
  int v9; // ebx
  ULONG_PTR *v10; // rcx
  ULONG_PTR v11; // rbx
  ULONG64 v12; // rcx
  __int64 v13; // xmm0_8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _BYTE v17[4]; // [rsp+30h] [rbp-2D8h] BYREF
  int v18; // [rsp+34h] [rbp-2D4h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-2D0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v21[2]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-2B0h]
  __int128 v23; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-298h]
  __int128 v25; // [rsp+78h] [rbp-290h] BYREF
  __int64 v26; // [rsp+88h] [rbp-280h]
  unsigned __int8 v27[64]; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int8 v28[512]; // [rsp+E0h] [rbp-228h] BYREF

  memset_0(v27, 0, sizeof(v27));
  v19 = 0LL;
  v18 = 0;
  v6 = 2 * a3;
  v22 = a2;
  v21[0] = 0;
  v21[1] = 2;
  v8 = AllocCallbackMessage(64, 1u, 2 * a3, v28, 0, 0x200uLL);
  RegionSize[1] = (ULONG_PTR)v8;
  if ( !v8 )
    return 0LL;
  PtiCurrentShared(v7);
  v25 = 0LL;
  v26 = 0LL;
  if ( v8 != v27 && v8 != v28 )
    PushW32ThreadLock((__int64)v8, &v25, (__int64)Win32FreePool);
  *((_DWORD *)v8 + 10) = a1;
  *((_DWORD *)v8 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v8, v6, (void **)v8 + 6) < 0 )
    goto LABEL_23;
  *((_DWORD *)v8 + 14) = v6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v9 = KeUserModeCallback(98LL, v8, *(unsigned int *)v8, &v19, &v18);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v17);
  if ( v9 < 0 || v18 != 24 )
    goto LABEL_23;
  v10 = (ULONG_PTR *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v10 = (ULONG_PTR *)MmUserProbeAddress;
  v11 = *v10;
  RegionSize[0] = *v10;
  v12 = v19;
  if ( v19 + 24 < v19 || v19 + 24 > MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_QWORD *)(v12 + 16);
  v23 = *(_OWORD *)v12;
  v24 = v13;
  v14 = *((_QWORD *)PtiCurrentShared(v12) + 64);
  if ( v14 && (*(_DWORD *)(v14 + 84) & 1) != 0 && *(_DWORD **)(v14 + 96) == v21 )
  {
LABEL_23:
    v15 = 0;
  }
  else
  {
    v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v23, v11, 0, 0);
    RegionSize[0] = v15;
    CopyOutputString((struct _CALLBACKSTATUS *)&v23, (struct _LARGE_STRING *)v21, a3, 0);
  }
  if ( v8 != v27 && v8 != v28 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v25);
  }
  return v15;
}
