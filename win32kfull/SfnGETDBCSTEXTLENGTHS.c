/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C0010D80
 * Callers:
 *     <none>
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0034788 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C0109220 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C0109294 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  _QWORD *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // rdi
  __int64 v24; // rdx
  unsigned int v25; // edi
  struct tagTHREADINFO *v26; // r14
  struct tagTHREADINFO *v27; // rax
  unsigned __int64 v28; // r8
  unsigned __int8 *v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r11d
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 *v38; // rsi
  __int64 v39; // rsi
  ULONG64 v40; // rcx
  __int64 v41; // xmm0_8
  struct tagTHREADINFO *v42; // rax
  char v43; // [rsp+30h] [rbp-408h] BYREF
  _BYTE v44[3]; // [rsp+31h] [rbp-407h] BYREF
  int v45; // [rsp+34h] [rbp-404h]
  int v46; // [rsp+38h] [rbp-400h] BYREF
  int v47; // [rsp+3Ch] [rbp-3FCh] BYREF
  int v48; // [rsp+40h] [rbp-3F8h]
  unsigned __int8 *v49; // [rsp+48h] [rbp-3F0h]
  __int64 v50; // [rsp+50h] [rbp-3E8h]
  __int64 v51; // [rsp+58h] [rbp-3E0h]
  unsigned int v52; // [rsp+60h] [rbp-3D8h]
  unsigned __int64 v53; // [rsp+88h] [rbp-3B0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+90h] [rbp-3A8h] BYREF
  unsigned __int64 v55; // [rsp+A0h] [rbp-398h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-390h]
  __int128 v57; // [rsp+B0h] [rbp-388h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-378h]
  __int64 v59; // [rsp+D8h] [rbp-360h]
  __int64 v60; // [rsp+E0h] [rbp-358h]
  __int64 v61; // [rsp+E8h] [rbp-350h]
  __int128 v62; // [rsp+F0h] [rbp-348h]
  __int64 v63; // [rsp+100h] [rbp-338h]
  __int64 v64; // [rsp+108h] [rbp-330h] BYREF
  int v65; // [rsp+110h] [rbp-328h]
  int v66; // [rsp+114h] [rbp-324h]
  __int64 v67; // [rsp+118h] [rbp-320h]
  __int64 v68; // [rsp+120h] [rbp-318h]
  __int64 v69; // [rsp+128h] [rbp-310h]
  __int128 v70; // [rsp+130h] [rbp-308h] BYREF
  __int64 v71; // [rsp+140h] [rbp-2F8h]
  __int128 v72; // [rsp+180h] [rbp-2B8h] BYREF
  __int64 v73; // [rsp+190h] [rbp-2A8h]
  __int128 v74; // [rsp+198h] [rbp-2A0h] BYREF
  __int64 v75; // [rsp+1A8h] [rbp-290h]
  unsigned __int8 v76[96]; // [rsp+1B0h] [rbp-288h] BYREF
  unsigned __int8 v77[512]; // [rsp+210h] [rbp-228h] BYREF

  v51 = a4;
  v59 = a3;
  v48 = a4 != 0;
  v45 = a7 & 1;
  v55 = 0LL;
  v46 = 0;
  v56 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v11 = PtiCurrentShared();
  v12 = v11;
  v13 = a1 + 5;
  if ( a1 )
    v14 = *v13 - *((_QWORD *)v11 + 59);
  else
    v14 = 0LL;
  if ( !a1 )
    return 0LL;
  v50 = *(_QWORD *)(*v13 + 120LL);
  v66 = 0;
  v64 = v14;
  v65 = a2;
  v67 = a3;
  v60 = a5;
  v68 = a5;
  v61 = a6;
  v69 = a6;
  ThreadLock(a1, &v72);
  v15 = *((_QWORD *)v12 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v15 + 64);
  v62 = *(_OWORD *)RegionSize;
  v63 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = *(_QWORD *)(*v13 + 224LL);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  EtwTraceBeginCallback(6LL);
  v16 = KeUserModeCallback(6LL, &v64, 40LL, &v55, &v46);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v43);
  ThreadUnlock1(v18, v17, v19);
  v20 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v20 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v20 + 80) = v63;
  if ( v16 < 0 || v46 != 24 )
    return 0LL;
  v21 = (__int64 *)v55;
  if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  v22 = *v21;
  v56 = v22;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v22 <= 0 || v48 == v45 )
    return v22;
  if ( *(_QWORD *)(*v13 + 120LL) != v50 )
    goto LABEL_31;
  v24 = 0LL;
  if ( a2 != 14 )
  {
    LOBYTE(v24) = 1;
    if ( HMValidateHandleNoSecure(*a1, v24) )
    {
      if ( a2 == 394 )
      {
        LODWORD(v24) = (*(_DWORD *)(*v13 + 28LL) & 0x40) == 0 && (*(_DWORD *)(*v13 + 28LL) & 0x30) != 0;
LABEL_25:
        if ( (_DWORD)v24 )
          v22 = 8LL;
        v56 = v22;
        goto LABEL_28;
      }
      if ( a2 == 329 )
      {
        LODWORD(v24) = (*(_DWORD *)(*v13 + 28LL) & 0x30) != 0 && (*(_DWORD *)(*v13 + 28LL) & 0x200) == 0;
        goto LABEL_25;
      }
    }
    return 0LL;
  }
