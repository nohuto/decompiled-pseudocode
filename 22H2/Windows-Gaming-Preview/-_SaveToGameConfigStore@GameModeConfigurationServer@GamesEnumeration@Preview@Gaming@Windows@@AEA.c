/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003A358
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x18003B470 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows--Inte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800125A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016EC8 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180017704 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     __security_check_cookie @ 0x1800443F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // r14d
  HSTRING v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  const WCHAR *v23; // r14
  const WCHAR *v24; // r13
  const WCHAR *v25; // r12
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  PCWSTR StringRawBuffer; // r9
  int v31; // ecx
  int v32; // edx
  const WCHAR *v33; // r10
  __int64 v34; // rax
  int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  __int64 (__fastcall *v46)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  __int64 (__fastcall *v50)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  int v51; // eax
  int v52; // eax
  __int64 v53; // r10
  int v54; // eax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 **v58; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v61; // rdx
  __int64 v62; // [rsp+38h] [rbp-D0h] BYREF
  int v63; // [rsp+40h] [rbp-C8h] BYREF
  int v64; // [rsp+44h] [rbp-C4h] BYREF
  int v65; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v66[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v67; // [rsp+68h] [rbp-A0h]
  UINT32 length; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v69; // [rsp+70h] [rbp-98h] BYREF
  __int64 v70; // [rsp+78h] [rbp-90h] BYREF
  int v71; // [rsp+80h] [rbp-88h] BYREF
  int v72; // [rsp+84h] [rbp-84h] BYREF
  int v73; // [rsp+88h] [rbp-80h] BYREF
  int v74; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v75; // [rsp+90h] [rbp-78h] BYREF
  int v76; // [rsp+94h] [rbp-74h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v79; // [rsp+A8h] [rbp-60h]
  PCWSTR v80; // [rsp+B0h] [rbp-58h]
  __int16 v81; // [rsp+B8h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v82; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+C8h] [rbp-40h] BYREF
  const WCHAR *v84; // [rsp+E8h] [rbp-20h]
  int v85; // [rsp+F0h] [rbp-18h]
  int v86; // [rsp+F4h] [rbp-14h]
  const WCHAR *v87; // [rsp+F8h] [rbp-10h]
  int v88; // [rsp+100h] [rbp-8h]
  int v89; // [rsp+104h] [rbp-4h]
  const WCHAR *v90; // [rsp+108h] [rbp+0h]
  int v91; // [rsp+110h] [rbp+8h]
  int v92; // [rsp+114h] [rbp+Ch]
  const WCHAR *v93; // [rsp+118h] [rbp+10h]
  int v94; // [rsp+120h] [rbp+18h]
  int v95; // [rsp+124h] [rbp+1Ch]
  int *v96; // [rsp+128h] [rbp+20h]
  __int64 v97; // [rsp+130h] [rbp+28h]
  int *v98; // [rsp+138h] [rbp+30h]
  __int64 v99; // [rsp+140h] [rbp+38h]
  __int64 *v100; // [rsp+148h] [rbp+40h]
  __int64 v101; // [rsp+150h] [rbp+48h]
  int *v102; // [rsp+158h] [rbp+50h]
  __int64 v103; // [rsp+160h] [rbp+58h]
  int *v104; // [rsp+168h] [rbp+60h]
  __int64 v105; // [rsp+170h] [rbp+68h]
  int *v106; // [rsp+178h] [rbp+70h]
  __int64 v107; // [rsp+180h] [rbp+78h]
  int *v108; // [rsp+188h] [rbp+80h]
  __int64 v109; // [rsp+190h] [rbp+88h]
  __int16 *v110; // [rsp+198h] [rbp+90h]
  __int64 v111; // [rsp+1A0h] [rbp+98h]
  PCWSTR v112; // [rsp+1A8h] [rbp+A0h]
  int v113; // [rsp+1B0h] [rbp+A8h]
  int v114; // [rsp+1B4h] [rbp+ACh]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  v79 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v82 = v2;
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
    goto LABEL_14;
  }
  v63 = 0;
  v64 = 0;
  v67 = 0;
  v70 = 0LL;
  LODWORD(v69) = 0;
  v65 = 0;
  v4 = 0LL;
  string = 0LL;
  if ( !*((_QWORD *)this + 19) || *((_QWORD *)this + 18) )
  {
    v6 = *((_QWORD *)this + 14);
    v7 = *((_QWORD *)this + 15);
    if ( v6 )
    {
      if ( !v7 || !*((_QWORD *)this + 16) )
      {
LABEL_9:
        v5 = 717LL;
        goto LABEL_10;
      }
    }
    else if ( v7 || *((_QWORD *)this + 16) )
    {
      goto LABEL_9;
    }
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v63);
      v3 = v10;
      if ( v10 < 0 )
      {
        v8 = (unsigned int)v10;
        v5 = 722LL;
        goto LABEL_12;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), &v64);
      v3 = v11;
      if ( v11 < 0 )
      {
        v8 = (unsigned int)v11;
        v5 = 723LL;
        goto LABEL_12;
      }
      if ( v64 + v63 > 100 )
      {
        v5 = 724LL;
        goto LABEL_10;
      }
      v67 = 100 - v64 - v63;
    }
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v70);
      v3 = v13;
      if ( v13 < 0 )
      {
        v8 = (unsigned int)v13;
        v5 = 731LL;
        goto LABEL_12;
      }
      v14 = *((_QWORD *)this + 19);
      if ( v14 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 48LL))(v14, (char *)&v70 + 4);
        v3 = v15;
        if ( v15 < 0 )
        {
          v8 = (unsigned int)v15;
          v5 = 734LL;
          goto LABEL_12;
        }
      }
    }
    v16 = *((_QWORD *)this + 17);
    if ( v16 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &v69);
      v3 = v17;
      if ( v17 < 0 )
      {
        v8 = (unsigned int)v17;
        v5 = 740LL;
        goto LABEL_12;
      }
    }
    v18 = *((_QWORD *)this + 14);
    if ( v18 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v65);
      v3 = v19;
      if ( v19 < 0 )
      {
        v8 = (unsigned int)v19;
        v5 = 745LL;
        goto LABEL_12;
      }
    }
    v20 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 13), &string);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v20);
    v21 = (__int64 *)*((_QWORD *)this + 10);
    v22 = (__int64 *)*v21;
    v4 = string;
    while ( v22 != v21 )
    {
      v23 = &word_1800515C0;
      v24 = &word_1800515C0;
      v25 = &word_1800515C0;
      v26 = v22[6];
      v27 = *(_DWORD *)(v26 + 16);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        v29 = v27;
        do
        {
          if ( *(_DWORD *)v28 )
          {
            if ( *(_DWORD *)v28 == 1 )
            {
              v25 = *(const WCHAR **)(v28 + 8);
            }
            else if ( *(_DWORD *)v28 == 2 )
            {
              v23 = *(const WCHAR **)(v28 + 8);
            }
          }
          else
          {
            v24 = *(const WCHAR **)(v28 + 8);
          }
          v28 += 16LL;
          --v29;
        }
        while ( v29 );
      }
      length = 0;
      StringRawBuffer = WindowsGetStringRawBuffer(v4, &length);
      if ( (unsigned int)dword_18005A000 > 5
        && (qword_18005A010 & 0x800000000000LL) != 0
        && (qword_18005A018 & 0x800000000000LL) == qword_18005A018 )
      {
        v31 = *((unsigned __int8 *)this + 160);
        v32 = *((unsigned __int8 *)this + 96);
        v33 = *(const WCHAR **)(v22[6] + 24);
        v80 = StringRawBuffer;
        v81 = length;
        v71 = v67;
        v72 = v64;
        v73 = v63;
        v74 = v65;
        v78 = v70;
        v75 = v31;
        v76 = v32;
        v110 = &v81;
        v111 = 2LL;
        v112 = StringRawBuffer;
        v113 = 2 * (unsigned __int16)length;
        v114 = 0;
        v108 = &v71;
        v109 = 4LL;
        v106 = &v72;
        v107 = 4LL;
        v104 = &v73;
        v105 = 4LL;
        v102 = &v74;
        v103 = 4LL;
        v100 = &v78;
        v101 = 8LL;
        v98 = &v75;
        v99 = 4LL;
        v96 = &v76;
        v97 = 4LL;
        if ( v23 )
        {
          v34 = -1LL;
          do
            ++v34;
          while ( v23[v34] );
          v35 = 2 * v34 + 2;
        }
        else
        {
          v23 = &word_1800515C0;
          v35 = 2;
        }
        v93 = v23;
        v94 = v35;
        v95 = 0;
        if ( v25 )
        {
          v36 = -1LL;
          do
            ++v36;
          while ( v25[v36] );
          v37 = 2 * v36 + 2;
        }
        else
        {
          v25 = &word_1800515C0;
          v37 = 2;
        }
        v90 = v25;
        v91 = v37;
        v92 = 0;
        if ( v24 )
        {
          v38 = -1LL;
          do
            ++v38;
          while ( v24[v38] );
          v39 = 2 * v38 + 2;
        }
        else
        {
          v24 = &word_1800515C0;
          v39 = 2;
        }
        v87 = v24;
        v88 = v39;
        v89 = 0;
        if ( v33 )
        {
          v40 = -1LL;
          do
            ++v40;
          while ( v33[v40] );
          v41 = 2 * v40 + 2;
        }
        else
        {
          v33 = &word_1800515C0;
          v41 = 2;
        }
        v84 = v33;
        v85 = v41;
        v86 = 0;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_18005A000,
          (unsigned __int8 *)dword_180053559,
          0LL,
          0LL,
          0xFu,
          &v83);
      }
      v42 = v22[6];
      if ( ((*(_DWORD *)(v42 + 32) >> 7) & 1) != *((_BYTE *)this + 96) )
      {
        LODWORD(v62) = *((unsigned __int8 *)this + 96);
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 8) + 104LL))(
                *((_QWORD *)this + 8),
                &v66[1],
                17LL,
                &v62,
                4);
        v3 = v43;
        if ( v43 < 0 )
        {
          v8 = (unsigned int)v43;
          v5 = 804LL;
          goto LABEL_12;
        }
        *(_DWORD *)(v22[6] + 32) ^= (*(_DWORD *)(v22[6] + 32) ^ (*((unsigned __int8 *)this + 96) << 7)) & 0x80;
        v42 = v22[6];
      }
      if ( ((*(_DWORD *)(v42 + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
      {
        LODWORD(v62) = *((_BYTE *)this + 160) == 0;
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64 *, int))(**((_QWORD **)this + 8) + 104LL))(
                *((_QWORD *)this + 8),
                &v66[1],
                21LL,
                &v62,
                4);
        v3 = v44;
        if ( v44 < 0 )
        {
          v8 = (unsigned int)v44;
          v5 = 813LL;
          goto LABEL_12;
        }
        *(_DWORD *)(v22[6] + 32) = *(_DWORD *)(v22[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
      }
      v45 = *((_QWORD *)this + 8);
      *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v45 + 72LL);
      if ( *((_QWORD *)this + 18) )
      {
        v47 = v46(v45, &v66[1], 18LL, &v70, 8);
        v3 = v47;
        if ( v47 < 0 )
        {
          v8 = (unsigned int)v47;
          v5 = 820LL;
          goto LABEL_12;
        }
      }
      else
      {
        v48 = v46(v45, &v66[1], 18LL, 0LL, 0);
        v3 = v48;
        if ( v48 < 0 )
        {
          v8 = (unsigned int)v48;
          v5 = 824LL;
          goto LABEL_12;
        }
      }
      v49 = *((_QWORD *)this + 8);
      *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
      v50 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v49 + 72LL);
      if ( *((_QWORD *)this + 17) )
      {
        v51 = v50(v49, &v66[1], 20LL, &v69, 4);
        v3 = v51;
        if ( v51 < 0 )
        {
          v8 = (unsigned int)v51;
          v5 = 830LL;
          goto LABEL_12;
        }
      }
      else
      {
        v52 = v50(v49, &v66[1], 20LL, 0LL, 0);
        v3 = v52;
        if ( v52 < 0 )
        {
          v8 = (unsigned int)v52;
          v5 = 834LL;
          goto LABEL_12;
        }
      }
      if ( *((_QWORD *)this + 14) )
      {
        v53 = *((_QWORD *)this + 8);
        LODWORD(v62) = 0;
        if ( (unsigned __int8)v63 + (unsigned __int8)v67 + (unsigned __int8)v64 != 100 )
        {
          v61 = 397LL;
          goto LABEL_114;
        }
        if ( (unsigned __int8)v65 > 0x64u )
        {
          v61 = 402LL;
LABEL_114:
          v3 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v61,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)0x80070057LL);
LABEL_115:
          v5 = 847LL;
          goto LABEL_11;
        }
        LODWORD(v62) = (unsigned __int8)v67 | (((unsigned __int8)v64 | (((unsigned __int8)v63 | ((unsigned __int8)v65 << 8)) << 8)) << 8);
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        v54 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v53 + 72LL))(
                v53,
                &v66[1],
                19LL,
                &v62,
                4);
        v3 = v54;
        if ( v54 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x197,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
            (const char *)(unsigned int)v54);
        if ( v3 < 0 )
          goto LABEL_115;
      }
      else
      {
        *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
        v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**((_QWORD **)this + 8) + 72LL))(
                *((_QWORD *)this + 8),
                &v66[1],
                19LL);
        v3 = v55;
        if ( v55 < 0 )
        {
          v8 = (unsigned int)v55;
          v5 = 851LL;
          goto LABEL_12;
        }
      }
      v56 = *((_QWORD *)this + 13);
      v62 = v56;
      if ( v56 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
      *(_OWORD *)&v66[1] = *((_OWORD *)v22 + 2);
      v57 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v66[1], &v62);
      v3 = v57;
      if ( v57 < 0 )
      {
        v8 = (unsigned int)v57;
        v5 = 855LL;
        goto LABEL_12;
      }
      v58 = (__int64 **)v22[2];
      if ( *((_BYTE *)v58 + 25) )
      {
        for ( i = (__int64 *)v22[1]; !*((_BYTE *)i + 25) && v22 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v22 = i;
        v22 = i;
      }
      else
      {
        v22 = (__int64 *)v22[2];
        for ( j = *v58; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v22 = j;
      }
    }
    v3 = 0;
    goto LABEL_13;
  }
  v5 = 711LL;
LABEL_10:
  v3 = -2147024809;
LABEL_11:
  v8 = (unsigned int)v3;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v8);
LABEL_13:
  WindowsDeleteString(v4);
  v2 = v79;
LABEL_14:
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
