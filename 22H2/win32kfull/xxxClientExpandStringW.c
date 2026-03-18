/*
 * XREFs of xxxClientExpandStringW @ 0x1C0020288
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00217E0 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0022D84 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0024328 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0024648 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00246CC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBE98 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00EBF84 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rdi
  int v4; // ebx
  ULONG_PTR *v5; // rcx
  ULONG_PTR v6; // rbx
  ULONG64 v7; // rcx
  __int64 v8; // xmm0_8
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[4]; // [rsp+30h] [rbp-308h] BYREF
  _DWORD v13[3]; // [rsp+34h] [rbp-304h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-2D8h]
  __int128 v17; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-2C0h]
  _OWORD v19[3]; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-278h]
  unsigned __int8 v21[592]; // [rsp+D0h] [rbp-268h] BYREF

  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  memset(v13, 0, sizeof(v13));
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v2, v21, 1, 0x248uLL);
  RegionSize[1] = (ULONG_PTR)v3;
  if ( !v3 )
    return 0LL;
  PtiCurrentShared();
  v17 = 0LL;
  v18 = 0LL;
  if ( v3 != (unsigned __int8 *)v19 && v3 != v21 )
    PushW32ThreadLock(v3, &v17, Win32FreePool);
  *((_DWORD *)v3 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v3 + 11) ^= (*((_DWORD *)v3 + 11) ^ *((_DWORD *)a1 + 1)) & 0x7FFFFFFF;
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v3, *((void **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v3 + 6) < 0 )
    goto LABEL_25;
  *((_DWORD *)v3 + 11) &= ~0x80000000;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v3 + 2) = 0LL;
  v4 = KeUserModeCallback(59LL, v3, *(unsigned int *)v3, &v13[1], v13);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v4 < 0 || v13[0] != 24 )
    goto LABEL_25;
  v5 = *(ULONG_PTR **)&v13[1];
  if ( (unsigned __int64)(*(_QWORD *)&v13[1] + 8LL) < *(_QWORD *)&v13[1]
    || *(_QWORD *)&v13[1] + 8LL > MmUserProbeAddress )
  {
    v5 = (ULONG_PTR *)MmUserProbeAddress;
  }
  v6 = *v5;
  RegionSize[0] = *v5;
  v7 = *(_QWORD *)&v13[1];
  if ( (unsigned __int64)(*(_QWORD *)&v13[1] + 24LL) < *(_QWORD *)&v13[1]
    || *(_QWORD *)&v13[1] + 24LL > MmUserProbeAddress )
  {
    v7 = MmUserProbeAddress;
  }
  v8 = *(_QWORD *)(v7 + 16);
  v15 = *(_OWORD *)v7;
  v16 = v8;
  v9 = *((_QWORD *)PtiCurrentShared() + 64);
  if ( v9 && (*(_DWORD *)(v9 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v9 + 96) == a1 )
  {
LABEL_25:
    v10 = 0;
  }
  else
  {
    v10 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v15, v6, *((_DWORD *)a1 + 1) >> 31, 0);
    RegionSize[0] = v10;
    CopyOutputString((struct _CALLBACKSTATUS *)&v15, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v3 != (unsigned __int8 *)v19 && v3 != v21 )
  {
    if ( *((_QWORD *)v3 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v17);
  }
  return v10;
}
