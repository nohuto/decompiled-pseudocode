/*
 * XREFs of SfnSHELLSYNCDISPLAYCHANGED @ 0x1C0117CE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnSHELLSYNCDISPLAYCHANGED(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  _OWORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  _OWORD *v30; // rcx
  _OWORD *v31; // rdx
  __int64 v32; // rax
  _OWORD *v33; // rax
  _BYTE v35[4]; // [rsp+30h] [rbp-A68h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-A64h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-A50h] BYREF
  __int128 v38; // [rsp+58h] [rbp-A40h]
  __int64 v39; // [rsp+68h] [rbp-A30h]
  __int64 v40; // [rsp+70h] [rbp-A28h]
  __int128 v41; // [rsp+98h] [rbp-A00h]
  __int128 v42; // [rsp+A8h] [rbp-9F0h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-9E0h]
  _BYTE v44[1216]; // [rsp+C0h] [rbp-9D8h] BYREF
  __int64 v45; // [rsp+580h] [rbp-518h] BYREF
  int v46; // [rsp+588h] [rbp-510h]
  int v47; // [rsp+58Ch] [rbp-50Ch]
  __int64 v48; // [rsp+590h] [rbp-508h]
  char v49; // [rsp+598h] [rbp-500h] BYREF
  int v50; // [rsp+A4Ch] [rbp-4Ch]
  __int64 v51; // [rsp+A50h] [rbp-48h]
  __int64 v52; // [rsp+A58h] [rbp-40h]

  v37 = 0LL;
  v36[0] = 0;
  v42 = 0LL;
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  v47 = 0;
  v50 = 0;
  v45 = v14;
  v46 = a2 & 0x1FFFF;
  v48 = a3;
  v15 = a4;
  v16 = &v49;
  v17 = 9LL;
  v18 = 9LL;
  do
  {
    *(_OWORD *)v16 = *v15;
    *((_OWORD *)v16 + 1) = v15[1];
    *((_OWORD *)v16 + 2) = v15[2];
    *((_OWORD *)v16 + 3) = v15[3];
    *((_OWORD *)v16 + 4) = v15[4];
    *((_OWORD *)v16 + 5) = v15[5];
    *((_OWORD *)v16 + 6) = v15[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v15[7];
    v15 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v15;
  *((_OWORD *)v16 + 1) = v15[1];
  *((_OWORD *)v16 + 2) = v15[2];
  *((_DWORD *)v16 + 12) = *((_DWORD *)v15 + 12);
  v51 = a5;
  v52 = a6;
  ThreadLock((__int64)a1, (__int64 *)&v42);
  v19 = *(_QWORD *)(v13 + 480);
  v41 = *(_OWORD *)(v19 + 64);
  v38 = v41;
  v39 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  EtwTraceBeginCallback(129LL);
  v22 = KeUserModeCallback(129LL, &v45, 1248LL, &v37, v36);
  EtwTraceEndCallback(129LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v35);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v26 + 64) = v41;
  *(_QWORD *)(v26 + 80) = v39;
  if ( v22 >= 0 && v36[0] == 24 )
  {
    v27 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v40 = *v27;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v28;
    v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 512);
    if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(_OWORD **)(v29 + 96) != a4 )
    {
      v30 = *(_OWORD **)(v37 + 16);
      if ( (_OWORD *)((char *)v30 + 1204) < v30 || (unsigned __int64)v30 + 1204 > MmUserProbeAddress )
        v30 = (_OWORD *)MmUserProbeAddress;
      v31 = v44;
      v32 = 9LL;
      do
      {
        *v31 = *v30;
        v31[1] = v30[1];
        v31[2] = v30[2];
        v31[3] = v30[3];
        v31[4] = v30[4];
        v31[5] = v30[5];
        v31[6] = v30[6];
        v31 += 8;
        *(v31 - 1) = v30[7];
        v30 += 8;
        --v32;
      }
      while ( v32 );
      *v31 = *v30;
      v31[1] = v30[1];
      v31[2] = v30[2];
      *((_DWORD *)v31 + 12) = *((_DWORD *)v30 + 12);
      v33 = v44;
      do
      {
        *a4 = *v33;
        a4[1] = v33[1];
        a4[2] = v33[2];
        a4[3] = v33[3];
        a4[4] = v33[4];
        a4[5] = v33[5];
        a4[6] = v33[6];
        a4 += 8;
        *(a4 - 1) = v33[7];
        v33 += 8;
        --v17;
      }
      while ( v17 );
      *a4 = *v33;
      a4[1] = v33[1];
      a4[2] = v33[2];
      *((_DWORD *)a4 + 12) = *((_DWORD *)v33 + 12);
      return v28;
    }
  }
  return 0LL;
}
