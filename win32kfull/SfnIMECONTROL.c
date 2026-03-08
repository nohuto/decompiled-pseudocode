/*
 * XREFs of SfnIMECONTROL @ 0x1C0209610
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0035628 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0109220 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?THREAD_CODEPAGE@@YAGXZ @ 0x1C0207F9C (-THREAD_CODEPAGE@@YAGXZ.c)
 *     MBToWCSEx @ 0x1C024E9B4 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C024ECB4 (WCSToMBEx.c)
 */

__int64 __fastcall SfnIMECONTROL(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *v10; // r14
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // edx
  unsigned int v16; // esi
  char v18; // r15
  unsigned __int8 *v19; // rdi
  unsigned int v20; // r8d
  char *v21; // rdx
  int *v22; // rbx
  _DWORD *v23; // rax
  char *v24; // r13
  int v25; // r15d
  int v26; // r15d
  _WORD *v27; // r14
  signed __int64 v28; // r12
  unsigned __int16 v29; // ax
  __int16 v30; // ax
  __int16 v31; // cx
  struct tagTHREADINFO *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // r14d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 *v41; // r15
  __int64 v42; // r15
  ULONG64 v43; // rcx
  char *v44; // xmm0_8
  __int64 v45; // rcx
  struct tagTHREADINFO *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // esi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 *v55; // rcx
  _BYTE v56[4]; // [rsp+30h] [rbp-438h] BYREF
  int v57; // [rsp+34h] [rbp-434h] BYREF
  unsigned __int8 *v58; // [rsp+38h] [rbp-430h]
  int v59; // [rsp+40h] [rbp-428h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-420h] BYREF
  unsigned __int8 *v61; // [rsp+50h] [rbp-418h] BYREF
  ULONG_PTR RegionSize[7]; // [rsp+58h] [rbp-410h] BYREF
  __int64 v63; // [rsp+90h] [rbp-3D8h]
  struct tagTHREADINFO *v64; // [rsp+98h] [rbp-3D0h]
  __int128 v65; // [rsp+A0h] [rbp-3C8h]
  __int64 v66; // [rsp+B0h] [rbp-3B8h]
  __int64 *v67; // [rsp+C8h] [rbp-3A0h]
  __int64 v68; // [rsp+D8h] [rbp-390h]
  __int128 v69; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-370h]
  __int128 v71; // [rsp+100h] [rbp-368h] BYREF
  __int64 v72; // [rsp+110h] [rbp-358h]
  __int128 v73; // [rsp+150h] [rbp-318h]
  volatile void *Address; // [rsp+160h] [rbp-308h]
  __int128 v75; // [rsp+168h] [rbp-300h]
  char *v76; // [rsp+178h] [rbp-2F0h]
  _DWORD v77[28]; // [rsp+180h] [rbp-2E8h] BYREF
  _OWORD v78[4]; // [rsp+1F0h] [rbp-278h] BYREF
  unsigned __int8 v79[512]; // [rsp+230h] [rbp-238h] BYREF

  v59 = a2;
  v10 = a1;
  v67 = a1;
  memset_0(v77, 0, 0x68uLL);
  v60 = 0LL;
  v57 = 0;
  v69 = 0LL;
  v70 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v12 = PtiCurrentShared(v11);
  v64 = v12;
  if ( v10 )
    v14 = v10[5] - *((_QWORD *)v12 + 59);
  else
    v14 = 0LL;
  v63 = v14;
  if ( a3 > 0x18 )
  {
LABEL_19:
    v15 = 0;
    v16 = 0;
    goto LABEL_20;
  }
  switch ( (_DWORD)a3 )
  {
    case 7:
    case 8:
      v15 = 1;
      v16 = 32;
      break;
    case 9:
    case 0xA:
      goto LABEL_17;
    case 0xB:
    case 0xC:
      v15 = 1;
      v16 = 28;
      break;
    case 0x11:
LABEL_17:
      v15 = 1;
      v18 = a7;
      v16 = 32 * ((a7 & 1) == 0) + 60;
      goto LABEL_21;
    case 0x18:
      v15 = 1;
      v13 = (unsigned __int64)*a4 << 9;
      if ( v13 > 0xFFFFFFFF )
        return 0LL;
      v16 = v13 + 4;
      if ( (int)v13 + 4 < (unsigned int)v13 )
        return 0LL;
      break;
    default:
      goto LABEL_19;
  }
