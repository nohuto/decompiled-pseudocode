/*
 * XREFs of sub_18002D350 @ 0x18002D350
 * Callers:
 *     sub_180002834 @ 0x180002834 (sub_180002834.c)
 *     sub_18002CFD0 @ 0x18002CFD0 (sub_18002CFD0.c)
 *     sub_1800D1B84 @ 0x1800D1B84 (sub_1800D1B84.c)
 * Callees:
 *     ?_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ @ 0x18002DD48 (-_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180115054 @ 0x180115054 (sub_180115054.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18002D350(__int64 a1, __int64 a2, ULONGLONG *a3, int *a4, __int64 *a5, int a6)
{
  __int64 v9; // r15
  float v10; // xmm6_4
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 *v17; // rdi
  __int64 v18; // rbx
  unsigned int v19; // eax
  float v20; // xmm0_4
  __int64 v21; // rdi
  unsigned int v22; // ebx
  __int64 v23; // rax
  float v24; // xmm0_4
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rax
  float v30; // xmm0_4
  __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  float v37; // xmm6_4
  float v38; // xmm0_4
  unsigned int v39; // eax
  unsigned __int64 v40; // r8
  int v41; // xmm0_4
  int v42; // ebx
  __int64 v43; // rsi
  __int64 *v44; // rdi
  _WORD *v45; // rbx
  _WORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // r8d
  int v50; // ecx
  int v51; // ebx
  __int64 v52; // rsi
  __int64 *v53; // rdi
  __int64 *v55; // [rsp+A8h] [rbp-80h] BYREF
  int v56; // [rsp+B0h] [rbp-78h]
  __int64 v57; // [rsp+B4h] [rbp-74h]
  int v58; // [rsp+BCh] [rbp-6Ch]
  int v59; // [rsp+C0h] [rbp-68h]
  int v60; // [rsp+C4h] [rbp-64h]
  float v61; // [rsp+C8h] [rbp-60h] BYREF
  int v62; // [rsp+CCh] [rbp-5Ch]
  float v63; // [rsp+D0h] [rbp-58h]
  __int64 v64; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v67; // [rsp+F0h] [rbp-38h] BYREF
  int v68; // [rsp+F4h] [rbp-34h] BYREF
  int v69; // [rsp+F8h] [rbp-30h] BYREF
  float v70; // [rsp+FCh] [rbp-2Ch] BYREF
  int v71; // [rsp+100h] [rbp-28h] BYREF
  int v72; // [rsp+104h] [rbp-24h] BYREF
  float v73; // [rsp+108h] [rbp-20h] BYREF
  int v74; // [rsp+10Ch] [rbp-1Ch] BYREF
  int v75; // [rsp+110h] [rbp-18h] BYREF
  int v76; // [rsp+114h] [rbp-14h] BYREF
  int v77; // [rsp+118h] [rbp-10h] BYREF
  int v78; // [rsp+11Ch] [rbp-Ch] BYREF
  __int64 v79; // [rsp+120h] [rbp-8h] BYREF
  int v80; // [rsp+128h] [rbp+0h] BYREF
  float v81; // [rsp+12Ch] [rbp+4h] BYREF
  int v82; // [rsp+130h] [rbp+8h] BYREF
  int v83; // [rsp+134h] [rbp+Ch] BYREF
  int v84; // [rsp+138h] [rbp+10h] BYREF
  int v85; // [rsp+13Ch] [rbp+14h] BYREF
  int v86; // [rsp+140h] [rbp+18h] BYREF
  int v87; // [rsp+144h] [rbp+1Ch] BYREF
  int v88; // [rsp+148h] [rbp+20h] BYREF
  _DWORD v89[3]; // [rsp+14Ch] [rbp+24h] BYREF
  __int64 v90; // [rsp+158h] [rbp+30h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+160h] [rbp+38h] BYREF
  char v92[4]; // [rsp+170h] [rbp+48h] BYREF
  float v93; // [rsp+174h] [rbp+4Ch]
  char v94; // [rsp+178h] [rbp+50h]
  float v95; // [rsp+17Ch] [rbp+54h]
  __int64 v96; // [rsp+180h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+188h] [rbp+60h] BYREF
  void *v98; // [rsp+198h] [rbp+70h]
  int v99; // [rsp+1A0h] [rbp+78h]
  int v100; // [rsp+1A4h] [rbp+7Ch]
  _DWORD *v101; // [rsp+1A8h] [rbp+80h]
  __int64 v102; // [rsp+1B0h] [rbp+88h]
  _WORD *v103; // [rsp+1B8h] [rbp+90h]
  int v104; // [rsp+1C0h] [rbp+98h]
  int v105; // [rsp+1C4h] [rbp+9Ch]
  _WORD *v106; // [rsp+1C8h] [rbp+A0h]
  int v107; // [rsp+1D0h] [rbp+A8h]
  int v108; // [rsp+1D4h] [rbp+ACh]
  int *v109; // [rsp+1D8h] [rbp+B0h]
  __int64 v110; // [rsp+1E0h] [rbp+B8h]
  int *v111; // [rsp+1E8h] [rbp+C0h]
  __int64 v112; // [rsp+1F0h] [rbp+C8h]
  int *v113; // [rsp+1F8h] [rbp+D0h]
  __int64 v114; // [rsp+200h] [rbp+D8h]
  float *v115; // [rsp+208h] [rbp+E0h]
  __int64 v116; // [rsp+210h] [rbp+E8h]
  int *v117; // [rsp+218h] [rbp+F0h]
  __int64 v118; // [rsp+220h] [rbp+F8h]
  int *v119; // [rsp+228h] [rbp+100h]
  __int64 v120; // [rsp+230h] [rbp+108h]
  float *v121; // [rsp+238h] [rbp+110h]
  __int64 v122; // [rsp+240h] [rbp+118h]
  int *v123; // [rsp+248h] [rbp+120h]
  __int64 v124; // [rsp+250h] [rbp+128h]
  int *v125; // [rsp+258h] [rbp+130h]
  __int64 v126; // [rsp+260h] [rbp+138h]
  int *v127; // [rsp+268h] [rbp+140h]
  __int64 v128; // [rsp+270h] [rbp+148h]
  int *v129; // [rsp+278h] [rbp+150h]
  __int64 v130; // [rsp+280h] [rbp+158h]
  int *v131; // [rsp+288h] [rbp+160h]
  __int64 v132; // [rsp+290h] [rbp+168h]
  void *retaddr; // [rsp+310h] [rbp+1E8h]

  v9 = qword_18019E618;
  LODWORD(v66) = 1065353216;
  v62 = 1065353216;
  v60 = 1065353216;
  v10 = 1.0;
  v57 = 0x3F8000003F800000LL;
  v59 = 1065353216;
  v58 = 1065353216;
  v61 = 1.0;
  v63 = 1.0;
  v56 = 1065353216;
  *a4 = 1065353216;
  v55 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v55);
  if ( v11 < 0 )
    sub_18006D26C(
      retaddr,
      32LL,
      "avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (unsigned int)v11);
  v64 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v64);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v55 + 120))(v55) )
    v12 = 0.0;
  else
    v12 = 1.0;
  *(float *)&v65 = v12;
  v13 = v12 * *(float *)a4;
  *(float *)a4 = v13;
  if ( v13 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v14 = 1.0;
    else
      v14 = (*(float (__fastcall **)(__int64 *))(*v55 + 200))(v55);
    v62 = LODWORD(v14);
    *(float *)a4 = v14 * *(float *)a4;
    if ( Concurrency::details::_ContextCallback::_HasCapturedContext((Concurrency::details::_ContextCallback *)&v64)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v64 + 88LL))(v64, &v61, a5);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v55 + 464))(v55)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v55 + 472))(v55) )
    {
      *(float *)a4 = *(float *)a4 * 0.0;
    }
  }
  if ( *(float *)a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v15 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 280LL))(v9)
       && dword_180172FE0[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : 1.0;
    v60 = LODWORD(v15);
    v16 = v15 * *(float *)a4;
    *(float *)a4 = v16;
    v17 = v55;
    v18 = *(_QWORD *)v9;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(__int64, __int64 *, _QWORD))(v18 + 72))(v9, v17, v19) )
      (*(void (__fastcall **)(__int64 *))(*v55 + 208))(v55);
    else
      v16 = 1.0;
    v59 = LODWORD(v16);
    *(float *)a4 = v16 * *(float *)a4;
    LODWORD(v66) = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 288LL))(v9, a2);
    v20 = *(float *)&v66 * *(float *)a4;
    *(float *)a4 = v20;
    if ( v20 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v21 = *(_QWORD *)v9;
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        v63 = (*(float (__fastcall **)(__int64, __int64, _QWORD))(v21 + 360))(v9, v23, v22);
        v24 = v63 * *(float *)a4;
        *(float *)a4 = v24;
        v25 = *(_QWORD *)v9;
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v25 + 80))(v9, v26) )
        {
          v24 = 1.0;
        }
        else
        {
          v27 = v55;
          v28 = *v55;
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v28 + 216))(v27, v29);
        }
        v58 = LODWORD(v24);
        v30 = v24 * *(float *)a4;
        *(float *)a4 = v30;
        v31 = *(_QWORD *)v9;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(v31 + 96))(v9, v32) )
        {
          v33 = v55;
          v34 = *v55;
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v34 + 224))(v33, v35);
        }
        else
        {
          v30 = 1.0;
        }
        *((float *)&v57 + 1) = v30;
        *(float *)a4 = v30 * *(float *)a4;
        (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 64LL))(v9, a2, v92);
        if ( ((*(unsigned int (__fastcall **)(__int64 *))(*v55 + 88))(v55)
           || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2))
          && ((*(unsigned int (__fastcall **)(__int64 *))(*v55 + 184))(v55)
           || Concurrency::details::_ContextCallback::_HasCapturedContext((Concurrency::details::_ContextCallback *)&v64)
           && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v64 + 128LL))(v64)) )
        {
          v10 = v92[0] ? 0.0 : v93;
          *(float *)&v57 = v10;
          if ( a5 )
          {
            v36 = v96;
            if ( *a5 > v96 )
              v36 = *a5;
            *a5 = v36;
          }
        }
        v37 = fminf(v10, v61) * *(float *)a4;
        if ( v94 )
          v38 = 0.0;
        else
          v38 = v95;
        v56 = LODWORD(v38);
        *(float *)a4 = v37 * v38;
      }
    }
  }
  LOBYTE(v39) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)v39 )
  {
    v41 = *a4;
    if ( *(float *)a4 != 0.0 )
      v41 = 1065353216;
    *a4 = v41;
  }
  if ( a3 )
  {
    v39 = *(_DWORD *)a3;
    if ( a6 == 2 )
    {
      if ( v39 > 4 )
      {
        LOBYTE(v39) = __vcrt_trace_logging_provider::_TlgKeywordOn(
                        (__vcrt_trace_logging_provider *)a3,
                        (const struct _TlgProvider_t *)3,
                        v40);
        if ( (_BYTE)v39 )
        {
          v51 = (*(__int64 (__fastcall **)(__int64 *))(*v55 + 40))(v55);
          v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
          v53 = v55;
          v77 = v51;
          v78 = v56;
          v79 = v57;
          v80 = v58;
          v81 = v63;
          v82 = v59;
          v83 = v60;
          *(float *)v89 = v61;
          v85 = v62;
          v86 = v65;
          v67 = v66;
          v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v65 = (*(__int64 (__fastcall **)(__int64 *))(*v53 + 72))(v53);
          v90 = v52;
          LOBYTE(v39) = sub_180115054(
                          (int)a3,
                          (int)&dword_1801699D8,
                          (__int64)&v90,
                          (__int64)&v65,
                          (__int64)&v66,
                          (__int64)&v67,
                          (__int64)&v86,
                          (__int64)&v85,
                          (__int64)v89,
                          (__int64)&v83,
                          (__int64)&v82,
                          (__int64)&v81,
                          (__int64)&v80,
                          (__int64)&v79 + 4,
                          (__int64)&v79,
                          (__int64)&v78,
                          (__int64)&v77);
        }
      }
    }
    else if ( v39 > 4 )
    {
      v42 = (*(__int64 (__fastcall **)(__int64 *))(*v55 + 40))(v55);
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
      v44 = v55;
      v84 = v42;
      v87 = v56;
      v68 = HIDWORD(v57);
      v88 = v57;
      v69 = v58;
      v70 = v63;
      v71 = v59;
      v72 = v60;
      v73 = v61;
      v74 = v62;
      v75 = v65;
      v76 = v66;
      v45 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      v46 = (_WORD *)(*(__int64 (__fastcall **)(__int64 *))(*v44 + 72))(v44);
      *(_QWORD *)&v89[1] = v43;
      v131 = &v84;
      v132 = 4LL;
      v129 = &v87;
      v130 = 4LL;
      v127 = &v88;
      v128 = 4LL;
      v125 = &v68;
      v126 = 4LL;
      v123 = &v69;
      v124 = 4LL;
      v121 = &v70;
      v122 = 4LL;
      v119 = &v71;
      v120 = 4LL;
      v117 = &v72;
      v118 = 4LL;
      v115 = &v73;
      v116 = 4LL;
      v113 = &v74;
      v114 = 4LL;
      v111 = &v75;
      v112 = 4LL;
      v109 = &v76;
      v110 = 4LL;
      v47 = -1LL;
      if ( v45 )
      {
        v48 = -1LL;
        do
          ++v48;
        while ( v45[v48] );
        v49 = 2 * v48 + 2;
      }
      else
      {
        v45 = &unk_18015C744;
        v49 = 2;
      }
      v106 = v45;
      v107 = v49;
      v108 = 0;
      if ( v46 )
      {
        do
          ++v47;
        while ( v46[v47] );
        v50 = 2 * v47 + 2;
      }
      else
      {
        v46 = &unk_18015C744;
        v50 = 2;
      }
      v103 = v46;
      v104 = v50;
      v105 = 0;
      v101 = &v89[1];
      v102 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 4;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = a3[1];
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v98 = &unk_1801698A1;
      v99 = 310;
      v100 = 1;
      v67 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
      LOBYTE(v39) = EventWriteTransfer(a3[4], &EventDescriptor, 0LL, 0LL, 0x11u, &UserData);
    }
  }
  if ( v64 )
    LOBYTE(v39) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  if ( v55 )
    LOBYTE(v39) = (*(__int64 (__fastcall **)(__int64 *))(*v55 + 16))(v55);
  return v39;
}
