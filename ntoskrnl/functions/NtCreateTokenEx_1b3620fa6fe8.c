__int64 __fastcall NtCreateTokenEx(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        __int64 *a6,
        void *a7,
        int *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int *a12,
        int *a13,
        __int64 a14,
        void **a15,
        char **a16,
        __int64 a17)
{
  void **v17; // rbx
  char PreviousMode; // si
  __int64 v19; // rcx
  int v20; // edi
  __int64 result; // rax
  __int64 v22; // rdx
  int v23; // edi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  int v27; // [rsp+20h] [rbp-1F8h]
  int v28; // [rsp+28h] [rbp-1F0h]
  int v29; // [rsp+28h] [rbp-1F0h]
  int v30; // [rsp+30h] [rbp-1E8h]
  int v31; // [rsp+30h] [rbp-1E8h]
  char v32; // [rsp+C0h] [rbp-158h] BYREF
  char v33; // [rsp+C1h] [rbp-157h]
  char v34; // [rsp+C2h] [rbp-156h]
  int v35; // [rsp+C4h] [rbp-154h]
  __int64 v36; // [rsp+C8h] [rbp-150h] BYREF
  int v37; // [rsp+D0h] [rbp-148h] BYREF
  int v38; // [rsp+D4h] [rbp-144h]
  int v39; // [rsp+D8h] [rbp-140h]
  int v40; // [rsp+DCh] [rbp-13Ch]
  int v41; // [rsp+E0h] [rbp-138h]
  __int64 v42; // [rsp+E8h] [rbp-130h] BYREF
  __int64 v43; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v44; // [rsp+F8h] [rbp-120h] BYREF
  PVOID P; // [rsp+100h] [rbp-118h] BYREF
  PVOID v46; // [rsp+108h] [rbp-110h] BYREF
  __int64 v47; // [rsp+110h] [rbp-108h] BYREF
  __int64 v48; // [rsp+118h] [rbp-100h] BYREF
  __int64 v49; // [rsp+120h] [rbp-F8h] BYREF
  PSID v50; // [rsp+128h] [rbp-F0h] BYREF
  __int64 v51; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+138h] [rbp-E0h] BYREF
  unsigned int v53; // [rsp+140h] [rbp-D8h]
  __int64 *v54; // [rsp+148h] [rbp-D0h]
  __int64 *v55; // [rsp+150h] [rbp-C8h]
  int *v56; // [rsp+158h] [rbp-C0h]
  __int64 v57; // [rsp+160h] [rbp-B8h]
  void **v58; // [rsp+168h] [rbp-B0h]
  __int64 v59; // [rsp+170h] [rbp-A8h]
  __int64 v60; // [rsp+178h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+180h] [rbp-98h] BYREF
  int v62[2]; // [rsp+188h] [rbp-90h]
  int v63[2]; // [rsp+190h] [rbp-88h] BYREF
  _QWORD *v64; // [rsp+198h] [rbp-80h]
  __int64 v65; // [rsp+1A0h] [rbp-78h] BYREF
  int v66; // [rsp+1A8h] [rbp-70h]
  void *Src; // [rsp+1B0h] [rbp-68h]
  __int64 v68; // [rsp+1B8h] [rbp-60h]
  int *v69; // [rsp+1C0h] [rbp-58h]
  __int64 v70[2]; // [rsp+1C8h] [rbp-50h] BYREF

  v41 = a4;
  *(_QWORD *)v62 = a3;
  v53 = a2;
  v64 = a1;
  v69 = a13;
  v54 = a5;
  v58 = a15;
  v17 = (void **)a14;
  v68 = a14;
  v59 = a17;
  v57 = a9;
  v56 = a8;
  v55 = a6;
  Src = a7;
  v52 = 0LL;
  *(_QWORD *)v63 = 0LL;
  v32 = 0;
  v65 = 0LL;
  v66 = 0;
  v61 = 0LL;
  v60 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v40 = 0;
  v48 = 0LL;
  v36 = 0x100000000LL;
  v39 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  *(_OWORD *)v70 = 0LL;
  v37 = 0;
  v33 = 0;
  P = 0LL;
  v46 = 0LL;
  v38 = 0;
  v44 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( PreviousMode )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v64 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v64;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    if ( ((unsigned __int8)v55 & 3) != 0
      || ((unsigned __int8)v56 & 3) != 0
      || (v57 & 3) != 0
      || (v59 & 3) != 0
      || a14 && (a14 & 3) != 0
      || ((unsigned __int8)v58 & 3) != 0
      || a16 && ((unsigned __int8)a16 & 3) != 0
      || ((unsigned __int8)v54 & 3) != 0
      || a13 && ((unsigned __int8)a13 & 3) != 0
      || a12 && ((unsigned __int8)a12 & 3) != 0
      || a11 && (a11 & 3) != 0
      || a10 && (a10 & 3) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
  }
  v20 = v41;
  if ( (unsigned int)(v41 - 1) > 1 )
    return 3221225640LL;
  result = SeCaptureSecurityQos(*(__int64 *)v62, PreviousMode, &v32, (__int64)&v65);
  if ( (int)result >= 0 )
  {
    if ( v32 || v20 != 2 )
    {
      v35 = 0;
      v61 = *v54;
      v60 = *v55;
      v23 = SeCaptureSidAndAttributesArray(Src, 0, v28, v30, (__int64)&v47, (__int64)&v51);
      v35 = v23;
      if ( v23 >= 0 )
      {
        v40 = *v56;
        v26 = v40;
        v23 = SeCaptureSidAndAttributesArray(v56 + 2, 0, v29, v31, (__int64)&v48, (__int64)&v36);
        v35 = v23;
        LODWORD(v36) = (v36 - 16 * v26 + 3) & 0xFFFFFFFC;
        v17 = (void **)v68;
      }
      if ( v23 >= 0 )
      {
        v39 = *(_DWORD *)v57;
        v23 = SeCaptureLuidAndAttributesArray(
                (char *)(v57 + 4),
                v39,
                PreviousMode,
                v25,
                v27,
                v29,
                v31,
                &v49,
                (_DWORD *)&v51 + 1);
        v35 = v23;
      }
      if ( v17 && v23 >= 0 )
      {
        v23 = SeCaptureSid(*v17, v27, 1, (__int64)&v50);
        v35 = v23;
      }
      if ( v23 >= 0 )
      {
        v23 = SeCaptureSid(*v58, v27, 1, (__int64)&v42);
        v35 = v23;
      }
      if ( a16 && v23 >= 0 && *a16 )
      {
        v23 = SeCaptureAcl(*a16, PreviousMode, v24, v25, 512, v29, (PVOID *)&v43, (unsigned int *)&v52);
        v35 = v23;
      }
      *(_OWORD *)v70 = *(_OWORD *)v59;
      if ( a12 && v23 >= 0 )
      {
        v38 = *a12;
        v23 = SeCaptureSidAndAttributesArray(a12 + 2, 0, v29, v31, (__int64)&v44, (__int64)&v52 + 4);
        v35 = v23;
      }
      if ( a10 && v23 >= 0 )
      {
        LOBYTE(v25) = PreviousMode;
        v23 = SepCaptureTokenSecurityAttributesInformation(a10, (unsigned int)&v36 + 4, 1, v25, 0, (__int64)&P);
        v35 = v23;
      }
      if ( a11 && v23 >= 0 )
      {
        LOBYTE(v25) = PreviousMode;
        v23 = SepCaptureTokenSecurityAttributesInformation(a11, (unsigned int)&v36 + 4, 1, v25, 0, (__int64)&v46);
        v35 = v23;
      }
      if ( v69 && v23 >= 0 )
      {
        v37 = *v69;
        v33 = 1;
      }
      if ( v23 >= 0 )
        v23 = SepCreateTokenEx(
                (HANDLE *)v63,
                PreviousMode,
                v53,
                *(_QWORD **)v62,
                v41,
                SHIDWORD(v65),
                (__int64)&v61,
                &v60,
                (void **)v47,
                v40,
                v48,
                v36,
                v39,
                (struct _ERESOURCE *)v49,
                v50,
                (void *)v42,
                (void *)v43,
                v70,
                (__int64)P,
                (__int64)v46,
                v38,
                v44,
                (_DWORD *)((unsigned __int64)&v37 & -(__int64)(v33 != 0)),
                0);
      if ( v47 )
        SeReleaseLuidAndAttributesArray((void *)v47, PreviousMode);
      if ( v48 )
        SeReleaseLuidAndAttributesArray((void *)v48, PreviousMode);
      if ( v49 )
        SeReleaseLuidAndAttributesArray((void *)v49, PreviousMode);
      if ( v50 )
      {
        LOBYTE(v24) = 1;
        LOBYTE(v22) = PreviousMode;
        SeReleaseSid(v50, v22, v24, v25);
      }
      if ( v42 )
      {
        LOBYTE(v24) = 1;
        LOBYTE(v22) = PreviousMode;
        SeReleaseSid(v42, v22, v24, v25);
      }
      if ( v43 )
        SeReleaseAcl((void *)v43, PreviousMode);
      if ( v44 )
        SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
      if ( P )
        SepFreeCapturedTokenSecurityAttributesInformation(P);
      if ( v46 )
        SepFreeCapturedTokenSecurityAttributesInformation(v46);
      if ( v23 >= 0 )
        *v64 = *(_QWORD *)v63;
      return (unsigned int)v23;
    }
    else
    {
      return 3221225637LL;
    }
  }
  return result;
}