LABEL_20:
  v18 = a7;
LABEL_21:
  if ( v15 )
  {
    v19 = AllocCallbackMessage(104, v15, v16, v79, 1, 0x200uLL);
    v58 = v19;
    if ( !v19 )
      return 0LL;
  }
  else
  {
    v19 = (unsigned __int8 *)v77;
    v58 = (unsigned __int8 *)v77;
    v77[0] = 104;
  }
  PtiCurrentShared(v13);
  v71 = 0LL;
  v72 = 0LL;
  if ( v19 != (unsigned __int8 *)v77 && v19 != v79 )
    PushW32ThreadLock((__int64)v19, &v71, (__int64)Win32FreePool);
  *((_QWORD *)v19 + 5) = v14;
  *((_DWORD *)v19 + 12) = v59;
  *((_QWORD *)v19 + 7) = a3;
  *((_QWORD *)v19 + 8) = a4;
  *((_QWORD *)v19 + 9) = a5;
  *((_QWORD *)v19 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_83;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_60;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_60;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_60;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_83;
          goto LABEL_37;
        }
LABEL_60:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v19, v16, (void **)v19 + 11) >= 0 )
        {
          *((_DWORD *)v19 + 24) = v16;
          ThreadLock(v10, &v69);
          v32 = v64;
          v33 = *((_QWORD *)v64 + 60);
          *(_OWORD *)RegionSize = *(_OWORD *)(v33 + 64);
          v65 = *(_OWORD *)RegionSize;
          v66 = *(_QWORD *)(v33 + 80);
          *(_QWORD *)(v33 + 72) = v63;
          v34 = v10 ? *v10 : 0LL;
          *(_QWORD *)(*((_QWORD *)v32 + 60) + 64LL) = v34;
          v35 = v10 ? *(_QWORD *)(v10[5] + 224) : 0LL;
          *(_QWORD *)(*((_QWORD *)v32 + 60) + 80LL) = v35;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v56);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v19 + 2) = 0LL;
          v36 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, &v60, &v57);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v56);
          ThreadUnlock1(v38, v37, v39);
          v40 = *((_QWORD *)v32 + 60);
          *(_OWORD *)(v40 + 64) = *(_OWORD *)RegionSize;
          *(_QWORD *)(v40 + 80) = v66;
          if ( v36 >= 0 && v57 == 24 )
          {
            v41 = (__int64 *)v60;
            if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
              v41 = (__int64 *)MmUserProbeAddress;
            v42 = *v41;
            v68 = v42;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v43 = v60;
              if ( v60 + 24 < v60 || v60 + 24 > MmUserProbeAddress )
                v43 = MmUserProbeAddress;
              v73 = *(_OWORD *)v43;
              v44 = *(char **)(v43 + 16);
              Address = v44;
              v75 = v73;
              v76 = v44;
              ProbeForRead(v44, v16, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v44, v16);
              }
              else
              {
                v44[v16 - 1] = 0;
                RegionSize[0] = (ULONG_PTR)(a4 + 7);
                *(_OWORD *)a4 = *(_OWORD *)v44;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v44 + 2);
                a4[6] = *((_DWORD *)v44 + 6);
                memset_0(a4 + 7, 0, 0x40uLL);
                MBToWCSEx(v45, v44 + 28, 0xFFFFFFFFLL, RegionSize, 32);
              }
            }
            goto LABEL_96;
          }
        }
        goto LABEL_95;
      }
    }
  }
