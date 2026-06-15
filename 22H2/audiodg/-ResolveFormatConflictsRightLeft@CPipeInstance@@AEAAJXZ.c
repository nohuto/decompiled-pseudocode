/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006070
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B8B0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140002140 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BD0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002BF8 (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140002C20 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ??1?$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ @ 0x140003220 (--1-$ComPtr@VCCPAudioHistoryControl@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E78 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009B50 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E30 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA60 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000C6B0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FC90 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14000FE48 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140010914 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140044778 (WPP_SF_q.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400463A8 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@@Z @ 0x140047270 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140047788 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400478A4 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     WPP_SF__guid_ @ 0x140047C10 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x140047C4C (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=67
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(
        CPipeInstance *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        __int64 a21,
        int a22,
        int a23,
        int a24,
        __int64 a25)
{
  CPipeInstance *v25; // rbx
  _QWORD *Next; // rax
  int v27; // r8d
  HRESULT Converter; // r15d
  unsigned __int16 *v29; // rsi
  __int64 v30; // rdi
  struct tWAVEFORMATEX *v31; // rax
  struct tWAVEFORMATEX *v32; // rbx
  _QWORD *v33; // rsi
  CPipeInstance *v34; // rcx
  struct CProcessNode **Head; // rax
  struct CProcessNode *v36; // rdi
  _QWORD *v37; // r13
  unsigned int *v38; // r14
  char v39; // bl
  __int64 v40; // rdi
  int v41; // eax
  struct IUnknown *v42; // rcx
  struct IUnknown *v43; // rcx
  int v44; // eax
  struct IUnknown *v45; // rcx
  HRESULT v46; // eax
  int v47; // eax
  struct IUnknown *v48; // rcx
  __int64 v49; // rax
  struct IUnknown *v50; // rcx
  _QWORD *v51; // rcx
  __int64 *v53; // rdx
  int v54; // ecx
  int v55; // r8d
  int v56; // r9d
  __int128 *v57; // rbx
  unsigned int v58; // eax
  __int128 *v59; // rbx
  unsigned int v60; // ebx
  __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 v63; // rax
  unsigned int v64; // ebx
  __int64 v65; // rax
  struct IUnknown *v66; // rdi
  __int64 v67; // rbx
  struct IUnknown *v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  struct IUnknown *v71; // rdi
  const struct tWAVEFORMATEX *v72; // rbx
  const struct tWAVEFORMATEX *v73; // rax
  int v74; // eax
  const char *v75; // rax
  __int64 v76; // [rsp+0h] [rbp-1A8h] BYREF
  LPVOID *ppv; // [rsp+20h] [rbp-188h]
  struct IAudioSystemEffects2 **v78; // [rsp+30h] [rbp-178h]
  CPipeInstance *v79; // [rsp+40h] [rbp-168h]
  char v80; // [rsp+48h] [rbp-160h]
  char v81; // [rsp+49h] [rbp-15Fh]
  struct IUnknown *v82; // [rsp+50h] [rbp-158h] BYREF
  struct IUnknown *v83; // [rsp+58h] [rbp-150h] BYREF
  struct CProcessNode *v84; // [rsp+60h] [rbp-148h]
  struct IUnknown *v85; // [rsp+68h] [rbp-140h] BYREF
  _QWORD *v86; // [rsp+70h] [rbp-138h] BYREF
  void (__fastcall ***v87)(_QWORD, __int64); // [rsp+78h] [rbp-130h] BYREF
  struct CProcessNode *v88; // [rsp+80h] [rbp-128h] BYREF
  struct IUnknown *v89; // [rsp+88h] [rbp-120h] BYREF
  unsigned int v90; // [rsp+90h] [rbp-118h]
  struct IMMDevice *v91; // [rsp+98h] [rbp-110h] BYREF
  _QWORD v92[2]; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v93; // [rsp+B0h] [rbp-F8h] BYREF
  int v94; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-E8h]
  __int64 v96; // [rsp+C8h] [rbp-E0h] BYREF
  int v97; // [rsp+D0h] [rbp-D8h] BYREF
  struct IAudioMediaType *v98; // [rsp+D8h] [rbp-D0h] BYREF
  LPVOID v99[2]; // [rsp+E0h] [rbp-C8h] BYREF
  _QWORD v100[2]; // [rsp+F0h] [rbp-B8h] BYREF
  void (__fastcall ***v101)(_QWORD, __int64); // [rsp+100h] [rbp-A8h] BYREF
  __int64 v102; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v103; // [rsp+110h] [rbp-98h] BYREF
  struct _GUID v104; // [rsp+120h] [rbp-88h] BYREF
  ATL::CAtlException *v105; // [rsp+148h] [rbp-60h] BYREF
  __int128 v106; // [rsp+150h] [rbp-58h] BYREF
  struct _GUID v107; // [rsp+160h] [rbp-48h] BYREF

  LODWORD(v25) = (_DWORD)this;
  v79 = this;
  v92[1] = this;
  v96 = 0LL;
  v80 = 0;
  v90 = 1;
  v82 = 0LL;
  v99[0] = 0LL;
  v89 = 0LL;
  v98 = 0LL;
  v86 = (_QWORD *)*((_QWORD *)this + 2);
  Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v86);
  Converter = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)*Next + 16LL))(*Next, &v89);
  if ( Converter < 0 )
    goto LABEL_68;
  v29 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IUnknown *))v89->lpVtbl[1].Release)(v89);
  v30 = v29[8];
  v31 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v30 + 18);
  v32 = v31;
  if ( !v31 )
  {
    Converter = -2147024882;
    LODWORD(v25) = (_DWORD)v79;
    goto LABEL_68;
  }
  memcpy_0(v31, v29, v30 + 18);
  ConvertPCMWfxToIEEEFloat(v32);
  Converter = CAudioMediaType::Create(v32, (unsigned int)v32->cbSize + 18, &v98, 0.0, 0);
  CoTaskMemFree(v32);
  v25 = v79;
  if ( Converter < 0 )
    goto LABEL_68;
  v33 = (_QWORD *)*((_QWORD *)v79 + 3);
  v86 = v33;
  v34 = *(CPipeInstance **)v79;
  if ( *(_QWORD *)v79 )
  {
    if ( *((_DWORD *)v79 + 30) && !*((_DWORD *)v34 + 53) )
    {
      v88 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(v34, &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60, &v88, 0LL, 0LL);
      v36 = v88;
      v84 = v88;
      if ( v88 )
        goto LABEL_7;
      v88 = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)v79,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        &v88,
        0LL,
        0LL);
      v36 = v88;
      v84 = v88;
      if ( v88 )
        goto LABEL_7;
      v34 = *(CPipeInstance **)v79;
    }
    Head = (struct CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)v34 + 2);
  }
  else
  {
    Head = (struct CProcessNode **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(
                                     0LL,
                                     (__int64 *)&v86);
    v33 = v86;
  }
  v36 = *Head;
  v84 = *Head;
LABEL_7:
  Converter = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IUnknown **))(*(_QWORD *)v36 + 8LL))(v36, &v82);
  if ( Converter < 0 )
    goto LABEL_68;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, v79);
  }
  while ( 1 )
  {
    if ( !v33 )
    {
      (*(void (__fastcall **)(struct CProcessNode *, struct IUnknown *))(*(_QWORD *)v36 + 24LL))(v36, v82);
      goto LABEL_67;
    }
    v83 = 0LL;
    v85 = 0LL;
    v37 = v33;
    v99[1] = v33;
    v33 = (_QWORD *)v33[1];
    v86 = v33;
    v38 = (unsigned int *)v37[2];
    v100[1] = v38;
    v39 = 0;
    if ( v38[10] != 2 )
      break;
    v40 = *((_QWORD *)v38 + 4);
    v95 = v40;
    if ( !*(_QWORD *)(v40 + 40) )
    {
      v41 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v79 + 30) + 24LL))(
              *((_QWORD *)v79 + 30),
              v40 + 8,
              *(unsigned int *)(v40 + 4),
              *((_QWORD *)v79 + 24),
              v40 + 40);
      Converter = v41;
      if ( v41 < 0 )
      {
        if ( v41 == -2147024882 )
        {
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( v83 )
            ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
          v25 = v79;
          goto LABEL_67;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
        {
          v57 = (__int128 *)(v40 + 8);
        }
        else
        {
          v57 = (__int128 *)(v40 + 8);
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              22LL,
              &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
              v40 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v79 + 16, v37);
        v58 = *(_DWORD *)(v40 + 4);
        v36 = v84;
        if ( v58 )
        {
          v80 = 1;
          v90 = v58;
          v106 = *v57;
        }
        goto LABEL_102;
      }
      if ( !*(_DWORD *)(v40 + 4) )
      {
LABEL_15:
        Converter = (*(__int64 (__fastcall **)(unsigned int *, struct IUnknown *, struct IUnknown **, _QWORD))(*(_QWORD *)v38 + 48LL))(
                      v38,
                      v82,
                      &v83,
                      0LL);
        if ( Converter < 0 )
        {
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( v83 )
            ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
          v25 = v79;
          goto LABEL_67;
        }
LABEL_16:
        v36 = v84;
LABEL_17:
        if ( Converter != 1 )
        {
          if ( !Converter )
          {
            (*(void (__fastcall **)(struct CProcessNode *, struct IUnknown *))(*(_QWORD *)v36 + 24LL))(v36, v82);
            (*(void (__fastcall **)(unsigned int *, struct IUnknown *))(*(_QWORD *)v38 + 32LL))(v38, v82);
            if ( v39 )
            {
              v49 = *((_QWORD *)v38 + 4);
              if ( *(_DWORD *)(v49 + 4) )
              {
                if ( *(_DWORD *)(v49 + 52) )
                {
                  v50 = v82;
                  if ( v82 )
                  {
                    v82 = 0LL;
                    ((void (__fastcall *)(struct IUnknown *))v50->lpVtbl->Release)(v50);
                  }
                  if ( v82 != v89 )
                    ATL::AtlComPtrAssign(&v82, v89);
                }
              }
            }
          }
          goto LABEL_20;
        }
LABEL_30:
        v44 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IUnknown *, struct IUnknown **, _QWORD))(*(_QWORD *)v36 + 40LL))(
                v36,
                v83,
                &v85,
                0LL);
        Converter = v44;
        if ( v44 < 0 )
        {
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( v83 )
            ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
          v25 = v79;
          goto LABEL_67;
        }
        if ( v44 )
        {
          if ( v44 != 1 )
            goto LABEL_20;
          v45 = v82;
          if ( v82 )
          {
            v82 = 0LL;
            ((void (__fastcall *)(struct IUnknown *))v45->lpVtbl->Release)(v45);
          }
          if ( v82 != v85 )
            ATL::AtlComPtrAssign(&v82, v85);
        }
        else
        {
          v48 = v82;
          if ( v82 )
          {
            v82 = 0LL;
            ((void (__fastcall *)(struct IUnknown *))v48->lpVtbl->Release)(v48);
            v48 = v82;
          }
          if ( v48 != v83 )
          {
            ATL::AtlComPtrAssign(&v82, v83);
            v48 = v82;
          }
          (*(void (__fastcall **)(struct CProcessNode *, struct IUnknown *))(*(_QWORD *)v36 + 24LL))(v36, v48);
          (*(void (__fastcall **)(unsigned int *, struct IUnknown *))(*(_QWORD *)v38 + 32LL))(v38, v82);
          if ( v39 )
          {
            v70 = *((_QWORD *)v38 + 4);
            if ( *(_DWORD *)(v70 + 4) )
            {
              if ( *(_DWORD *)(v70 + 52) )
              {
                Microsoft::WRL::ComPtr<CCPAudioHistoryControl>::~ComPtr<CCPAudioHistoryControl>(&v82);
                ATL::CComPtr<IAudioMediaType>::operator=((__int64 *)&v82, &v89);
              }
            }
          }
LABEL_20:
          v25 = v79;
          if ( (*((_BYTE *)v79 + 136) & 8) == 0 )
            goto LABEL_21;
          v71 = v82;
          v72 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v98->lpVtbl->GetAudioFormat)(v98);
          v73 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v71->lpVtbl[1].Release)(v71);
          if ( !(unsigned int)CompareWaveFormat(v73, v72) )
          {
            v25 = v79;
LABEL_21:
            v36 = (struct CProcessNode *)v38;
            v84 = (struct CProcessNode *)v38;
            goto LABEL_22;
          }
          if ( !v83 )
            ATL::CComPtr<IAudioMediaType>::operator=((__int64 *)&v83, &v89);
          v36 = v84;
        }
        v25 = v79;
        Converter = CPipeInstance::FindConverter(
                      v79,
                      (struct IAudioMediaType *)v82,
                      (struct IAudioMediaType *)v83,
                      &v97,
                      &v107);
        if ( Converter < 0 )
        {
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( !v83 )
            goto LABEL_67;
          goto LABEL_224;
        }
        v104 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v78 = (struct IAudioSystemEffects2 **)&v96;
        Converter = CAPOProcessNode::CreateAPOProcessNode(&v107, 0LL, v38[6], (unsigned int)v97, 0, &v104);
        if ( Converter < 0 )
        {
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( !v83 )
            goto LABEL_67;
          goto LABEL_224;
        }
        Converter = 0;
        try
        {
          v103 = v96;
          v33 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                            (char *)v79 + 16,
                            v37,
                            &v103);
          v86 = v33;
        }
        catch ( ATL::CAtlException *v105 )
        {
          v53 = &v76;
          if ( *(_DWORD *)v105 == -1073741571 )
            _o__resetstkoflw();
          return sub_14003134C(
                   v54,
                   (_DWORD)v53,
                   v55,
                   v56,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9,
                   a10,
                   a11,
                   a12,
                   a13,
                   a14,
                   a15,
                   a16,
                   a17,
                   a18,
                   a19,
                   a20,
                   a21,
                   a22,
                   a23,
                   a24,
                   a25);
        }
        v96 = 0LL;
        goto LABEL_22;
      }
      v91 = 0LL;
      Converter = CoCreateInstance(
                    &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                    0LL,
                    0x17u,
                    &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                    v99);
      if ( Converter < 0 )
      {
        if ( v91 )
          ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
        if ( v85 )
          ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
        if ( v83 )
          ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
        v25 = v79;
        goto LABEL_67;
      }
      Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v99[0] + 40LL))(
                    v99[0],
                    *((_QWORD *)v79 + 24),
                    &v91);
      if ( Converter < 0 )
      {
        if ( v91 )
          ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
        if ( v85 )
          ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
        if ( v83 )
          ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
        v25 = v79;
        goto LABEL_67;
      }
      v104 = *(struct _GUID *)(v40 + 24);
      v47 = InitializeSystemEffectsInterface(
              v91,
              *(struct IAudioProcessingObject **)(v40 + 40),
              (struct _GUID *)(v40 + 8),
              &v104,
              (int)ppv,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v79 + 32),
              v78);
      Converter = v47;
      if ( v47 < 0 )
      {
        if ( v47 == -2147024882 )
        {
          if ( v91 )
            ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( v83 )
            ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
          v25 = v79;
          goto LABEL_67;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
        {
          v59 = (__int128 *)(v40 + 8);
        }
        else
        {
          v59 = (__int128 *)(v40 + 8);
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              23LL,
              &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
              v40 + 8);
        }
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v79 + 30) + 32LL))(
               *((_QWORD *)v79 + 30),
               *(_QWORD *)(v40 + 40)) < 0 )
        {
          if ( v91 )
            ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
          if ( v85 )
            ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
          if ( v83 )
            ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
          v25 = v79;
          goto LABEL_67;
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v79 + 16, v37);
        v80 = 1;
        v90 = *(_DWORD *)(v40 + 4);
        v106 = *v59;
        if ( v91 )
          ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
        v36 = v84;
