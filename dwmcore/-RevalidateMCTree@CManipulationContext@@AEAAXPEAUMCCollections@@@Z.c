/*
 * XREFs of ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58
 * Callers:
 *     ?Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801A2374 (-Revalidate@CManipulationContext@@SAXPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800E80CC (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1FE0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129100 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18019FE48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18019FEC8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801A0AD8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z @ 0x1801A0EC8 (-FindWorkspace@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAK@Z.c)
 *     ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A0F10 (-GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z.c)
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1801A1CFC (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A3388 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x180209B10 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CManipulationContext::RevalidateMCTree(CManipulationContext *this, struct MCCollections *a2)
{
  int v2; // r8d
  struct CInteraction *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // r13d
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  char *v13; // r8
  int Key; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // r15d
  __int64 v18; // rbx
  struct CInteraction *v19; // rbx
  bool *v20; // rdx
  struct CInteraction *v21; // rax
  struct CInteraction *ClosestInteractionAncestor; // rsi
  __int64 v23; // rax
  struct CInteraction *i; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  const struct CVisual *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 v32; // r15
  char v33; // r13
  unsigned int v34; // esi
  struct CInteraction *v35; // rbx
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  struct CVisual *v39; // rcx
  bool v40; // dl
  bool *v41; // rdx
  __int64 v42; // rax
  const struct CVisual *v43; // rcx
  __int64 v44; // r12
  struct CInteraction *v45; // rsi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r12d
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // r11d
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // r8
  __int64 j; // rcx
  struct CInteraction *v61; // [rsp+58h] [rbp-A8h] BYREF
  int v62; // [rsp+60h] [rbp-A0h]
  CManipulationContext *v63; // [rsp+68h] [rbp-98h] BYREF
  struct CInteraction *v64; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v65; // [rsp+78h] [rbp-88h]
  unsigned int v66; // [rsp+7Ch] [rbp-84h] BYREF
  CResource *v67; // [rsp+80h] [rbp-80h] BYREF
  CManipulationContext *v68; // [rsp+88h] [rbp-78h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  struct MCCollections *v72; // [rsp+A8h] [rbp-58h]
  CManipulationContext *v73; // [rsp+B0h] [rbp-50h] BYREF
  struct CInteraction *v74; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+C0h] [rbp-40h] BYREF
  CManipulationContext **v76; // [rsp+E0h] [rbp-20h]
  int v77; // [rsp+E8h] [rbp-18h]
  int v78; // [rsp+ECh] [rbp-14h]
  CManipulationContext **v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  __int64 *v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]

  v2 = 0;
  v72 = a2;
  if ( *((int *)this + 18) > 0 )
  {
    v5 = (CManipulationContext *)((char *)this + 64);
    v6 = 0LL;
    v64 = (CManipulationContext *)((char *)this + 64);
    do
    {
      v7 = *(_QWORD *)(v6 + *(_QWORD *)v5);
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 216);
          *(_QWORD *)(v7 + 208) = v8;
          v7 = v8;
        }
        while ( v8 );
      }
      v9 = *((_DWORD *)this + 18);
      ++v2;
      v6 += 8LL;
    }
    while ( v2 < v9 );
    v10 = 0;
    v65 = 0;
    if ( v9 > 0 )
    {
      v11 = (_QWORD *)((char *)this + 56);
      v12 = 0LL;
      v71 = 0LL;
      v70 = 0LL;
      v13 = (char *)a2 + 40;
      while ( 1 )
      {
        LODWORD(v63) = *(_DWORD *)(v12 + *v11);
        Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
                (__int64)v13,
                (int *)&v63);
        if ( Key == -1 )
          v17 = 2;
        else
          v17 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL * Key);
        v18 = *(_QWORD *)v5;
        v62 = v17;
        v19 = *(struct CInteraction **)(v15 + v18);
        v74 = v19;
        v61 = v19;
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v61);
        v21 = (struct CInteraction *)*((_QWORD *)v19 + 25);
        ClosestInteractionAncestor = v19;
        if ( v21 )
        {
          do
          {
            ClosestInteractionAncestor = v21;
            v21 = (struct CInteraction *)*((_QWORD *)v21 + 25);
          }
          while ( v21 );
          v61 = ClosestInteractionAncestor;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v61);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            v11,
            v10,
            &v63,
            &v61);
          (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)ClosestInteractionAncestor + 16LL))(ClosestInteractionAncestor);
        }
        v23 = *((_QWORD *)ClosestInteractionAncestor + 14);
        if ( v23 && *(_QWORD *)(v23 + 16) )
        {
          for ( i = ClosestInteractionAncestor;
                ClosestInteractionAncestor;
                ClosestInteractionAncestor = CManipulationContext::GetClosestInteractionAncestor(v27, v20) )
          {
            if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
            {
              v61 = ClosestInteractionAncestor;
              v63 = this;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                (__int64)&dword_1803E07D0,
                byte_18037A97F,
                v25,
                v26,
                (__int64)&v63,
                (__int64)&v61);
            }
            *((_BYTE *)ClosestInteractionAncestor + 192) |= 0x80u;
            v27 = 0LL;
            v28 = *((_QWORD *)ClosestInteractionAncestor + 14);
            if ( v28 )
              v27 = *(const struct CVisual **)(v28 + 16);
          }
        }
        else
        {
          i = 0LL;
          v61 = 0LL;
          Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v61);
          CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::SetAtIndex(
            (char *)this + 56,
            v10,
            &v63,
            &v61);
        }
        v29 = (__int64)v19;
        if ( v19 )
        {
          do
          {
            if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
            {
              v61 = (struct CInteraction *)v29;
              v63 = this;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                (__int64)&dword_1803E07D0,
                byte_18037A9D1,
                v30,
                v31,
                (__int64)&v63,
                (__int64)&v61);
            }
            *(_BYTE *)(v29 + 193) |= 1u;
            v29 = *(_QWORD *)(v29 + 208);
          }
          while ( v29 );
        }
        if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
        {
          v84 = 0;
          v81 = 0;
          v78 = 0;
          v82 = (__int64 *)&v61;
          v61 = v19;
          v79 = &v63;
          v63 = i;
          v76 = &v68;
          v68 = this;
          v83 = 8;
          v80 = 8;
          v77 = 8;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1803E07D0,
            (unsigned __int8 *)dword_18037A89C,
            0LL,
            0LL,
            5u,
            &v75);
        }
        if ( i != v19 )
          CManipulationContext::CleanStaleFork((__int64)this, v17, (__int64)v19);
        v32 = 0;
        v33 = 0;
        if ( i )
          break;
LABEL_80:
        if ( v19 )
          (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v19 + 16LL))(v19);
        v11 = (_QWORD *)((char *)this + 56);
        v10 = v65 + 1;
        v12 = v70 + 4;
        v9 = *((_DWORD *)this + 18);
        v65 = v10;
        v70 += 4LL;
        v71 += 8LL;
        v13 = (char *)v72 + 40;
        if ( (int)v10 >= v9 )
          goto LABEL_83;
      }
      v34 = v62;
      v35 = v64;
      HIDWORD(v69) = -2;
      while ( 1 )
      {
        CManipulationContext::FindWorkspace(v72, i, &v66);
        v36 = (__int64 *)*((_QWORD *)this + 5);
        LODWORD(v69) = v66;
        v37 = *v36;
        v67 = 0LL;
        (*(void (__fastcall **)(__int64 *, __int64, CResource **))(v37 + 56))(v36, v69, &v67);
        if ( v67 )
        {
          v38 = *((_QWORD *)i + 14);
          v39 = 0LL;
          if ( v38 )
            v39 = *(struct CVisual **)(v38 + 16);
          CManipulationContext::OnVisualPropertyChange(v39, v67);
        }
        if ( *((_DWORD *)i + 49) == 2 )
        {
          v33 = 0;
          v32 = 1;
        }
        else if ( !v32 || v33 )
        {
          v40 = 0;
          goto LABEL_47;
        }
        v40 = 1;
LABEL_47:
        CInteraction::UpdateDefaultInteractionForCurrentMC(i, v40);
        if ( v32
          && (*((_BYTE *)i + 192) & 0x10) != 0
          && (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)i + 8) + 80LL))(
               (__int64)i + 64,
               v34,
               0LL) )
        {
          v33 = 1;
        }
        v42 = *((_QWORD *)i + 14);
        v43 = 0LL;
        v44 = *((_QWORD *)i + 26);
        v45 = i;
        if ( v42 )
          v43 = *(const struct CVisual **)(v42 + 16);
        i = CManipulationContext::GetClosestInteractionAncestor(v43, v41);
        if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
        {
          LODWORD(v63) = v32;
          v68 = v45;
          v61 = (struct CInteraction *)v44;
          v64 = i;
          v73 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            v32,
            byte_18037A8FE,
            v46,
            v47,
            (__int64)&v73,
            (__int64)&v64,
            (__int64)&v61,
            (__int64)&v68,
            (__int64)&v63);
        }
        if ( (struct CInteraction *)v44 != i )
        {
          v48 = *((_QWORD *)v45 + 28);
          if ( v48 )
            *(_QWORD *)(v48 + 232) = *((_QWORD *)v45 + 29);
          v49 = *((_QWORD *)v45 + 29);
          if ( v49 )
            *(_QWORD *)(v49 + 224) = *((_QWORD *)v45 + 28);
          v50 = *((_QWORD *)v45 + 27);
          if ( v50 && *(struct CInteraction **)(v50 + 240) == v45 )
            *(_QWORD *)(v50 + 240) = *((_QWORD *)v45 + 28);
          *((_QWORD *)v45 + 29) = 0LL;
          v51 = v44;
          v52 = v62;
          *((_QWORD *)v45 + 28) = 0LL;
          *((_QWORD *)v45 + 27) = 0LL;
          CManipulationContext::CleanStaleFork((__int64)this, v52, v51);
          if ( !i )
            goto LABEL_76;
          *((_QWORD *)v45 + 28) = *((_QWORD *)i + 30);
          v53 = *((_QWORD *)i + 30);
          if ( v53 )
            *(_QWORD *)(v53 + 232) = v45;
          *((_QWORD *)i + 30) = v45;
          *((_QWORD *)v45 + 27) = i;
          goto LABEL_70;
        }
        if ( i )
        {
          v52 = v62;
LABEL_70:
          if ( (*((_BYTE *)i + 193) & 1) == 0 )
          {
            if ( !(unsigned int)CInteraction::GetTotalNumContacts(i) )
            {
              LOBYTE(v55) = v56 & *((_BYTE *)this + 28);
              LOBYTE(v54) = v56;
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*((_QWORD *)i + 8) + 40LL))(
                (__int64)i + 64,
                v54,
                v55,
                (unsigned int)v52);
              v56 = 1;
            }
            v57 = v52 - 1LL;
            if ( (unsigned int)(v52 - 1) >= 6 )
              v57 = 0LL;
            *((_DWORD *)i + v57 + 62) += v56;
          }
        }
LABEL_76:
        *((_BYTE *)v45 + 192) &= ~0x80u;
        *((_BYTE *)v45 + 193) &= ~1u;
        if ( v67 )
          CResource::InternalRelease(v67);
        v34 = v62;
        if ( !i )
        {
          v64 = v35;
          v19 = v74;
          v5 = v64;
          goto LABEL_80;
        }
      }
    }
LABEL_83:
    v58 = 0;
    if ( v9 > 0 )
    {
      v59 = 0LL;
      do
      {
        for ( j = *(_QWORD *)(v59 + *(_QWORD *)v5); j; j = *(_QWORD *)(j + 216) )
          *(_QWORD *)(j + 208) = 0LL;
        ++v58;
        v59 += 8LL;
      }
      while ( v58 < *((_DWORD *)this + 18) );
    }
  }
}
