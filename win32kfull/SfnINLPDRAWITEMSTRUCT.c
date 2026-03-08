/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1C020B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     _WindowFromDC @ 0x1C01BF0E8 (_WindowFromDC.c)
 */

__int64 __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 *v16; // rcx
  const struct tagWND *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rbx
  _BYTE v29[4]; // [rsp+30h] [rbp-138h] BYREF
  int v30; // [rsp+34h] [rbp-134h] BYREF
  int v31; // [rsp+38h] [rbp-130h]
  unsigned __int64 v32; // [rsp+50h] [rbp-118h] BYREF
  __int128 v33; // [rsp+60h] [rbp-108h]
  __int64 v34; // [rsp+70h] [rbp-F8h]
  __int64 v35; // [rsp+78h] [rbp-F0h]
  __int128 v36; // [rsp+98h] [rbp-D0h]
  __int128 v37; // [rsp+A8h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-B0h]
  __int64 v39; // [rsp+C0h] [rbp-A8h] BYREF
  int v40; // [rsp+C8h] [rbp-A0h]
  __int64 v41; // [rsp+D0h] [rbp-98h]
  __int128 v42; // [rsp+D8h] [rbp-90h]
  __int128 v43; // [rsp+E8h] [rbp-80h]
  __int128 v44; // [rsp+F8h] [rbp-70h]
  __int128 v45; // [rsp+108h] [rbp-60h]
  __int64 v46; // [rsp+118h] [rbp-50h]
  __int64 v47; // [rsp+120h] [rbp-48h]

  v31 = a2;
  v32 = 0LL;
  v30 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v11 = PtiCurrentShared((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 59);
  else
    v13 = 0LL;
  memset_0(&v39, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*((_QWORD *)a4 + 4), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v16 = (__int64 *)*((_QWORD *)a4 + 4);
    if ( v16 )
    {
      v17 = WindowFromDC(v16);
      if ( v17 )
      {
        v14 = *((_QWORD *)a4 + 4);
        *((_QWORD *)a4 + 4) = _GetDC(v17);
      }
    }
  }
  v39 = v13;
  v40 = v31;
  v41 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v42 = *a4;
  v43 = a4[1];
  v44 = a4[2];
  v45 = a4[3];
  v46 = a5;
  v47 = a6;
  ThreadLock(a1, &v37);
  v18 = *((_QWORD *)v12 + 60);
  v36 = *(_OWORD *)(v18 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v13;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v20;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  EtwTraceBeginCallback(12LL);
  v21 = KeUserModeCallback(12LL, &v39, 104LL, &v32, &v30);
  EtwTraceEndCallback(12LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v29);
  ThreadUnlock1(v23, v22, v24);
  v25 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v25 + 64) = v36;
  *(_QWORD *)(v25 + 80) = v34;
  if ( v21 < 0 || v30 != 24 )
    return 0LL;
  v26 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v35 = *v26;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*((_QWORD *)a4 + 4));
    *((_QWORD *)a4 + 4) = v14;
  }
  return v27;
}
