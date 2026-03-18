/*
 * XREFs of xxxClientFindMnemChar @ 0x1C022C224
 * Callers:
 *     xxxMNFindChar @ 0x1C024D8A8 (xxxMNFindChar.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  unsigned __int8 *v5; // rdi
  int v6; // ebx
  __int64 *v7; // rcx
  __int64 v8; // rbx
  _BYTE v9[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v10; // [rsp+34h] [rbp-2A4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-298h] BYREF
  __int128 v13; // [rsp+48h] [rbp-290h] BYREF
  __int64 v14; // [rsp+58h] [rbp-280h]
  __int64 v15; // [rsp+60h] [rbp-278h]
  unsigned __int8 v16[72]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v17[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset(v16, 0, sizeof(v16));
  v12 = 0LL;
  v10 = 0;
  result = AllocCallbackMessage(72, 1u, a1[1], v17, 1, 0x200uLL);
  v5 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13 = 0LL;
    v14 = 0LL;
    if ( v5 != v16 && v5 != v17 )
      PushW32ThreadLock((__int64)v5, &v13, (__int64)Win32FreePool);
    *((_WORD *)v5 + 28) = a2;
    *((_DWORD *)v5 + 15) = 1;
    *((_DWORD *)v5 + 16) = 1;
    *((_WORD *)v5 + 20) = *a1;
    *((_WORD *)v5 + 21) = a1[1];
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v5, *((_QWORD *)a1 + 1), (unsigned int)*a1 + 2, (void **)v5 + 6) >= 0
      && (LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v5 + 2) = 0LL,
          v6 = KeUserModeCallback(66LL, v5, *(unsigned int *)v5, &v12, &v10),
          EtwTraceEndCallback(66LL),
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9),
          v6 >= 0)
      && v10 == 24 )
    {
      v7 = (__int64 *)v12;
      if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v8 = *v7;
      v15 = *v7;
    }
    else
    {
      LODWORD(v8) = 0;
    }
    if ( v5 != v16 && v5 != v17 )
    {
      if ( *((_QWORD *)v5 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v13);
    }
    return (unsigned __int8 *)(unsigned int)v8;
  }
  return result;
}
