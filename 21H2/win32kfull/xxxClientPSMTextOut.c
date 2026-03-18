/*
 * XREFs of xxxClientPSMTextOut @ 0x1C022CBE4
 * Callers:
 *     xxxPSMTextOut @ 0x1C0250058 (xxxPSMTextOut.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C00BA240 (CreateCompatiblePublicDC.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

HDC __fastcall xxxClientPSMTextOut(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6)
{
  HDC result; // rax
  HDC v11; // r14
  unsigned __int8 *v12; // rdi
  unsigned int v13; // ebx
  int v14; // r12d
  _BYTE v15[4]; // [rsp+60h] [rbp-2D8h] BYREF
  int v16; // [rsp+64h] [rbp-2D4h] BYREF
  __int64 v17; // [rsp+68h] [rbp-2D0h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2C8h] BYREF
  _QWORD v19[3]; // [rsp+78h] [rbp-2C0h] BYREF
  __int128 v20; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-298h]
  unsigned __int8 v22[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v23[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset(v22, 0, sizeof(v22));
  v19[0] = 0LL;
  v16 = 0;
  v17 = 0LL;
  result = CreateCompatiblePublicDC(a1, &v17);
  v11 = result;
  v19[2] = result;
  if ( result )
  {
    result = (HDC)AllocCallbackMessage(80, 1u, a4[1], v23, 1, 0x200uLL);
    v12 = (unsigned __int8 *)result;
    v19[1] = result;
    if ( result )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v20 = 0LL;
      v21 = 0LL;
      if ( v12 != v22 && v12 != v23 )
        PushW32ThreadLock((__int64)v12, &v20, (__int64)Win32FreePool);
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
        v13 = GreSaveDCInternal(a1, 1);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v15);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v12 + 2) = 0LL;
        v14 = KeUserModeCallback(78LL, v12, *(unsigned int *)v12, v19, &v16);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v15);
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
        GreDeleteObject(v17);
      }
      result = (HDC)v22;
      if ( v12 != v22 )
      {
        result = (HDC)v23;
        if ( v12 != v23 )
        {
          if ( *((_QWORD *)v12 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
          }
          return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)&v20);
        }
      }
    }
    else if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v17);
    }
  }
  return result;
}
