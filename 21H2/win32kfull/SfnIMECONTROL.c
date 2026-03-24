/*
 * XREFs of SfnIMECONTROL @ 0x1C02295E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0021A58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0021AFC (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0023470 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     MBToWCSEx @ 0x1C00D34F0 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00D3558 (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C0230DD0 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall SfnIMECONTROL(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        WCHAR *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r14d
  char v16; // r15
  unsigned __int8 *v17; // rdi
  unsigned int v19; // r8d
  WCHAR *v20; // rdx
  unsigned __int8 *v21; // rbx
  _DWORD *v22; // rax
  void *v23; // r12
  int v24; // r15d
  int v25; // r15d
  _WORD *v26; // rsi
  signed __int64 v27; // r13
  unsigned __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // cx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int128 v34; // xmm6
  __int64 v35; // xmm7_8
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 *v41; // r15
  __int64 v42; // r15
  ULONG64 v43; // rcx
  CHAR *v44; // xmm0_8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  __int128 v49; // xmm6
  __int64 v50; // xmm7_8
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // esi
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 *v56; // rcx
  ULONG v57; // [rsp+28h] [rbp-470h]
  char v58; // [rsp+30h] [rbp-468h] BYREF
  char v59; // [rsp+31h] [rbp-467h] BYREF
  char v60; // [rsp+32h] [rbp-466h] BYREF
  char v61; // [rsp+33h] [rbp-465h] BYREF
  int v62; // [rsp+34h] [rbp-464h] BYREF
  unsigned __int8 *v63; // [rsp+38h] [rbp-460h]
  unsigned __int64 v64; // [rsp+40h] [rbp-458h] BYREF
  char v65; // [rsp+48h] [rbp-450h] BYREF
  _DWORD *v66; // [rsp+50h] [rbp-448h]
  __int64 v67; // [rsp+80h] [rbp-418h]
  unsigned __int8 *v68; // [rsp+88h] [rbp-410h] BYREF
  __int64 v69; // [rsp+90h] [rbp-408h]
  __int128 v70; // [rsp+98h] [rbp-400h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-3F0h]
  int v72; // [rsp+C0h] [rbp-3D8h]
  _OWORD *v73; // [rsp+C8h] [rbp-3D0h] BYREF
  __int64 *v74; // [rsp+D0h] [rbp-3C8h]
  PWCH v75; // [rsp+D8h] [rbp-3C0h] BYREF
  __int64 v76; // [rsp+E0h] [rbp-3B8h]
  ULONG_PTR RegionSize[2]; // [rsp+E8h] [rbp-3B0h] BYREF
  __int128 v78; // [rsp+F8h] [rbp-3A0h]
  __int64 v79; // [rsp+108h] [rbp-390h]
  __int128 v80; // [rsp+110h] [rbp-388h] BYREF
  __int64 v81; // [rsp+120h] [rbp-378h]
  __int128 v82; // [rsp+160h] [rbp-338h]
  volatile void *Address; // [rsp+170h] [rbp-328h]
  __int128 v84; // [rsp+178h] [rbp-320h]
  CHAR *v85; // [rsp+188h] [rbp-310h]
  _DWORD v86[28]; // [rsp+190h] [rbp-308h] BYREF
  __int128 v87; // [rsp+200h] [rbp-298h] BYREF
  __int64 v88; // [rsp+210h] [rbp-288h]
  unsigned int v89; // [rsp+218h] [rbp-280h]
  _OWORD v90[2]; // [rsp+21Ch] [rbp-27Ch] BYREF
  unsigned __int8 v91[512]; // [rsp+240h] [rbp-258h] BYREF

  LODWORD(v66) = a2;
  v10 = a1;
  v74 = a1;
  memset(v86, 0, 0x68uLL);
  v64 = 0LL;
  v62 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v69 = ThreadWin32Thread;
  if ( v10 )
    v12 = v10[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  v67 = v12;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
  {
LABEL_17:
    v13 = 0;
    v15 = 0;
    goto LABEL_18;
  }
  if ( (unsigned int)a3 <= 8 )
  {
    v13 = 1;
    v15 = 32;
  }
  else
  {
    if ( (unsigned int)a3 <= 0xA )
      goto LABEL_15;
    if ( (unsigned int)a3 > 0xC )
    {
      if ( (_DWORD)a3 != 17 )
      {
        if ( (_DWORD)a3 == 24 )
        {
          v13 = 1;
          v14 = (unsigned __int64)*(unsigned int *)a4 << 9;
          if ( v14 > 0xFFFFFFFF )
            return 0LL;
          v15 = v14 + 4;
          if ( (int)v14 + 4 < (unsigned int)v14 )
            return 0LL;
          v72 = v14 + 4;
          goto LABEL_18;
        }
        goto LABEL_17;
      }
LABEL_15:
      v13 = 1;
      v16 = a7;
      v15 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_19;
    }
    v13 = 1;
    v15 = 28;
  }
LABEL_18:
  v16 = a7;
LABEL_19:
  if ( v13 )
  {
    v17 = AllocCallbackMessage(104, v13, v15, v91, 1, 0x200uLL);
    v63 = v17;
    if ( !v17 )
      return 0LL;
  }
  else
  {
    v17 = (unsigned __int8 *)v86;
    v63 = (unsigned __int8 *)v86;
    memset(&v86[1], 0, 0x64uLL);
    v86[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v80 = 0LL;
  v81 = 0LL;
  if ( v17 != (unsigned __int8 *)v86 && v17 != v91 )
    PushW32ThreadLock((__int64)v17, &v80, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 5) = v12;
  *((_DWORD *)v17 + 12) = (_DWORD)v66;
  *((_QWORD *)v17 + 7) = a3;
  *((_QWORD *)v17 + 8) = a4;
  *((_QWORD *)v17 + 9) = a5;
  *((_QWORD *)v17 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_86;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_58;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_58;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_58;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_86;
          goto LABEL_35;
        }
LABEL_58:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v17, v15, (void **)v17 + 11) >= 0 )
        {
          *((_DWORD *)v17 + 24) = v15;
          v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v70 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v70;
          *((_QWORD *)&v70 + 1) = v10;
          if ( v10 )
            HMLockObject(v10);
          v32 = v69;
          v33 = *(_QWORD *)(v69 + 480);
          v34 = *(_OWORD *)(v33 + 64);
          v78 = v34;
          v35 = *(_QWORD *)(v33 + 80);
          v79 = v35;
          *(_QWORD *)(v33 + 72) = v67;
          if ( v10 )
            v36 = *v10;
          else
            v36 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v32 + 480) + 64LL) = v36;
          if ( v10 )
            v37 = *(_QWORD *)(v10[5] + 224);
          else
            v37 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v32 + 480) + 80LL) = v37;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v17 + 2) = 0LL;
          v38 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v64, &v62);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v59);
          ThreadUnlock1(v39);
          v40 = *(_QWORD *)(v32 + 480);
          *(_OWORD *)(v40 + 64) = v34;
          *(_QWORD *)(v40 + 80) = v35;
          if ( v38 >= 0 && v62 == 24 )
          {
            v41 = (__int64 *)v64;
            if ( v64 + 8 < v64 || v64 + 8 > MmUserProbeAddress )
              v41 = (__int64 *)MmUserProbeAddress;
            v42 = *v41;
            v76 = v42;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v43 = v64;
              if ( v64 + 24 < v64 || v64 + 24 > MmUserProbeAddress )
                v43 = MmUserProbeAddress;
              v82 = *(_OWORD *)v43;
              v44 = *(CHAR **)(v43 + 16);
              Address = v44;
              v84 = v82;
              v85 = v44;
              ProbeForRead(v44, v15, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v44, v15);
              }
              else
              {
                v44[v15 - 1] = 0;
                v75 = a4 + 14;
                *(_OWORD *)a4 = *(_OWORD *)v44;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v44 + 2);
                *((_DWORD *)a4 + 6) = *((_DWORD *)v44 + 6);
                memset(a4 + 14, 0, 0x40uLL);
                MBToWCSEx(v45, v44 + 28, -1, &v75, 32);
              }
            }
            goto LABEL_104;
          }
        }
        goto LABEL_103;
      }
    }
  }
LABEL_35:
  switch ( a3 )
  {
    case 8uLL:
      v19 = 32;
      goto LABEL_43;
    case 0xCuLL:
      v19 = 28;
      goto LABEL_43;
    case 0xAuLL:
      if ( (v16 & 1) != 0 )
      {
        v73 = v90;
        v87 = *(_OWORD *)a4;
        v88 = *((_QWORD *)a4 + 2);
        v89 = *((_DWORD *)a4 + 6);
        memset(v90, 0, sizeof(v90));
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v73, 32, v57);
        v19 = 60;
        v20 = (WCHAR *)&v87;
        goto LABEL_44;
      }
      v19 = 92;
LABEL_43:
      v20 = a4;
LABEL_44:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (unsigned __int64)v20, v19, (void **)v17 + 8) < 0 )
        goto LABEL_103;
      goto LABEL_86;
  }
  if ( (v16 & 1) != 0 )
  {
    v21 = (unsigned __int8 *)&v65;
    v68 = (unsigned __int8 *)&v65;
    v22 = (_DWORD *)Win32AllocPool(v15, 1835627349LL);
    v23 = v22;
    v66 = v22;
    if ( !v22 )
      goto LABEL_103;
    v24 = *(_DWORD *)a4;
    *v22 = *(_DWORD *)a4;
    v25 = v24 << 8;
    if ( v25 )
    {
      v26 = v22 + 1;
      v27 = (char *)a4 - (char *)(v22 + 1);
      do
      {
        --v25;
        v21[1] = 0;
        v28 = THREAD_CODEPAGE();
        WCSToMBEx(v28, (_WORD *)((char *)v26 + v27 + 4), 1, (PCHAR *)&v68, 2, v57);
        v21 = v68;
        v29 = v68[1];
        v30 = *v68;
        if ( (_BYTE)v29 )
          v30 = v29 | (v30 << 8);
        *v26++ = v30;
      }
      while ( v25 );
      v10 = v74;
      v23 = v66;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (unsigned __int64)v23, v15, (void **)v17 + 8) < 0 )
      goto LABEL_103;
    Win32FreePool(v23);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v17, (unsigned __int64)a4, v15, (void **)v17 + 8) < 0 )
  {
    goto LABEL_103;
  }
LABEL_86:
  v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v70 = *(_QWORD *)(v46 + 416);
  *(_QWORD *)(v46 + 416) = &v70;
  *((_QWORD *)&v70 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v47 = v69;
  v48 = *(_QWORD *)(v69 + 480);
  v49 = *(_OWORD *)(v48 + 64);
  v78 = v49;
  v50 = *(_QWORD *)(v48 + 80);
  v79 = v50;
  *(_QWORD *)(v48 + 72) = v67;
  if ( v10 )
    v51 = *v10;
  else
    v51 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 64LL) = v51;
  if ( v10 )
    v52 = *(_QWORD *)(v10[5] + 224);
  else
    v52 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v47 + 480) + 80LL) = v52;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v61);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v53 = KeUserModeCallback(94LL, v17, *(unsigned int *)v17, &v64, &v62);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v60);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v61);
  ThreadUnlock1(v54);
  v55 = *(_QWORD *)(v47 + 480);
  *(_OWORD *)(v55 + 64) = v49;
  *(_QWORD *)(v55 + 80) = v50;
  if ( v53 >= 0 && v62 == 24 )
  {
    v56 = (__int64 *)v64;
    if ( v64 + 8 < v64 || v64 + 8 > MmUserProbeAddress )
      v56 = (__int64 *)MmUserProbeAddress;
    v42 = *v56;
    v76 = *v56;
    goto LABEL_104;
  }
LABEL_103:
  v42 = 0LL;
LABEL_104:
  if ( v17 != (unsigned __int8 *)v86 && v17 != v91 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v80);
  }
  return v42;
}
