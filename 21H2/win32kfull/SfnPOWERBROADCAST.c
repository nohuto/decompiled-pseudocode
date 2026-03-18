/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0104F40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        struct tagWND *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned __int8 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  unsigned __int16 v27; // r8
  int v28; // ecx
  _BYTE v29[8]; // [rsp+30h] [rbp-358h] BYREF
  unsigned __int8 *v30; // [rsp+38h] [rbp-350h]
  int v31; // [rsp+40h] [rbp-348h] BYREF
  int v32; // [rsp+44h] [rbp-344h]
  unsigned __int64 v33; // [rsp+58h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-320h] BYREF
  __int128 v35; // [rsp+70h] [rbp-318h]
  __int64 v36; // [rsp+80h] [rbp-308h]
  __int128 v37; // [rsp+88h] [rbp-300h] BYREF
  __int64 v38; // [rsp+98h] [rbp-2F0h]
  __int64 v39; // [rsp+A0h] [rbp-2E8h]
  __int128 v40; // [rsp+C0h] [rbp-2C8h]
  __int128 v41; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-2A8h]
  _DWORD v43[24]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned __int8 v44[512]; // [rsp+150h] [rbp-238h] BYREF

  v32 = a2;
  v30 = (unsigned __int8 *)((unsigned __int16)a3 & 0x8000);
  v9 = 0;
  memset(v43, 0, 0x58uLL);
  v33 = 0LL;
  v31 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  if ( a1 )
    v13 = *(_QWORD *)a1;
  else
    LODWORD(v13) = 0;
  if ( !HMValidateHandleNoSecure(v13, 1) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 == 2 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 1) == 0 )
            return 0LL;
          v27 = 769;
        }
        else
        {
          if ( (unsigned int)a3 <= 5 )
            goto LABEL_14;
          if ( (unsigned int)a3 > 7 )
          {
            if ( (_DWORD)a3 == 32787 )
              v9 = 1;
            goto LABEL_14;
          }
          SetOrClrWF(0, a1, 0x301u, 1);
          v27 = 770;
        }
        v28 = 0;
        goto LABEL_44;
      }
      SetOrClrWF(0, a1, 0x301u, 1);
      v27 = 770;
    }
    else
    {
      v27 = 769;
    }
    v28 = 1;
LABEL_44:
    SetOrClrWF(v28, a1, v27, 1);
  }
LABEL_14:
  v14 = 0;
  if ( v30 )
  {
    if ( a4 )
    {
      if ( a4 >= (unsigned __int64)MmSystemRangeStart )
      {
        v14 = *(_DWORD *)(a4 + 16) + 20;
        if ( *(_DWORD *)(a4 + 16) >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( !v9 )
  {
    v15 = (unsigned __int8 *)v43;
    v30 = (unsigned __int8 *)v43;
    memset(&v43[1], 0, 0x54uLL);
    v43[0] = 88;
    goto LABEL_20;
  }
  v15 = AllocCallbackMessage(88, v9, v14, v44, 1, 0x200uLL);
  v30 = v15;
  if ( !v15 )
    return 0LL;
LABEL_20:
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v37 = 0LL;
  v38 = 0LL;
  if ( v15 != (unsigned __int8 *)v43 && v15 != v44 )
    PushW32ThreadLock((__int64)v15, &v37, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 5) = v12;
  *((_DWORD *)v15 + 12) = v32;
  *((_QWORD *)v15 + 7) = a3;
  if ( v14 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, v14, (void **)v15 + 10) < 0 )
      goto LABEL_52;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  ThreadLock((__int64)a1, (__int64 *)&v41);
  v16 = *(_QWORD *)(v11 + 480);
  v40 = *(_OWORD *)(v16 + 64);
  v35 = v40;
  v36 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v18;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v19 = KeUserModeCallback(29LL, v15, *(unsigned int *)v15, &v33, &v31);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v23 + 64) = v40;
  *(_QWORD *)(v23 + 80) = v36;
  if ( v19 >= 0 && v31 == 24 )
  {
    v24 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v24 = (__int64 *)MmUserProbeAddress;
    v25 = *v24;
    v39 = *v24;
    goto LABEL_37;
  }
LABEL_52:
  v25 = 0LL;
LABEL_37:
  if ( v15 != (unsigned __int8 *)v43 && v15 != v44 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
  }
  return v25;
}
