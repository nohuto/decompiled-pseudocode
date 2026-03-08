/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18004FB10 (-ProcessBatches@CComposition@@IEAAJXZ.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18004FD5C (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ClearD2DCaches@CDeviceManager@@IEAA_NK@Z @ 0x180050154 (-ClearD2DCaches@CDeviceManager@@IEAA_NK@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180098AA0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009A318 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800B99A0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800EAB28 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180129D14 (McTemplateU0q_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x1801B5050 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801B9848 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801BA3FC (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801E0F78 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180213250 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18021504C (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1802151A8 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180250444 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180271E8C (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CComposition::PreRender(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // r13
  CComposition *v2; // rdi
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // r14d
  __int64 v6; // rsi
  unsigned int i; // ebx
  __int64 ***v8; // rsi
  __int64 **j; // rbx
  unsigned __int64 v10; // rcx
  HANDLE CurrentThread; // rax
  BOOL v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  HANDLE v16; // rax
  BOOL ThreadCycleTime; // eax
  int v18; // eax
  unsigned int v19; // edx
  CDeviceManager *v20; // rcx
  __int64 v21; // rdx
  char v22; // si
  __int64 v23; // r8
  _QWORD *v24; // rbx
  CD3DResource *v25; // rcx
  CD3DDevice *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rbx
  _QWORD *v30; // r15
  _QWORD *v31; // rsi
  __int64 *v32; // rsi
  __int64 *v33; // rbx
  unsigned int v34; // esi
  int v35; // ebx
  __int64 v36; // r8
  unsigned __int64 v37; // rcx
  HANDLE v38; // rax
  BOOL v39; // eax
  _QWORD *v40; // rsi
  _QWORD *m; // rbx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // ebx
  __int64 v47; // rbx
  __int64 v48; // rbx
  __int64 v49; // r15
  _QWORD *v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rsi
  void *v53; // rbx
  __int64 v54; // rax
  CResource *v55; // rbx
  _QWORD *v57; // r15
  __int64 v58; // r13
  __int64 n; // r12
  unsigned __int8 (__fastcall ***v60)(_QWORD, __int64); // rcx
  __int64 v61; // rcx
  __int64 *v62; // r13
  int v63; // r15d
  __int64 v64; // r12
  __int64 *v65; // rbx
  __int64 v66; // rdx
  int v67; // eax
  HANDLE ProcessHeap; // rax
  __int64 v69; // rsi
  int v70; // ebx
  int v71; // eax
  int v72; // ebx
  __int64 v73; // rax
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // r13
  _QWORD *v77; // r12
  _QWORD *v78; // rdi
  __int64 v79; // r12
  _DWORD *v80; // r15
  int v81; // r8d
  int v82; // r9d
  unsigned int v83; // ecx
  __int64 v84; // r9
  unsigned int k; // r8d
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r15
  __int64 v89; // rcx
  unsigned int v90; // ecx
  __int64 v91; // r8
  __int64 v92; // rbx
  _QWORD *v93; // r15
  _QWORD *v94; // rsi
  __int64 ii; // r12
  unsigned int v96; // [rsp+20h] [rbp-E0h]
  unsigned __int64 CycleTime; // [rsp+40h] [rbp-C0h] BYREF
  CComposition *v98; // [rsp+48h] [rbp-B8h] BYREF
  int v99; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v100; // [rsp+58h] [rbp-A8h] BYREF
  CResource *v101; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v102[4]; // [rsp+70h] [rbp-90h] BYREF
  int v103; // [rsp+74h] [rbp-8Ch]
  __int64 v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  __int64 v106; // [rsp+8Ch] [rbp-74h]
  __int64 v107; // [rsp+94h] [rbp-6Ch]
  void *v108; // [rsp+A0h] [rbp-60h]
  int v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  __int64 v111; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v112[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v113[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v114[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v115[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v116[16]; // [rsp+110h] [rbp+10h] BYREF

  v1 = this + 84;
  v98 = (CComposition *)this;
  v2 = (CComposition *)this;
  v100 = this + 84;
  v101 = 0LL;
  AcquireSRWLockExclusive(this + 84);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  v3 = CComposition::BeginCompositionFrame(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v96 = 3208;
    goto LABEL_162;
  }
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = CComposition::ProcessBatches(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v96 = 3214;
LABEL_162:
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180353680, 3u, v3, v96, 0LL);
    goto LABEL_55;
  }
  v6 = *((_QWORD *)v2 + 53);
  for ( i = 0; i < *(_DWORD *)(v6 + 288); ++i )
  {
    v73 = *(_QWORD *)(v6 + 264);
    if ( *(_BYTE *)(*(_QWORD *)(v73 + 8LL * i) + 320LL) )
      InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v73 + 8LL * i) + 200LL));
  }
  v8 = *(__int64 ****)(v6 + 600);
  for ( j = *v8; j != (__int64 **)v8; j = (__int64 **)*j )
    (*(void (__fastcall **)(__int64 *))*j[2])(j[2]);
  v10 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v12 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v10 = CycleTime;
    if ( v12 )
      qword_1803E2A50 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v10;
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 28) + 32LL))(*((_QWORD *)v2 + 28));
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD1Eu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v74, &dword_180353680, 3u, v5, 0xC9Eu, 0LL);
    goto LABEL_55;
  }
  v15 = 0LL;
  v112[0] = 0LL;
  if ( ::CycleTime )
  {
    v16 = GetCurrentThread();
    ThreadCycleTime = QueryThreadCycleTime(v16, v112);
    v15 = v112[0];
    if ( ThreadCycleTime )
      qword_1803E2A58 += v112[0] - ::CycleTime;
  }
  ::CycleTime = v15;
  if ( g_pDebugVisual && (int)CDebugVisualImage::Create(v2, g_pDebugVisual, &v101) >= 0 )
    *((_BYTE *)v2 + 1280) = 1;
  v18 = CRenderTargetManager::CheckOcclusionState(*((CRenderTargetManager **)v2 + 27));
  v5 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, &dword_180353680, 3u, v18, 0xCACu, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start,
      2000LL);
  v22 = CDeviceManager::ClearD2DCaches(v20, v19);
  if ( v22 )
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 + 83) + 8LL))(*((_QWORD *)v2 + 83), 2000LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
      v22 != 0);
  v24 = (_QWORD *)*((_QWORD *)v2 + 36);
  if ( (__int64)(v24[6] - v24[5]) >> 3 )
  {
    CSceneResourceManager::EnsureSceneCompositor(*((CSceneResourceManager **)v2 + 36));
  }
  else
  {
    v25 = (CD3DResource *)v24[3];
    if ( v25 )
    {
      CD3DResource::RemoveResourceNotifier(v25, *((const struct IDeviceResourceNotify **)v2 + 36));
      v75 = v24[3];
      if ( v75 )
      {
        v76 = *(_QWORD *)(v75 + 96);
        if ( !v76 || (v77 = (_QWORD *)v24[5], v77 == (_QWORD *)v24[6]) )
        {
          v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
        }
        else
        {
          v78 = (_QWORD *)v24[6];
          do
          {
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v77 + 8LL))(*v77, v76);
            ++v77;
          }
          while ( v77 != v78 );
          v2 = v98;
          v1 = v100;
        }
      }
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v24 + 3);
    }
    v26 = (CD3DDevice *)v24[4];
    v24[4] = 0LL;
    if ( v26 )
      CD3DDevice::Release(v26);
  }
  v27 = *((_QWORD *)v2 + 33);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = *((_QWORD *)v2 + 27);
  if ( *(_BYTE *)(v28 + 581) && !*(_BYTE *)(v28 + 582) )
  {
    dword_1803E2A10 |= 0x200u;
    v69 = *((_QWORD *)v2 + 53);
    if ( *(_QWORD *)(v69 + 544) )
      CExpressionManager::UpdateExpressions(
        *((CExpressionManager **)v2 + 53),
        *((_QWORD *)v2 + 76),
        *((_QWORD *)v2 + 62));
    v70 = *(_DWORD *)(v69 + 256) - 1;
    if ( v70 >= 0 )
    {
      v79 = 16LL * v70;
      do
      {
        v80 = *(_DWORD **)(*(_QWORD *)(v69 + 232) + v79 + 8);
        if ( !CNotificationResource::ShouldNotify((CNotificationResource *)v80)
          && !CPtrArrayBase::GetCount((CPtrArrayBase *)(v80 + 6)) )
        {
          if ( (unsigned int)dword_1803E07D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E07D0, 4LL) )
          {
            v99 = v80[16];
            LODWORD(v100) = CNotificationResource::GetChannelCallbackId((CNotificationResource *)v80);
            LODWORD(v98) = (*(__int64 (**)(void))(*(_QWORD *)v80 + 144LL))();
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1803E07D0,
              (unsigned int)&unk_18037D1A9,
              v81,
              v82,
              (__int64)&v98,
              (__int64)&v100,
              (__int64)&v99);
          }
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v80 + 16LL))(v80);
          v83 = *(_DWORD *)(v69 + 256);
          if ( v70 < v83 )
          {
            v84 = *(_QWORD *)(v69 + 232);
            for ( k = v70; k < v83 - 1; v83 = *(_DWORD *)(v69 + 256) )
            {
              v86 = 2LL * k;
              v87 = 2LL * ++k;
              *(_OWORD *)(v84 + 8 * v86) = *(_OWORD *)(v84 + 8 * v87);
            }
            *(_DWORD *)(v69 + 256) = v83 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, -2147024809, 0x19Cu, 0LL);
          }
        }
        v79 -= 16LL;
        --v70;
      }
      while ( v70 >= 0 );
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 28) + 48LL))(*((_QWORD *)v2 + 28))
      || *((_DWORD *)v2 + 186) )
    {
      *((_BYTE *)v2 + 1280) = 1;
    }
    goto LABEL_55;
  }
  if ( !v22 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v2 + 82) + 32LL))(
      *((_QWORD *)v2 + 82),
      2000LL,
      4LL);
  v29 = (_QWORD *)*((_QWORD *)v2 + 32);
  LOBYTE(v21) = 0;
  v30 = (_QWORD *)v29[6];
  v31 = (_QWORD *)v29[5];
  if ( v31 == v30 )
    goto LABEL_172;
  do
  {
    if ( *(_QWORD *)(*v29 + 496LL) - v31[11] < 0xAuLL )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v31 + 72LL))(*v31, 0LL, 0LL);
      LOBYTE(v21) = 1;
    }
    v31 += 13;
  }
  while ( v31 != v30 );
  if ( !(_BYTE)v21 )
  {
LABEL_172:
    v32 = (__int64 *)v29[2];
    v33 = (__int64 *)v29[3];
    if ( v32 != v33 )
    {
      while ( 1 )
      {
        v88 = *v32;
        v89 = *(_QWORD *)(*v32 + 256);
        if ( !v89
          || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 56LL))(v89, 182LL)
          || !CSynchronousSuperWetInk::IsSuperWetCompatible(*(CSynchronousSuperWetInk **)(v88 + 256)) )
        {
          goto LABEL_145;
        }
        if ( *(_DWORD *)(**(_QWORD **)(v23 + 216) + 4LL) > *(_DWORD *)(v23 + 240) )
          goto LABEL_144;
        v21 = *(_QWORD *)(*(_QWORD *)(v23 + 88) + 24LL);
        v90 = *(_DWORD *)(*(_QWORD *)v21 + 4LL);
        if ( v90 > *(_DWORD *)(v23 + 100) )
          break;
LABEL_145:
        if ( ++v32 == v33 )
          goto LABEL_34;
      }
      *(_DWORD *)(v23 + 100) = v90;