LABEL_102:
        v25 = v79;
        goto LABEL_22;
      }
      if ( v91 )
        ((void (__fastcall *)(struct IMMDevice *))v91->lpVtbl->Release)(v91);
    }
    if ( !*(_DWORD *)(v40 + 4) || !*(_DWORD *)(v40 + 52) )
      goto LABEL_15;
    v39 = 1;
    v81 = 1;
    v46 = (*(__int64 (__fastcall **)(unsigned int *, struct IUnknown *, struct IUnknown **, struct IUnknown *))(*(_QWORD *)v38 + 48LL))(
            v38,
            v82,
            &v83,
            v89);
    Converter = v46;
    if ( v46 == -2005073917 )
    {
      if ( *((_DWORD *)v84 + 6) != 1 || !*((_DWORD *)v79 + 78) )
        goto LABEL_181;
      v93 = 0LL;
      Converter = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown *, __int64 *))(**(_QWORD **)(v40 + 40)
                                                                                          + 64LL))(
                    *(_QWORD *)(v40 + 40),
                    0LL,
                    v82,
                    &v93);
      if ( !Converter )
      {
        v87 = 0LL;
        v60 = *((_DWORD *)v84 + 6);
        v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 40LL))(v93);
        Converter = CProcessNode::CreateDummyProcessNode(v60, v61, &v87);
        if ( Converter >= 0 )
        {
          v100[0] = v87;
          v33 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                            (char *)v79 + 16,
                            v37,
                            v100);
          v86 = v33;
          v87 = 0LL;
          v62 = *((_DWORD *)v84 + 6);
          v63 = ((__int64 (__fastcall *)(struct IUnknown *))v89->lpVtbl[1].Release)(v89);
          Converter = CProcessNode::CreateDummyProcessNode(v62, v63, &v87);
          if ( Converter >= 0 )
          {
            Converter = 0;
            v101 = v87;
            v25 = v79;
            v86 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                              (char *)v79 + 16,
                              v33,
                              &v101);
            v87 = 0LL;
            *((_DWORD *)v79 + 34) |= 6u;
            *(_DWORD *)(v40 + 52) = 0;
            v33 = v37;
            v87 = 0LL;
            if ( v93 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
            v36 = v84;
            goto LABEL_22;
          }
        }
        if ( v87 )
          (**v87)(v87, 1LL);
        v87 = 0LL;
        v39 = v81;
      }
      if ( v93 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
    }
    else if ( v46 == 1 )
    {
      if ( *((_DWORD *)v84 + 6) != 1 )
      {
        v36 = v84;
        goto LABEL_30;
      }
      if ( !*((_DWORD *)v79 + 78) )
      {
        v36 = v84;
        goto LABEL_30;
      }
      ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
        &v88,
        *(_QWORD *)(v40 + 40));
      v94 = 0;
      if ( v88
        && (*(int (__fastcall **)(struct CProcessNode *, int *))(*(_QWORD *)v88 + 24LL))(v88, &v94) >= 0
        && (v94 & 1) != 0 )
      {
        v92[0] = 0LL;
        v64 = v38[6];
        v65 = ((__int64 (__fastcall *)(struct IUnknown *))v83->lpVtbl[1].Release)(v83);
        Converter = CProcessNode::CreateDummyProcessNode(v64, v65, v92);
        if ( Converter >= 0 )
        {
          Converter = 0;
          v102 = v92[0];
          v25 = v79;
          v33 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                            (char *)v79 + 16,
                            v37,
                            &v102);
          v86 = v33;
          v36 = v84;
          v92[0] = 0LL;
          *((_DWORD *)v79 + 34) |= 6u;
          v92[0] = 0LL;
          if ( v88 )
            (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v88 + 16LL))(v88);
          goto LABEL_22;
        }
        if ( v92[0] )
          (**(void (__fastcall ***)(_QWORD, __int64))v92[0])(v92[0], 1LL);
        v92[0] = 0LL;
      }
      else
      {
        v66 = v82;
        v67 = ((__int64 (__fastcall *)(struct IUnknown *))v89->lpVtbl[1].Release)(v89);
        if ( *(_WORD *)(((__int64 (__fastcall *)(struct IUnknown *))v66->lpVtbl[1].Release)(v66) + 2) != *(_WORD *)(v67 + 2)
          || (v68 = v82,
              v69 = ((__int64 (__fastcall *)(struct IUnknown *))v89->lpVtbl[1].Release)(v89),
              *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))v68->lpVtbl[1].Release)(v68) + 4) != *(_DWORD *)(v69 + 4)) )
        {
          v25 = v79;
          if ( (*((_BYTE *)v79 + 136) & 6) == 0 )
          {
            *(_DWORD *)(v95 + 52) = 0;
            v33 = v37;
            if ( v88 )
              (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v88 + 16LL))(v88);
            v36 = v84;
            goto LABEL_22;
          }
        }
        v40 = v95;
      }
      if ( v88 )
        (*(void (__fastcall **)(struct CProcessNode *))(*(_QWORD *)v88 + 16LL))(v88);
      v39 = v81;
    }
    if ( Converter >= 0 )
      goto LABEL_16;
    if ( Converter == -2147024882 )
    {
      if ( v85 )
        ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
      if ( v83 )
        ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
      v25 = v79;
      goto LABEL_67;
    }
