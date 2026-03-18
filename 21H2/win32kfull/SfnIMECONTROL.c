/*
 * XREFs of SfnIMECONTROL @ 0x1C0223470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C006A940 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C006E568 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00803F0 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     MBToWCSEx @ 0x1C014D0F0 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C014E8DC (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C022AA7C (THREAD_CODEPAGE.c)
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
  __int64 *v10; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned __int8 *v18; // rdi
  unsigned int v19; // r8d
  WCHAR *v20; // rdx
  unsigned __int8 *v21; // rbx
  _DWORD *v22; // rax
  unsigned __int64 v23; // r12
  int v24; // esi
  int v25; // esi
  _WORD *v26; // r15
  signed __int64 v27; // r13
  unsigned __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // cx
  __int64 v31; // rax
  __int128 v32; // xmm6
  __int64 v33; // xmm7_8
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 *v41; // r15
  __int64 v42; // r15
  ULONG64 v43; // rcx
  CHAR *v44; // xmm0_8
  __int64 v45; // rcx
  __int64 v46; // rax
  __int128 v47; // xmm6
  __int64 v48; // xmm7_8
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // esi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 *v56; // rcx
  ULONG v57; // [rsp+28h] [rbp-470h]
  char v58; // [rsp+30h] [rbp-468h] BYREF
  _BYTE v59[3]; // [rsp+31h] [rbp-467h] BYREF
  int v60; // [rsp+34h] [rbp-464h] BYREF
  unsigned __int8 *v61; // [rsp+38h] [rbp-460h]
  unsigned __int64 v62; // [rsp+40h] [rbp-458h] BYREF
  char v63; // [rsp+48h] [rbp-450h] BYREF
  _DWORD *v64; // [rsp+50h] [rbp-448h]
  __int64 v65; // [rsp+80h] [rbp-418h]
  unsigned __int8 *v66; // [rsp+88h] [rbp-410h] BYREF
  __int64 v67; // [rsp+90h] [rbp-408h]
  _OWORD *v68; // [rsp+B0h] [rbp-3E8h] BYREF
  __int64 *v69; // [rsp+B8h] [rbp-3E0h]
  PWCH v70; // [rsp+C0h] [rbp-3D8h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-3D0h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp-3C8h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-3C0h]
  __int64 v74; // [rsp+E8h] [rbp-3B0h]
  __int128 v75; // [rsp+F0h] [rbp-3A8h] BYREF
  __int64 v76; // [rsp+100h] [rbp-398h]
  __int128 v77; // [rsp+108h] [rbp-390h] BYREF
  __int64 v78; // [rsp+118h] [rbp-380h]
  __int128 v79; // [rsp+158h] [rbp-340h]
  volatile void *Address; // [rsp+168h] [rbp-330h]
  __int128 v81; // [rsp+170h] [rbp-328h]
  CHAR *v82; // [rsp+180h] [rbp-318h]
  _DWORD v83[28]; // [rsp+190h] [rbp-308h] BYREF
  __int128 v84; // [rsp+200h] [rbp-298h] BYREF
  __int64 v85; // [rsp+210h] [rbp-288h]
  unsigned int v86; // [rsp+218h] [rbp-280h]
  _OWORD v87[2]; // [rsp+21Ch] [rbp-27Ch] BYREF
  unsigned __int8 v88[512]; // [rsp+240h] [rbp-258h] BYREF

  LODWORD(v64) = a2;
  v10 = a1;
  v69 = a1;
  memset(v83, 0, 0x68uLL);
  v62 = 0LL;
  v60 = 0;
  v75 = 0LL;
  v76 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = ThreadWin32Thread;
  v67 = ThreadWin32Thread;
  if ( v10 )
    v13 = v10[5] - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  v65 = v13;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
    goto LABEL_17;
  if ( (unsigned int)a3 <= 8 )
  {
    v14 = 1;
    v16 = 32;
    goto LABEL_18;
  }
  if ( (unsigned int)a3 <= 0xA )
    goto LABEL_15;
  if ( (unsigned int)a3 <= 0xC )
  {
    v14 = 1;
    v16 = 28;
    goto LABEL_18;
  }
  if ( (_DWORD)a3 == 17 )
  {
LABEL_15:
    v14 = 1;
    v16 = 32 * ((a7 & 1) == 0) + 60;
    goto LABEL_18;
  }
  if ( (_DWORD)a3 == 24 )
  {
    v14 = 1;
    v15 = (unsigned __int64)*(unsigned int *)a4 << 9;
    if ( v15 > 0xFFFFFFFF )
      return 0LL;
    v16 = v15 + 4;
    if ( (int)v15 + 4 < (unsigned int)v15 )
      return 0LL;
  }
  else
  {
LABEL_17:
    v14 = 0;
    v16 = 0;
  }
LABEL_18:
  if ( v14 )
  {
    v18 = AllocCallbackMessage(104, v14, v16, v88, 1, 0x200uLL);
    v61 = v18;
    if ( !v18 )
      return 0LL;
  }
  else
  {
    v18 = (unsigned __int8 *)v83;
    v61 = (unsigned __int8 *)v83;
    memset(&v83[1], 0, 0x64uLL);
    v83[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v77 = 0LL;
  v78 = 0LL;
  if ( v18 != (unsigned __int8 *)v83 && v18 != v88 )
    PushW32ThreadLock((__int64)v18, &v77, (__int64)Win32FreePool);
  *((_QWORD *)v18 + 5) = v13;
  *((_DWORD *)v18 + 12) = (_DWORD)v64;
  *((_QWORD *)v18 + 7) = a3;
  *((_QWORD *)v18 + 8) = a4;
  *((_QWORD *)v18 + 9) = a5;
  *((_QWORD *)v18 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_80;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_57;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_57;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_57;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_80;
          goto LABEL_34;
        }
LABEL_57:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v18, v16, (void **)v18 + 11) >= 0 )
        {
          *((_DWORD *)v18 + 24) = v16;
          ThreadLock((__int64)v10, (__int64 *)&v75);
          v31 = *(_QWORD *)(v12 + 480);
          v32 = *(_OWORD *)(v31 + 64);
          v73 = v32;
          v33 = *(_QWORD *)(v31 + 80);
          v74 = v33;
          *(_QWORD *)(v31 + 72) = v65;
          v34 = v10 ? *v10 : 0LL;
          *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v34;
          v35 = v10 ? *(_QWORD *)(v10[5] + 224) : 0LL;
          *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v35;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v18 + 2) = 0LL;
          v36 = KeUserModeCallback(94LL, v18, *(unsigned int *)v18, &v62, &v60);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v58);
          ThreadUnlock1(v38, v37, v39);
          v40 = *(_QWORD *)(v12 + 480);
          *(_OWORD *)(v40 + 64) = v32;
          *(_QWORD *)(v40 + 80) = v33;
          if ( v36 >= 0 && v60 == 24 )
          {
            v41 = (__int64 *)v62;
            if ( v62 + 8 < v62 || v62 + 8 > MmUserProbeAddress )
              v41 = (__int64 *)MmUserProbeAddress;
            v42 = *v41;
            v71 = v42;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v43 = v62;
              if ( v62 + 24 < v62 || v62 + 24 > MmUserProbeAddress )
                v43 = MmUserProbeAddress;
              v79 = *(_OWORD *)v43;
              v44 = *(CHAR **)(v43 + 16);
              Address = v44;
              v81 = v79;
              v82 = v44;
              ProbeForRead(v44, v16, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v44, v16);
              }
              else
              {
                v44[v16 - 1] = 0;
                v70 = a4 + 14;
                *(_OWORD *)a4 = *(_OWORD *)v44;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v44 + 2);
                *((_DWORD *)a4 + 6) = *((_DWORD *)v44 + 6);
                memset(a4 + 14, 0, 0x40uLL);
                MBToWCSEx(v45, v44 + 28, -1, &v70, 32);
              }
            }
            goto LABEL_93;
          }
        }
        goto LABEL_92;
      }
    }
  }
LABEL_34:
  switch ( a3 )
  {
    case 8uLL:
      v19 = 32;
      goto LABEL_42;
    case 0xCuLL:
      v19 = 28;
      goto LABEL_42;
    case 0xAuLL:
      if ( (a7 & 1) != 0 )
      {
        v68 = v87;
        v84 = *(_OWORD *)a4;
        v85 = *((_QWORD *)a4 + 2);
        v86 = *((_DWORD *)a4 + 6);
        memset(v87, 0, sizeof(v87));
        WCSToMBEx(0, a4 + 14, -1, (PCHAR *)&v68, 32, v57);
        v19 = 60;
        v20 = (WCHAR *)&v84;
        goto LABEL_43;
      }
      v19 = 92;
LABEL_42:
      v20 = a4;
LABEL_43:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, (unsigned __int64)v20, v19, (void **)v18 + 8) < 0 )
        goto LABEL_92;
      goto LABEL_80;
  }
  if ( (a7 & 1) != 0 )
  {
    v21 = (unsigned __int8 *)&v63;
    v66 = (unsigned __int8 *)&v63;
    v22 = (_DWORD *)Win32AllocPoolZInit(v16, 1835627349LL);
    v23 = (unsigned __int64)v22;
    v64 = v22;
    if ( !v22 )
      goto LABEL_92;
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
        WCSToMBEx(v28, (_WORD *)((char *)v26 + v27 + 4), 1, (PCHAR *)&v66, 2, v57);
        v21 = v66;
        v29 = v66[1];
        v30 = *v66;
        if ( (_BYTE)v29 )
          v30 = v29 | (v30 << 8);
        *v26++ = v30;
      }
      while ( v25 );
      v10 = v69;
      v23 = (unsigned __int64)v64;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, v23, v16, (void **)v18 + 8) < 0 )
      goto LABEL_92;
    Win32FreePool(v23);
    v12 = v67;
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v18, (unsigned __int64)a4, v16, (void **)v18 + 8) < 0 )
  {
    goto LABEL_92;
  }
LABEL_80:
  ThreadLock((__int64)v10, (__int64 *)&v75);
  v46 = *(_QWORD *)(v12 + 480);
  v47 = *(_OWORD *)(v46 + 64);
  v73 = v47;
  v48 = *(_QWORD *)(v46 + 80);
  v74 = v48;
  *(_QWORD *)(v46 + 72) = v65;
  if ( v10 )
    v49 = *v10;
  else
    v49 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v49;
  if ( v10 )
    v50 = *(_QWORD *)(v10[5] + 224);
  else
    v50 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v50;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v59);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v51 = KeUserModeCallback(94LL, v18, *(unsigned int *)v18, &v62, &v60);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v59);
  ThreadUnlock1(v53, v52, v54);
  v55 = *(_QWORD *)(v67 + 480);
  *(_OWORD *)(v55 + 64) = v47;
  *(_QWORD *)(v55 + 80) = v48;
  if ( v51 >= 0 && v60 == 24 )
  {
    v56 = (__int64 *)v62;
    if ( v62 + 8 < v62 || v62 + 8 > MmUserProbeAddress )
      v56 = (__int64 *)MmUserProbeAddress;
    v42 = *v56;
    v71 = *v56;
    goto LABEL_93;
  }
LABEL_92:
  v42 = 0LL;
LABEL_93:
  if ( v18 != (unsigned __int8 *)v83 && v18 != v88 )
  {
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v18 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v77);
  }
  return v42;
}
