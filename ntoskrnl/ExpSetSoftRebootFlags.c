/*
 * XREFs of ExpSetSoftRebootFlags @ 0x1406035F0
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpSetSoftRebootFlags(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  unsigned int v6; // edi
  __int64 v7; // r8
  char *i; // rdx
  signed __int32 v9; // ett
  __int32 v10; // esi
  int v12; // ebx
  int v13; // r12d
  __int64 (__fastcall *v14)(_QWORD, _QWORD, __int64, __int64); // rax
  int v15; // r14d
  int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h]
  int v25; // [rsp+68h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-98h]
  __int64 v27; // [rsp+78h] [rbp-90h]
  char v28; // [rsp+80h] [rbp-88h]
  __int64 v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  char v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A4h] [rbp-64h]
  __int64 (__fastcall *v34)(int, int); // [rsp+A8h] [rbp-60h]
  char v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+BCh] [rbp-4Ch]
  __int64 (__fastcall *v38)(int, int); // [rsp+C0h] [rbp-48h]
  char v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  __int64 (__fastcall *v41)(int, int); // [rsp+D8h] [rbp-30h]
  char v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E8h] [rbp-20h]
  int v44; // [rsp+ECh] [rbp-1Ch]
  __int64 (__fastcall *v45)(int, int); // [rsp+F0h] [rbp-18h]
  char v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  int v48; // [rsp+104h] [rbp-4h]
  __int64 v49; // [rsp+108h] [rbp+0h]
  char v50; // [rsp+110h] [rbp+8h]
  __int64 v51; // [rsp+118h] [rbp+10h]
  __int64 (__fastcall *v52)(int, int); // [rsp+120h] [rbp+18h]
  char v53; // [rsp+128h] [rbp+20h]
  int v54; // [rsp+130h] [rbp+28h]
  int v55; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v56)(int, int); // [rsp+138h] [rbp+30h]
  char v57; // [rsp+140h] [rbp+38h]
  int v58; // [rsp+148h] [rbp+40h]
  int v59; // [rsp+14Ch] [rbp+44h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  char v61; // [rsp+158h] [rbp+50h]
  int v62; // [rsp+160h] [rbp+58h]
  int v63; // [rsp+164h] [rbp+5Ch]
  __int64 v64; // [rsp+168h] [rbp+60h]
  char v65; // [rsp+170h] [rbp+68h]
  int v66; // [rsp+178h] [rbp+70h]
  int v67; // [rsp+17Ch] [rbp+74h]
  __int64 v68; // [rsp+180h] [rbp+78h]
  char v69; // [rsp+188h] [rbp+80h]
  int v70; // [rsp+190h] [rbp+88h]
  int v71; // [rsp+194h] [rbp+8Ch]
  __int64 (__fastcall *v72)(int, int); // [rsp+198h] [rbp+90h]
  char v73; // [rsp+1A0h] [rbp+98h]
  int v74; // [rsp+1A8h] [rbp+A0h]
  int v75; // [rsp+1ACh] [rbp+A4h]
  __int64 (__fastcall *v76)(int, int); // [rsp+1B0h] [rbp+A8h]
  char v77; // [rsp+1B8h] [rbp+B0h]
  int v78; // [rsp+1C0h] [rbp+B8h]
  int v79; // [rsp+1C4h] [rbp+BCh]
  __int64 (__fastcall *v80)(unsigned int, int); // [rsp+1C8h] [rbp+C0h]
  char v81; // [rsp+1D0h] [rbp+C8h]
  int v82; // [rsp+1D8h] [rbp+D0h]
  int v83; // [rsp+1DCh] [rbp+D4h]
  __int64 v84; // [rsp+1E0h] [rbp+D8h]
  char v85; // [rsp+1E8h] [rbp+E0h]
  int v86; // [rsp+1F0h] [rbp+E8h]
  int v87; // [rsp+1F4h] [rbp+ECh]
  __int64 (__fastcall *v88)(int, int); // [rsp+1F8h] [rbp+F0h]
  char v89; // [rsp+200h] [rbp+F8h]
  int v90; // [rsp+208h] [rbp+100h]
  int v91; // [rsp+20Ch] [rbp+104h]
  __int64 (__fastcall *v92)(int, int); // [rsp+210h] [rbp+108h]
  char v93; // [rsp+218h] [rbp+110h]
  __int64 v94; // [rsp+220h] [rbp+118h]
  __int64 v95; // [rsp+228h] [rbp+120h]
  char v96; // [rsp+230h] [rbp+128h]
  int v97; // [rsp+238h] [rbp+130h]
  int v98; // [rsp+23Ch] [rbp+134h]
  __int64 v99; // [rsp+240h] [rbp+138h]
  char v100; // [rsp+248h] [rbp+140h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  LOBYTE(v25) = 0;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  v26 = 0x2000000000LL;
  v27 = 0LL;
  v38 = BapdpKsrCompleteScenarioPhase0;
  v41 = BapdpKsrCancelScenario;
  v52 = BapdpKsrCancelScenario;
  v56 = BapdpKsrCompleteScenario;
  v63 = 80;
  v66 = 80;
  v80 = BapdpKsrComplete;
  v28 = 0;
  v29 = 32LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 8;
  v34 = BapdpKsrInitiateScenarioPhase0;
  v35 = 0;
  v36 = 8;
  v37 = 16;
  v39 = 0;
  v40 = 8LL;
  v42 = 0;
  v43 = 0;
  v44 = 16;
  v45 = BapdpKsrpInitiateScenario;
  v46 = 0;
  v47 = 16;
  v48 = 16;
  v49 = 0LL;
  v50 = 0;
  v51 = 16LL;
  v53 = 0;
  v54 = 16;
  v55 = 2;
  v57 = 0;
  v58 = 0;
  v59 = 1;
  v60 = 0LL;
  v61 = 0;
  v62 = 16;
  v64 = 0LL;
  v65 = 1;
  v67 = 16;
  v68 = 0LL;
  v69 = 1;
  v70 = 2;
  v71 = 8;
  v72 = BapdpKsrInitiateScenarioPhase0;
  v73 = 0;
  v74 = 2;
  v75 = 16;
  v76 = BapdpKsrpInitiateScenario;
  v77 = 0;
  v78 = 2;
  v79 = 1;
  v81 = 0;
  v82 = 1;
  v83 = 1;
  v84 = 0LL;
  v85 = 0;
  v98 = 32;
  v5 = a1 & 0x20000000;
  v86 = 1;
  v87 = 8;
  v88 = BapdpKsrInitiateScenarioPhase0;
  v89 = 0;
  v90 = 1;
  v91 = 16;
  v92 = BapdpKsrpInitiateScenario;
  v93 = 0;
  v94 = 1LL;
  v95 = 0LL;
  v96 = 0;
  v97 = 1;
  v99 = 0LL;
  v100 = 0;
  v6 = a1 & 0xC000007B;
  if ( a1 >= 0 && (a1 & 0x40000000) == 0 )
  {
    v7 = 0LL;
    for ( i = (char *)&v23 + 4; ; i += 24 )
    {
      if ( v6 == *(_DWORD *)i && (!i[12] || !(_BYTE)a4) )
      {
        v9 = *((_DWORD *)i - 1);
        v10 = _InterlockedCompareExchange(&ExSoftRebootState, a1 & 0x4000007B | 0x80000000, v9);
        if ( v9 == v10 )
          break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 0x15 )
        return 3221266435LL;
    }
    _m_prefetchw(&ExSoftRebootFlags);
    v12 = ExSoftRebootFlags;
    v13 = ExSoftRebootFlags & 0x40000000;
    v14 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))*(&v24 + 3 * (int)v7);
    if ( v14 )
      v15 = v14((unsigned int)ExSoftRebootFlags, (unsigned int)a1, v7, a4);
    else
      v15 = 0;
    v16 = ExSoftRebootFlags & 0x3CFFFF84;
    v17 = a1 & 0xC300007B;
    v18 = v12 & 0xC300007B;
    if ( v15 < 0 )
    {
      ExSoftRebootFlags = v16 | v18;
      _InterlockedExchange(&ExSoftRebootState, v10);
      return (unsigned int)v15;
    }
    v19 = v17 | 0x40000000;
    if ( !v13 )
      v19 = v17;
    v20 = v16 | v19;
    ExSoftRebootFlags = v20;
    if ( v6 == 32 )
    {
      v21 = v20 | 0x40000000;
    }
    else
    {
      if ( v10 != 32 || !v5 )
        goto LABEL_22;
      v21 = v20 & 0xBFFFFFFF;
    }
    ExSoftRebootFlags = v21;
LABEL_22:
    _InterlockedExchange(&ExSoftRebootState, v6);
    v22 = __PAIR64__(v6, v10);
    ZwUpdateWnfStateData((__int64)&WNF_KSR_STATE_TRANSITION, (__int64)&v22);
    return (unsigned int)v15;
  }
  return 3221225485LL;
}