LABEL_37:
  switch ( a3 )
  {
    case 8uLL:
      v20 = 32;
      goto LABEL_45;
    case 0xCuLL:
      v20 = 28;
      goto LABEL_45;
    case 0xAuLL:
      if ( (v18 & 1) != 0 )
      {
        memset(&v78[1], 0, 44);
        v61 = (unsigned __int8 *)&v78[1] + 12;
        v78[0] = *(_OWORD *)a4;
        *(_QWORD *)&v78[1] = *((_QWORD *)a4 + 2);
        DWORD2(v78[1]) = a4[6];
        WCSToMBEx(0LL, a4 + 7, 0xFFFFFFFFLL, &v61, 32);
        v20 = 60;
        v21 = (char *)v78;
        goto LABEL_46;
      }
      v20 = 92;
LABEL_45:
      v21 = (char *)a4;
LABEL_46:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, v21, v20, (void **)v19 + 8) < 0 )
        goto LABEL_95;
      goto LABEL_83;
  }
  if ( (v18 & 1) != 0 )
  {
    v22 = &v59;
    v61 = (unsigned __int8 *)&v59;
    v23 = (_DWORD *)Win32AllocPoolZInit(v16, 1835627349LL);
    v24 = (char *)v23;
    RegionSize[0] = (ULONG_PTR)v23;
    if ( !v23 )
      goto LABEL_95;
    v25 = *a4;
    *v23 = *a4;
    v26 = v25 << 8;
    if ( v26 )
    {
      v27 = v23 + 1;
      v28 = (char *)a4 - (char *)(v23 + 1);
      do
      {
        --v26;
        *((_BYTE *)v22 + 1) = 0;
        v29 = THREAD_CODEPAGE();
        WCSToMBEx(v29, (char *)v27 + v28 + 4, 1LL, &v61, 2);
        v22 = (int *)v61;
        v30 = v61[1];
        v31 = *v61;
        if ( (_BYTE)v30 )
          v31 = v30 | (v31 << 8);
        *v27++ = v31;
      }
      while ( v26 );
      v10 = v67;
      v24 = (char *)RegionSize[0];
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, v24, v16, (void **)v19 + 8) < 0 )
      goto LABEL_95;
    Win32FreePool(v24);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, (char *)a4, v16, (void **)v19 + 8) < 0 )
  {
    goto LABEL_95;
  }
LABEL_83:
  ThreadLock(v10, &v69);
  v46 = v64;
  v47 = *((_QWORD *)v64 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v47 + 64);
  v65 = *(_OWORD *)RegionSize;
  v66 = *(_QWORD *)(v47 + 80);
  *(_QWORD *)(v47 + 72) = v63;
  if ( v10 )
    v48 = *v10;
  else
    v48 = 0LL;
  *(_QWORD *)(*((_QWORD *)v46 + 60) + 64LL) = v48;
  if ( v10 )
    v49 = *(_QWORD *)(v10[5] + 224);
  else
    v49 = 0LL;
  *(_QWORD *)(*((_QWORD *)v46 + 60) + 80LL) = v49;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v56);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v50 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, &v60, &v57);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v56);
  ThreadUnlock1(v52, v51, v53);
  v54 = *((_QWORD *)v46 + 60);
  *(_OWORD *)(v54 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v54 + 80) = v66;
  if ( v50 >= 0 && v57 == 24 )
  {
    v55 = (__int64 *)v60;
    if ( v60 + 8 < v60 || v60 + 8 > MmUserProbeAddress )
      v55 = (__int64 *)MmUserProbeAddress;
    v42 = *v55;
    v68 = *v55;
    goto LABEL_96;
  }
LABEL_95:
  v42 = 0LL;
LABEL_96:
  if ( v19 != (unsigned __int8 *)v77 && v19 != v79 )
  {
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v19 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v71);
  }
  return v42;
}
