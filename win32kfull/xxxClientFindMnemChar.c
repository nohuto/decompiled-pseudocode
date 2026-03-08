/*
 * XREFs of xxxClientFindMnemChar @ 0x1C02150CC
 * Callers:
 *     xxxMNFindChar @ 0x1C0241D40 (xxxMNFindChar.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  _BYTE v10[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v11; // [rsp+34h] [rbp-2A4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-298h] BYREF
  __int128 v14; // [rsp+48h] [rbp-290h] BYREF
  __int64 v15; // [rsp+58h] [rbp-280h]
  __int64 v16; // [rsp+60h] [rbp-278h]
  unsigned __int8 v17[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v18[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset_0(v17, 0, 0x48uLL);
  v13 = 0LL;
  v11 = 0;
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v18, 1, 0x200uLL);
  v6 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v5);
    v14 = 0LL;
    v15 = 0LL;
    if ( v6 != v17 && v6 != v18 )
      PushW32ThreadLock((__int64)v6, &v14, (__int64)Win32FreePool);
    *((_WORD *)v6 + 28) = a2;
    *((_DWORD *)v6 + 15) = 1;
    *((_DWORD *)v6 + 16) = 1;
    *((_WORD *)v6 + 20) = *(_WORD *)a1;
    *((_WORD *)v6 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v6 + 6) >= 0
      && (LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v6 + 2) = 0LL,
          v7 = KeUserModeCallback(66LL, v6, *(unsigned int *)v6, &v13, &v11),
          EtwTraceEndCallback(66LL),
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10),
          v7 >= 0)
      && v11 == 24 )
    {
      v8 = (__int64 *)v13;
      if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
        v8 = (__int64 *)MmUserProbeAddress;
      v9 = *v8;
      v16 = *v8;
    }
    else
    {
      LODWORD(v9) = 0;
    }
    if ( v6 != v17 && v6 != v18 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v14);
    }
    return (unsigned __int8 *)(unsigned int)v9;
  }
  return result;
}