LABEL_181:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        24LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        v40 + 8);
    }
    v25 = v79;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v79 + 30) + 32LL))(
           *((_QWORD *)v79 + 30),
           *(_QWORD *)(v40 + 40)) < 0 )
    {
      if ( v85 )
        ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
      if ( !v83 )
        goto LABEL_67;
LABEL_224:
      ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
      goto LABEL_67;
    }
    if ( Converter != -2005073917 )
    {
      v80 = 1;
      v90 = *(_DWORD *)(v40 + 4);
      v106 = *(_OWORD *)(v40 + 8);
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt((char *)v79 + 16, v37);
    v36 = v84;
LABEL_22:
    v42 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v42->lpVtbl->Release)(v42);
    }
    v43 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v43->lpVtbl->Release)(v43);
    }
    if ( v85 )
      ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
    if ( v83 )
      ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
  }
  Converter = (*(__int64 (__fastcall **)(unsigned int *, struct IUnknown *, struct IUnknown **, _QWORD))(*(_QWORD *)v38 + 48LL))(
                v38,
                v82,
                &v83,
                0LL);
  if ( Converter >= 0 )
    goto LABEL_17;
  if ( v85 )
    ((void (__fastcall *)(struct IUnknown *))v85->lpVtbl->Release)(v85);
  if ( v83 )
    ((void (__fastcall *)(struct IUnknown *))v83->lpVtbl->Release)(v83);
  v25 = v79;
