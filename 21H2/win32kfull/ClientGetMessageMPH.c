/*
 * XREFs of ClientGetMessageMPH @ 0x1C00E3BC8
 * Callers:
 *     NtUserPeekMessage @ 0x1C00552B0 (NtUserPeekMessage.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C00E3AC0 (NtUserGetMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]
  int v18; // [rsp+58h] [rbp-10h]
  int v19; // [rsp+5Ch] [rbp-Ch]
  unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = 0LL;
  v21 = 0;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v18 = a5;
  v19 = a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(73LL);
  v7 = KeUserModeCallback(73LL, &v15, 24LL, &v20, &v21);
  EtwTraceEndCallback(73LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  if ( v7 < 0 || v21 != 24 )
    return 0LL;
  v8 = (__int64 *)v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 84) & 1) != 0 && *(_OWORD **)(v10 + 96) == a1 )
      return 0LL;
  }
  v11 = *(_OWORD **)(v20 + 16);
  if ( v11 + 3 < v11 || (unsigned __int64)(v11 + 3) > MmUserProbeAddress )
    v11 = (_OWORD *)MmUserProbeAddress;
  v12 = v11[1];
  v13 = v11[2];
  *a1 = *v11;
  a1[1] = v12;
  a1[2] = v13;
  return (unsigned int)v9;
}