LABEL_144:
      CVisual::PropagateFlags(v88, 5LL);
      goto LABEL_145;
    }
  }
LABEL_34:
  v34 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start,
      v23,
      1LL,
      v112);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Compositor_Context,
      &UpdateAnimations_Start,
      v23,
      1LL,
      v113);
  v35 = *((_DWORD *)v2 + 178);
  while ( v35 )
  {
    v60 = *(unsigned __int8 (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)v2 + 86) + 8LL * (unsigned int)--v35);
    if ( (**v60)(v60, v21) )
      ++v34;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Stop, v34);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, "q", v23, 1LL, v114);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_PROCESS_EXPRESSIONS_Start,
        v91,
        1LL,
        v115);
  }
  CExpressionManager::UpdateExpressions(*((CExpressionManager **)v2 + 53), *((_QWORD *)v2 + 76), *((_QWORD *)v2 + 62));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_PROCESS_EXPRESSIONS_Stop,
      v36,
      1LL,
      v116);
  v37 = 0LL;
  v112[0] = 0LL;
  if ( ::CycleTime )
  {
    v38 = GetCurrentThread();
    v39 = QueryThreadCycleTime(v38, v112);
    v37 = v112[0];
    if ( v39 )
      qword_1803E2A60 += v112[0] - ::CycleTime;
  }
  ::CycleTime = v37;
  v40 = *(_QWORD **)(*((_QWORD *)v2 + 157) + 48LL);
  for ( m = (_QWORD *)*v40; m != v40; m = (_QWORD *)*m )
  {
    v57 = (_QWORD *)m[3];
    v58 = v57[19];
    for ( n = v57[18]; n != v58; n += 8LL )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
        v57 + 10,
        &CycleTime,
        n);
      if ( CycleTime != v57[11] )
      {
        *(_QWORD *)(*(_QWORD *)(CycleTime + 24) + 192LL) = 0LL;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase(v57 + 10);
      }
    }
    v57[19] = v57[18];
  }
  v2 = v98;
  v42 = (_QWORD *)*((_QWORD *)v98 + 36);
  v43 = v42[3];
  if ( v43 )
  {
    v92 = *(_QWORD *)(v43 + 96);
    if ( v92 )
    {
      v93 = (_QWORD *)v42[6];
      v94 = (_QWORD *)v42[5];
      for ( ii = *(_QWORD *)(v42[1] + 608LL); v94 != v93; ++v94 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v94 + 16LL))(*v94, v92, ii);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 96LL))(v92);
    }
  }
  v44 = CComposition::CleanTrees(v2);
  v46 = v44;
  if ( v44 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_180353680, 3u, v44, 0xCD6u, 0LL);
  if ( !v5 || v5 >= 0 && v46 < 0 )
    v5 = v46;
  v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
