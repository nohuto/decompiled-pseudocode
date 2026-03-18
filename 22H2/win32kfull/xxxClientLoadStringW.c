/*
 * XREFs of xxxClientLoadStringW @ 0x1C0022098
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0021F40 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00245D4 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0024648 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00246CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

__int64 __fastcall xxxClientLoadStringW(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  unsigned __int8 *v7; // rdi
  int v8; // ebx
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // rbx
  ULONG64 v11; // rcx
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _BYTE v16[4]; // [rsp+30h] [rbp-2D8h] BYREF
  int v17; // [rsp+34h] [rbp-2D4h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-2D0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-2B0h]
  __int128 v22; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-298h]
  __int128 v24; // [rsp+78h] [rbp-290h] BYREF
  __int64 v25; // [rsp+88h] [rbp-280h]
  unsigned __int8 v26[64]; // [rsp+A0h] [rbp-268h] BYREF
  unsigned __int8 v27[512]; // [rsp+E0h] [rbp-228h] BYREF

  memset_0(v26, 0, sizeof(v26));
  v18 = 0LL;
  v17 = 0;
  v6 = 2 * a3;
  v21 = a2;
  v20[0] = 0;
  v20[1] = 2;
  v7 = (unsigned __int8 *)AllocCallbackMessage(0x40u, 1u, 2 * a3, v27, 0, 0x200uLL);
  RegionSize[1] = (ULONG_PTR)v7;
  if ( !v7 )
    return 0LL;
  PtiCurrentShared();
  v24 = 0LL;
  v25 = 0LL;
  if ( v7 != v26 && v7 != v27 )
    PushW32ThreadLock(v7, &v24, Win32FreePool);
  *((_DWORD *)v7 + 10) = a1;
  *((_DWORD *)v7 + 11) = a3;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v7, v6, (void **)v7 + 6) < 0 )
    goto LABEL_23;
  *((_DWORD *)v7 + 14) = v6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v8 = KeUserModeCallback(98LL, v7, *(unsigned int *)v7, &v18, &v17);
  EtwTraceEndCallback(98LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v16);
  if ( v8 < 0 || v17 != 24 )
    goto LABEL_23;
  v9 = (ULONG_PTR *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
    v9 = (ULONG_PTR *)MmUserProbeAddress;
  v10 = *v9;
  RegionSize[0] = *v9;
  v11 = v18;
  if ( v18 + 24 < v18 || v18 + 24 > MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_QWORD *)(v11 + 16);
  v22 = *(_OWORD *)v11;
  v23 = v12;
  v13 = *((_QWORD *)PtiCurrentShared() + 64);
  if ( v13 && (*(_DWORD *)(v13 + 84) & 1) != 0 && *(_DWORD **)(v13 + 96) == v20 )
  {
LABEL_23:
    v14 = 0;
  }
  else
  {
    v14 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v22, v10, 0, 0);
    RegionSize[0] = v14;
    CopyOutputString((struct _CALLBACKSTATUS *)&v22, (struct _LARGE_STRING *)v20, a3, 0);
  }
  if ( v7 != v26 && v7 != v27 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v24);
  }
  return v14;
}
