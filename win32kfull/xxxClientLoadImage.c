unsigned __int8 *__fastcall xxxClientLoadImage(
        char **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // r15d
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int8 *v11; // rdi
  unsigned __int16 v12; // ax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rbx
  unsigned __int8 *result; // rax
  _BYTE v18[4]; // [rsp+30h] [rbp-2D8h] BYREF
  int v19; // [rsp+34h] [rbp-2D4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-2C8h]
  void *v22; // [rsp+48h] [rbp-2C0h]
  unsigned __int64 v23; // [rsp+50h] [rbp-2B8h] BYREF
  __int128 v24; // [rsp+58h] [rbp-2B0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-2A0h]
  __int64 v26; // [rsp+70h] [rbp-298h]
  _DWORD v27[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v28[512]; // [rsp+E0h] [rbp-228h] BYREF

  v7 = a3;
  v21 = 0LL;
  memset_0(v27, 0, sizeof(v27));
  v23 = 0LL;
  v19 = 0;
  v10 = *((unsigned __int16 *)a1 + 1);
  v22 = 0LL;
  if ( (_WORD)v10 )
  {
    result = AllocCallbackMessage(96, (_WORD)v10 != 0, v10 & -(__int64)((_WORD)v10 != 0), v28, 1, 0x200uLL);
    v11 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v11 = (unsigned __int8 *)v27;
    RegionSize = (ULONG_PTR)v27;
    v27[0] = 96;
  }
  PtiCurrentShared(v9);
  v24 = 0LL;
  v25 = 0LL;
  if ( v11 != (unsigned __int8 *)v27 && v11 != v28 )
    PushW32ThreadLock((__int64)v11, &v24, (__int64)Win32FreePool);
  *((_DWORD *)v11 + 10) = v21;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v11,
              (char *)v22,
              (unsigned int)(unsigned __int16)v21 + 2,
              (void **)v11 + 6) < 0 )
    goto LABEL_21;
  *((_WORD *)v11 + 28) = *(_WORD *)a1;
  v12 = *((_WORD *)a1 + 1);
  *((_WORD *)v11 + 29) = v12;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v11,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v11 + 8) < 0 )
      goto LABEL_21;
  }
  else
  {
    *((_QWORD *)v11 + 8) = a1[1];
  }
  *((_DWORD *)v11 + 18) = v7;
  *((_DWORD *)v11 + 19) = a4;
  *((_DWORD *)v11 + 20) = a5;
  *((_DWORD *)v11 + 21) = a6;
  *((_DWORD *)v11 + 22) = 0;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v18);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v13 = KeUserModeCallback(74LL, v11, *(unsigned int *)v11, &v23, &v19);
  EtwTraceEndCallback(74LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v18);
  if ( v13 >= 0 && v19 == 24 )
  {
    v15 = (__int64 *)v23;
    if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v16 = *v15;
    v26 = v16;
    if ( v16 )
    {
      LOBYTE(v14) = 3;
      v16 = HMValidateHandleNoRip(v16, v14);
    }
    goto LABEL_14;
  }
LABEL_21:
  v16 = 0LL;
LABEL_14:
  if ( v11 != (unsigned __int8 *)v27 && v11 != v28 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v24);
  }
  return (unsigned __int8 *)v16;
}