LABEL_28:
  if ( (_DWORD)v24 )
    return v22;
  if ( (*((_DWORD *)PtiCurrentShared() + 122) & 0x4000000) != 0 )
  {
    if ( (_DWORD)v51 )
LABEL_31:
      v22 *= 2LL;
    return v22;
  }
  v25 = v22 + 1;
  v52 = v25;
  memset_0(v76, 0, sizeof(v76));
  v53 = 0LL;
  v47 = 0;
  v50 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v26 = PtiCurrentShared();
  v51 = *v13 - *((_QWORD *)v26 + 59);
  v27 = PtiCurrentShared();
  *((_DWORD *)v27 + 122) |= 0x4000000u;
  v28 = 2 * v25;
  if ( v45 )
    v28 = v25;
  RegionSize[0] = (unsigned int)v28;
  v29 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v28, v77, 0, 0x200uLL);
  v49 = v29;
  if ( !v29 )
    return 0LL;
  PtiCurrentShared();
  v70 = 0LL;
  v71 = 0LL;
  if ( v29 != v76 && v29 != v77 )
    PushW32ThreadLock(v29, &v70, Win32FreePool);
  *((_QWORD *)v29 + 5) = v51;
  *((_DWORD *)v29 + 12) = a2 - 1;
  v30 = v52;
  if ( a2 != 14 )
    v30 = v59;
  *((_QWORD *)v29 + 7) = v30;
  *((_QWORD *)v29 + 8) = v60;
  *((_QWORD *)v29 + 9) = v61;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v29, RegionSize[0], (void **)v29 + 10) < 0 )
    goto LABEL_54;
  *((_DWORD *)v29 + 22) = v31;
  ThreadLock(a1, &v74);
  v32 = *((_QWORD *)v26 + 60);
  *(_OWORD *)RegionSize = *(_OWORD *)(v32 + 64);
  v57 = *(_OWORD *)RegionSize;
  v58 = *(_QWORD *)(v32 + 80);
  *(_QWORD *)(v32 + 72) = v51;
  *(_QWORD *)(*((_QWORD *)v26 + 60) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v26 + 60) + 80LL) = *(_QWORD *)(*v13 + 224LL);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v44);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v29 + 2) = 0LL;
  v33 = KeUserModeCallback(35LL, v29, *(unsigned int *)v29, &v53, &v47);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v44);
  ThreadUnlock1(v35, v34, v36);
  v37 = *((_QWORD *)v26 + 60);
  *(_OWORD *)(v37 + 64) = *(_OWORD *)RegionSize;
  *(_QWORD *)(v37 + 80) = v58;
  if ( v33 < 0 )
    goto LABEL_54;
  if ( v47 == 24 )
  {
    v38 = (__int64 *)v53;
    if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
      v38 = (__int64 *)MmUserProbeAddress;
    v39 = *v38;
    v50 = v39;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v39 > 0 )
    {
      v40 = v53;
      if ( v53 + 24 < v53 || v53 + 24 > MmUserProbeAddress )
        v40 = MmUserProbeAddress;
      v41 = *(_QWORD *)(v40 + 16);
      v57 = *(_OWORD *)v40;
      v58 = v41;
      v39 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v57, v39, v48, v45);
      v50 = v39;
    }
    v42 = PtiCurrentShared();
    *((_DWORD *)v42 + 122) &= ~0x4000000u;
  }
  else
  {
LABEL_54:
    v39 = 0LL;
  }
  if ( v29 != v76 && v29 != v77 )
  {
    if ( *((_QWORD *)v29 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v29 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v70);
  }
  return v39;
}
