/*
 * XREFs of xxxClientPSMTextOut @ 0x1C0232E44
 * Callers:
 *     xxxPSMTextOut @ 0x1C0252AAC (xxxPSMTextOut.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00219B8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021A5C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GreSaveDC @ 0x1C008E4C8 (GreSaveDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BF9A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C0159590 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

HDC __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // rsi
  unsigned __int8 *v12; // rdi
  unsigned int v13; // r12d
  int v14; // r15d
  char v15; // [rsp+60h] [rbp-2E8h] BYREF
  _BYTE v16[3]; // [rsp+61h] [rbp-2E7h] BYREF
  int v17; // [rsp+64h] [rbp-2E4h] BYREF
  __int64 v18; // [rsp+68h] [rbp-2E0h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-2B8h] BYREF
  __int128 v21; // [rsp+98h] [rbp-2B0h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-2A0h]
  unsigned __int8 v23[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v24[512]; // [rsp+110h] [rbp-238h] BYREF

  v19[3] = a1;
  memset(v23, 0, sizeof(v23));
  v19[0] = 0LL;
  v17 = 0;
  v18 = 0LL;
  result = CreateCompatiblePublicDC(a1, &v18);
  v11 = result;
  v19[2] = result;
  if ( result )
  {
    result = (HDC)AllocCallbackMessage(80, 1u, a4[1], v24, 1, 0x200uLL);
    v12 = (unsigned __int8 *)result;
    v19[1] = result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v21 = 0LL;
      v22 = 0LL;
      if ( v12 != v23 && v12 != v24 )
        PushW32ThreadLock((__int64)v12, &v21, (__int64)Win32FreePool);
      *((_QWORD *)v12 + 7) = v11;
      *((_DWORD *)v12 + 16) = a2;
      *((_DWORD *)v12 + 17) = a3;
      *((_DWORD *)v12 + 18) = a5;
      *((_DWORD *)v12 + 19) = a6;
      *((_WORD *)v12 + 20) = *a4;
      *((_WORD *)v12 + 21) = a4[1];
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v12,
                  *((_QWORD *)a4 + 1),
                  (unsigned int)*a4 + 2,
                  (void **)v12 + 6) >= 0 )
      {
        v13 = GreSaveDC(a1);
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v14 = KeUserModeCallback(78LL, v12, *(unsigned int *)v12, v19, &v17);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
        ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v16);
        GreRestoreDC(a1, v13);
        if ( v11 != a1 && v14 >= 0 )
          NtGdiBitBltInternal(
            a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 88LL),
            *(_DWORD *)(gpDispInfo + 92LL),
            v11,
            0,
            0,
            13369376,
            0,
            0);
      }
      if ( v11 != a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v18);
      }
      result = (HDC)v23;
      if ( v12 != v23 )
      {
        result = (HDC)v24;
        if ( v12 != v24 )
        {
          if ( *((_QWORD *)v12 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
          }
          return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v18);
    }
  }
  return result;
}
