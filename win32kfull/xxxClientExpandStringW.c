/*
 * XREFs of xxxClientExpandStringW @ 0x1C0108BE4
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107CAC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0109294 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0109318 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned __int8 *v4; // rdi
  int v5; // ebx
  ULONG_PTR *v6; // rcx
  ULONG_PTR v7; // rbx
  ULONG64 v8; // rcx
  __int64 v9; // xmm0_8
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _BYTE v13[4]; // [rsp+30h] [rbp-308h] BYREF
  _DWORD v14[3]; // [rsp+34h] [rbp-304h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v16; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v17; // [rsp+60h] [rbp-2D8h]
  __int128 v18; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 v19; // [rsp+78h] [rbp-2C0h]
  _OWORD v20[3]; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-278h]
  unsigned __int8 v22[592]; // [rsp+D0h] [rbp-268h] BYREF

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  memset(v14, 0, sizeof(v14));
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v4 = AllocCallbackMessage(56, 1u, v2, v22, 1, 0x248uLL);
  RegionSize[1] = (ULONG_PTR)v4;
  if ( !v4 )
    return 0LL;
  PtiCurrentShared(v3);
  v18 = 0LL;
  v19 = 0LL;
  if ( v4 != (unsigned __int8 *)v20 && v4 != v22 )
    PushW32ThreadLock((__int64)v4, &v18, (__int64)Win32FreePool);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)v4 + 11) ^ *((_DWORD *)a1 + 1)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_25;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v13);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, &v14[1], v14);
  EtwTraceEndCallback(59LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v13);
  if ( v5 < 0 || v14[0] != 24 )
    goto LABEL_25;
  v6 = *(ULONG_PTR **)&v14[1];
  if ( (unsigned __int64)(*(_QWORD *)&v14[1] + 8LL) < *(_QWORD *)&v14[1]
    || *(_QWORD *)&v14[1] + 8LL > MmUserProbeAddress )
  {
    v6 = (ULONG_PTR *)MmUserProbeAddress;
  }
  v7 = *v6;
  RegionSize[0] = *v6;
  v8 = *(_QWORD *)&v14[1];
  if ( (unsigned __int64)(*(_QWORD *)&v14[1] + 24LL) < *(_QWORD *)&v14[1]
    || *(_QWORD *)&v14[1] + 24LL > MmUserProbeAddress )
  {
    v8 = MmUserProbeAddress;
  }
  v9 = *(_QWORD *)(v8 + 16);
  v16 = *(_OWORD *)v8;
  v17 = v9;
  v10 = *((_QWORD *)PtiCurrentShared(v8) + 64);
  if ( v10 && (*(_DWORD *)(v10 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v10 + 96) == a1 )
  {
LABEL_25:
    v11 = 0;
  }
  else
  {
    v11 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v16, v7, *((_DWORD *)a1 + 1) >> 31, 0);
    RegionSize[0] = v11;
    CopyOutputString((struct _CALLBACKSTATUS *)&v16, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v4 != (unsigned __int8 *)v20 && v4 != v22 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  }
  return v11;
}