LABEL_55:
  v47 = *((_QWORD *)v2 + 30);
  if ( v47 )
  {
    v48 = v47 + 80;
    while ( 1 )
    {
      v49 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v48 + 24));
      v50 = *(_QWORD **)v48;
      if ( *(_QWORD *)(*(_QWORD *)v48 + 8LL) != v48 || (v51 = *v50, *(_QWORD **)(*v50 + 8LL) != v50) )
        __fastfail(3u);
      *(_QWORD *)v48 = v51;
      *(_QWORD *)(v51 + 8) = v48;
      if ( v50 != (_QWORD *)v48 )
      {
        v49 = v50[2];
        operator delete(v50, 0x18uLL);
        --*(_DWORD *)(v48 + 16);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v48 + 24));
      if ( !v49 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
  }
  if ( *((_BYTE *)v2 + 1280) )
  {
    v71 = CComposition::CleanTrees(v2);
    v72 = v71;
    if ( v71 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v45, &dword_180353680, 3u, v71, 0xCF5u, 0LL);
    if ( !v5 || v5 >= 0 && v72 < 0 )
      v5 = v72;
  }
  v52 = (__int64 *)*((_QWORD *)v2 + 167);
  v53 = 0LL;
  v107 = 0LL;
  v54 = ((__int64)v52 - *((_QWORD *)v2 + 166)) >> 3;
  v108 = 0LL;
  v109 = 0;
  v106 = 0LL;
  v103 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v111 = 0LL;
  if ( v54 )
  {
    while ( 1 )
    {
      v62 = (__int64 *)*((_QWORD *)v2 + 166);
      v63 = 0;
      v64 = *((_QWORD *)v2 + 168);
      v65 = v62;
      *((_QWORD *)v2 + 168) = 0LL;
      *((_QWORD *)v2 + 167) = 0LL;
      *((_QWORD *)v2 + 166) = 0LL;
      if ( v62 != v52 )
        break;
LABEL_89:
      if ( v62 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v62, v52);
        std::_Deallocate<16,0>(v62, (v64 - (_QWORD)v62) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v52 = (__int64 *)*((_QWORD *)v2 + 167);
      if ( !(((__int64)v52 - *((_QWORD *)v2 + 166)) >> 3) )
        goto LABEL_92;
    }
    do
    {
      v66 = *v65;
      if ( (*(_BYTE *)(*v65 + 96) & 0x20) != 0 )
      {
        v111 = 0LL;
        v110 = 0LL;
        v67 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>(v102, v66, v66, v102);
        v63 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v67, 0x4Au, 0LL);
          goto LABEL_168;
        }
      }
      ++v65;
    }
    while ( v65 != v52 );
    if ( v63 >= 0 )
      goto LABEL_89;
LABEL_168:
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v63, 0xDD0u, 0LL);
    if ( v62 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v62, v52);
      std::_Deallocate<16,0>(v62, (v64 - (_QWORD)v62) & 0xFFFFFFFFFFFFFFF8uLL);
    }
LABEL_92:
    v53 = v108;
    v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
  }
  if ( v53 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v53);
  }
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v2 + 40LL))(v2);
  v55 = v101;
  if ( v101 )
    CDebugVisualImage::LockAndRead(v101);
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  if ( *((_BYTE *)v2 + 1272) )
  {
    v61 = *(_QWORD *)(*((_QWORD *)v2 + 29) + 24LL);
    if ( v61 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    *((_BYTE *)v2 + 1272) = 0;
  }
  if ( dword_1803E2F50 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  if ( v55 )
    CResource::InternalRelease(v55);
  return (unsigned int)v5;
}