LABEL_67:
  if ( !v80
    || (v74 = TrackSystemEffectBehavior(*((_QWORD *)v25 + 24), v90, 0LL, 0LL, &v106, LODWORD(FLOAT_1_0)), v74 >= 0) )
  {
LABEL_68:
    v51 = WPP_GLOBAL_Control;
    goto LABEL_69;
  }
  v51 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v74);
      goto LABEL_68;
    }
LABEL_69:
    if ( v51 != &WPP_GLOBAL_Control && (*((_DWORD *)v51 + 7) & 0x20000) != 0 && *((_BYTE *)v51 + 25) >= 4u )
    {
      v75 = "SUCCEEDED";
      if ( Converter < 0 )
        v75 = "FAILED";
      WPP_SF_qs(v51[2], 26, v27, (_DWORD)v25, (__int64)v75);
      v51 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v51 != &WPP_GLOBAL_Control && (*((_DWORD *)v51 + 7) & 0x20000) != 0 && *((_BYTE *)v51 + 25) >= 2u )
      WPP_SF_D(v51[2], 27LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x671u, Converter);
  }
  if ( v98 )
    ((void (__fastcall *)(struct IAudioMediaType *))v98->lpVtbl->Release)(v98);
  if ( v89 )
    ((void (__fastcall *)(struct IUnknown *))v89->lpVtbl->Release)(v89);
  if ( v99[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v99[0] + 16LL))(v99[0]);
  if ( v82 )
    ((void (__fastcall *)(struct IUnknown *))v82->lpVtbl->Release)(v82);
  return (unsigned int)Converter;
}
