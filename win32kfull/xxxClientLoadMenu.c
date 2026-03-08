/*
 * XREFs of xxxClientLoadMenu @ 0x1C0109AE8
 * Callers:
 *     xxxLoadSysMenu @ 0x1C00A0224 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C022C368 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, char **a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int8 *v6; // rdi
  unsigned __int16 v7; // ax
  int v8; // ebx
  __int64 *v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 *result; // rax
  _BYTE v12[4]; // [rsp+30h] [rbp-298h] BYREF
  int v13; // [rsp+34h] [rbp-294h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-288h] BYREF
  __int128 v16; // [rsp+48h] [rbp-280h] BYREF
  __int64 v17; // [rsp+58h] [rbp-270h]
  __int64 v18; // [rsp+60h] [rbp-268h]
  _DWORD v19[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v20[512]; // [rsp+B0h] [rbp-218h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v15 = 0LL;
  v13 = 0;
  v5 = *((unsigned __int16 *)a2 + 1);
  if ( (_WORD)v5 )
  {
    result = AllocCallbackMessage(64, (_WORD)v5 != 0, v5 & -(__int64)((_WORD)v5 != 0), v20, 1, 0x200uLL);
    v6 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v6 = (unsigned __int8 *)v19;
    RegionSize = (ULONG_PTR)v19;
    v19[0] = 64;
  }
  PtiCurrentShared(v4);
  v16 = 0LL;
  v17 = 0LL;
  if ( v6 != (unsigned __int8 *)v19 && v6 != v20 )
    PushW32ThreadLock((__int64)v6, &v16, (__int64)Win32FreePool);
  *((_QWORD *)v6 + 5) = a1;
  *((_WORD *)v6 + 24) = *(_WORD *)a2;
  v7 = *((_WORD *)a2 + 1);
  *((_WORD *)v6 + 25) = v7;
  if ( v7 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v6 + 7) < 0 )
      goto LABEL_19;
  }
  else
  {
    *((_QWORD *)v6 + 7) = a2[1];
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v6 + 2) = 0LL;
  v8 = KeUserModeCallback(76LL, v6, *(unsigned int *)v6, &v15, &v13);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v12);
  if ( v8 >= 0 && v13 == 24 )
  {
    v9 = (__int64 *)v15;
    if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v18 = *v9;
    v10 = HMValidateHandleNoRip(v18, 2);
    goto LABEL_12;
  }
LABEL_19:
  v10 = 0LL;
LABEL_12:
  if ( v6 != (unsigned __int8 *)v19 && v6 != v20 )
  {
    if ( *((_QWORD *)v6 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v6 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  }
  return (unsigned __int8 *)v10;
}
