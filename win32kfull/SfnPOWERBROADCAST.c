__int64 __fastcall SfnPOWERBROADCAST(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  unsigned __int8 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  unsigned __int16 v29; // r8
  int v30; // ecx
  _BYTE v31[8]; // [rsp+30h] [rbp-348h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-340h] BYREF
  int v33; // [rsp+40h] [rbp-338h] BYREF
  int v34; // [rsp+44h] [rbp-334h]
  unsigned __int64 v35; // [rsp+58h] [rbp-320h] BYREF
  __int128 v36; // [rsp+68h] [rbp-310h]
  __int64 v37; // [rsp+78h] [rbp-300h]
  __int128 v38; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v39; // [rsp+90h] [rbp-2E8h]
  __int64 v40; // [rsp+98h] [rbp-2E0h]
  __int128 v41; // [rsp+B8h] [rbp-2C0h]
  __int128 v42; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-2A0h]
  _DWORD v44[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v45[512]; // [rsp+140h] [rbp-238h] BYREF

  v34 = a2;
  RegionSize = (unsigned __int16)a3 & 0x8000;
  v9 = 0;
  memset_0(v44, 0, 0x58uLL);
  v35 = 0LL;
  v33 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v11 = PtiCurrentShared(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  if ( a1 )
    v14 = *a1;
  else
    LODWORD(v14) = 0;
  if ( !HMValidateHandleNoSecure(v14, 1) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 2 )
      {
        if ( (*(_BYTE *)(a1[5] + 19) & 1) == 0 )
          return 0LL;
        v29 = 769;
LABEL_46:
        v30 = 0;
        goto LABEL_44;
      }
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 != 6 && (_DWORD)a3 != 7 )
        {
          if ( (_DWORD)a3 == 32787 )
            v9 = 1;
          goto LABEL_14;
        }
        SetOrClrWF(0, a1, 0x301u, 1);
        v29 = 770;
        goto LABEL_46;
      }
      SetOrClrWF(0, a1, 0x301u, 1);
      v29 = 770;
    }
    else
    {
      v29 = 769;
    }
    v30 = 1;
LABEL_44:
    SetOrClrWF(v30, a1, v29, 1);
  }
LABEL_14:
  v16 = 0;
  if ( RegionSize )
  {
    if ( a4 )
    {
      if ( a4 >= (unsigned __int64)MmSystemRangeStart )
      {
        v16 = *(_DWORD *)(a4 + 16) + 20;
        if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( !v9 )
  {
    v17 = (unsigned __int8 *)v44;
    RegionSize = (ULONG_PTR)v44;
    v44[0] = 88;
    goto LABEL_20;
  }
  v17 = AllocCallbackMessage(88, v9, v16, v45, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v17;
  if ( !v17 )
    return 0LL;
LABEL_20:
  PtiCurrentShared(v15);
  v38 = 0LL;
  v39 = 0LL;
  if ( v17 != (unsigned __int8 *)v44 && v17 != v45 )
    PushW32ThreadLock((__int64)v17, &v38, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v13;
  *((_DWORD *)v17 + 12) = v34;
  *((_QWORD *)v17 + 7) = a3;
  if ( v16 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (char *)a4, v16, (void **)v17 + 10) < 0 )
      goto LABEL_52;
  }
  else
  {
    *((_QWORD *)v17 + 10) = a4;
  }
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  ThreadLock(a1, &v42);
  v18 = *((_QWORD *)v12 + 60);
  v41 = *(_OWORD *)(v18 + 64);
  v36 = v41;
  v37 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v21 = KeUserModeCallback(29LL, v17, *(unsigned int *)v17, &v35, &v33);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v31);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v25 + 64) = v41;
  *(_QWORD *)(v25 + 80) = v37;
  if ( v21 >= 0 && v33 == 24 )
  {
    v26 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v40 = *v26;
    goto LABEL_37;
  }
LABEL_52:
  v27 = 0LL;
LABEL_37:
  if ( v17 != (unsigned __int8 *)v44 && v17 != v45 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v38);
  }
  return v27;
}
