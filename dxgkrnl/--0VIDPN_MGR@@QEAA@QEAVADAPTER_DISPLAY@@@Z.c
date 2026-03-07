VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  VIDPN_MGR *v2; // rdi
  __int64 v3; // rsi
  __int64 *v4; // r15
  __int64 *v5; // r14
  DMMVIDEOPRESENTSOURCESET *v7; // rax
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rax
  DMMVIDEOPRESENTTARGETSET *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  NTSTATUS v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  const struct DMMVIDEOPRESENTTARGET *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r14
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  void *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // r14
  MONITOR_MGR *v37; // rcx
  __int64 v38; // rax
  HANDLE v40; // rcx
  void ***v41; // rcx
  unsigned __int64 v42; // r15
  unsigned __int64 v43; // r15
  unsigned int v44; // r12d
  __int64 v45; // rdi
  __int64 v46; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  struct DMMVIDEOPRESENTTARGET *v52; // r13
  __int64 v53; // rax
  __int64 v54; // r14
  unsigned int *i; // r14
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // r15
  unsigned int v58; // r12d
  __int64 v59; // rdi
  __int64 v60; // r14
  struct DMMVIDEOPRESENTTARGET *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  struct DMMVIDEOPRESENTTARGET *v66; // r13
  __int64 v67; // rax
  HANDLE v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v76[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v77[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v78[2]; // [rsp+60h] [rbp-A0h] BYREF
  void **v79; // [rsp+70h] [rbp-90h] BYREF
  __int128 v80; // [rsp+78h] [rbp-88h]
  void **v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h]
  unsigned __int64 v83; // [rsp+98h] [rbp-68h]
  __int64 v84; // [rsp+A0h] [rbp-60h]
  void **v85; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v86; // [rsp+B0h] [rbp-50h]
  void **v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  _QWORD InputBuffer[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v92[2]; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v93[2]; // [rsp+100h] [rbp+0h] BYREF
  int v94; // [rsp+120h] [rbp+20h]
  wchar_t v95; // [rsp+124h] [rbp+24h]
  _OWORD v96[3]; // [rsp+128h] [rbp+28h] BYREF

  v2 = this;
  *(_QWORD *)v76 = this;
  v3 = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v4 = (__int64 *)((char *)this + 112);
  *((_DWORD *)this + 6) = 0;
  v5 = (__int64 *)((char *)this + 120);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 30;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 17;
  *((_DWORD *)this + 8) = 2;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 18) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 2;
  *((_QWORD *)this + 24) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 25) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)this + 28) = (char *)this + 216;
  *((_QWORD *)this + 27) = (char *)this + 216;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 2;
  *((_QWORD *)this + 31) = 30LL;
  *((_QWORD *)this + 32) = &Set<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 2;
  *((_QWORD *)this + 39) = 5LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)this + 42) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_QWORD *)this + 45) = (char *)this + 352;
  *((_QWORD *)this + 44) = (char *)this + 352;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 2;
  *((_QWORD *)this + 48) = 40LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_BYTE *)this + 520) = 0;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 137) = -1;
  *((_DWORD *)this + 138) = -1;
  *((_QWORD *)this + 70) = 0LL;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)v2 + 26) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v2 + 1) )
      WdLogSingleEntry0(1LL);
    *((_QWORD *)v2 + 1) = a2;
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, *((_QWORD *)v2 + 1));
  }
  if ( *((_DWORD *)v2 + 8) != 2 )
  {
    WdLogSingleEntry1(2LL, v2);
    *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 6);
    return v2;
  }
  v7 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, 256LL);
  if ( v7 )
    v8 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v7, v2);
  else
    v8 = 0LL;
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset(v4, (__int64)v8);
  if ( !*v4
    || ((v9 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, 256LL)) == 0LL
      ? (v10 = 0LL)
      : (v10 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v9, v2)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset(v5, (__int64)v10),
        !*v5) )
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)v2 + 24) = -1073741801;
    return v2;
  }
  LODWORD(v11) = VIDPN_MGR::_ReadConfiguration(v2);
  if ( (int)v11 < 0 )
  {
    if ( *((_QWORD *)v2 + 1) )
      goto LABEL_65;
LABEL_64:
    WdLogSingleEntry0(1LL);
    goto LABEL_65;
  }
  LODWORD(v11) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v2);
  if ( (int)v11 < 0 )
  {
    if ( *((_QWORD *)v2 + 1) )
      goto LABEL_65;
    goto LABEL_64;
  }
  LODWORD(v11) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v2);
  if ( (int)v11 < 0 )
  {
    if ( *((_QWORD *)v2 + 1) )
      goto LABEL_65;
    goto LABEL_64;
  }
  _InterlockedAdd((volatile signed __int32 *)(*v4 + 72), 1u);
  v12 = *v4;
  v13 = -(__int64)(*v4 != -112);
  InputBuffer[1] = *((_QWORD *)v2 + 49);
  InputBuffer[0] = v12 & v13;
  if ( !*((_QWORD *)v2 + 1) )
    WdLogSingleEntry0(1LL);
  v14 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) + 216LL),
          0x23204Fu,
          InputBuffer,
          0x10u,
          0LL,
          0);
  if ( v14 < 0 )
  {
    if ( *((_QWORD *)v2 + 1) )
    {
LABEL_74:
      WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
      *((_DWORD *)v2 + 24) = v14;
      goto LABEL_77;
    }
LABEL_73:
    WdLogSingleEntry0(1LL);
    goto LABEL_74;
  }
  if ( !*(_QWORD *)(v12 + 40) )
  {
    if ( !*((_QWORD *)v2 + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
    *((_DWORD *)v2 + 24) = -1071774936;
    goto LABEL_80;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
  _InterlockedAdd((volatile signed __int32 *)(*v5 + 72), 1u);
  v12 = *v5;
  v15 = -(__int64)(*v5 != -112);
  v92[1] = *((_QWORD *)v2 + 50);
  v92[0] = v12 & v15;
  if ( !*((_QWORD *)v2 + 1) )
    WdLogSingleEntry0(1LL);
  v14 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) + 216LL),
          0x232053u,
          v92,
          0x10u,
          0LL,
          0);
  if ( v14 < 0 )
  {
    if ( *((_QWORD *)v2 + 1) )
      goto LABEL_74;
    goto LABEL_73;
  }
  if ( !*(_QWORD *)(v12 + 40) )
  {
    if ( !*((_QWORD *)v2 + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
    *((_DWORD *)v2 + 24) = -1071774935;
    goto LABEL_80;
  }
  v16 = *(_QWORD *)(v12 + 24);
  if ( v16 == v12 + 24 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v16 - 8)) == 0LL )
  {
LABEL_29:
    v19 = -1;
  }
  else
  {
    while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
    {
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, v18);
      if ( !NextTarget )
        goto LABEL_29;
    }
    v19 = *((_DWORD *)v18 + 6);
  }
  *((_DWORD *)v2 + 138) = v19;
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
  v20 = *((_QWORD *)v2 + 1);
  if ( *(_QWORD *)(*v5 + 40) >= *(_QWORD *)(*v4 + 40) )
  {
    Handle = 0LL;
    if ( !v20 )
      WdLogSingleEntry0(1LL);
    v21 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) + 216LL), 1, 0x20019u, &Handle);
    v11 = v21;
    if ( v21 < 0 )
    {
      if ( !*((_QWORD *)v2 + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL), v11);
      goto LABEL_67;
    }
    _InterlockedAdd((volatile signed __int32 *)(*v5 + 72), 1u);
    v12 = *v5;
    v94 = *(_DWORD *)L"st";
    v95 = aTargetpriority[18];
    v77[1] = v93;
    v79 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v93[0] = *(_OWORD *)L"TargetPriorityList";
    v81 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v77[0] = 2490404LL;
    v93[1] = *(_OWORD *)L"iorityList";
    v82 = 0LL;
    v80 = 0LL;
    v83 = 0LL;
    v84 = 256LL;
    v23 = VIDPN_MGR::_ReadTargetPriorityList(v22, Handle, v77, &v79);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v42 = v83;
      if ( !v83 )
        WdLogSingleEntry0(1LL);
      v43 = v42 >> 2;
      v44 = 0;
      if ( v43 )
      {
        v45 = v82;
        v46 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v12,
                         *(_DWORD *)(v45 + 4 * v46));
          v52 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 31) == -1 )
            {
              *((_DWORD *)TargetById + 31) = v44;
              v53 = WdLogNewEntry5_WdTrace(v49, v48, v50, v51);
              *(_QWORD *)(v53 + 24) = v46;
              *(_QWORD *)(v53 + 32) = *((unsigned int *)v52 + 6);
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)TargetById + 6));
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, *(unsigned int *)(v45 + 4 * v46), v46);
          }
          v46 = ++v44;
        }
        while ( v44 < v43 );
        v2 = *(VIDPN_MGR **)v76;
      }
      v54 = *(_QWORD *)(v12 + 24);
      if ( v54 != v12 + 24 )
      {
        for ( i = (unsigned int *)(v54 - 8);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v12,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i) )
        {
          if ( i[31] == -1 )
            WdLogSingleEntry1(3LL, i[6]);
        }
      }
    }
    else if ( v23 != -1073741275 )
    {
      if ( !*((_QWORD *)v2 + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL), v24);
      v40 = Handle;
      *((_DWORD *)v2 + 24) = v24;
      ZwClose(v40);
      v41 = &v79;
LABEL_76:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v41);
LABEL_77:
      if ( !v12 )
        return v2;
LABEL_80:
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
      return v2;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v79);
    v78[1] = v96;
    v96[0] = *(_OWORD *)L"TargetForcePriorityList";
    v85 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `SetElement'};
    v78[0] = 3145774LL;
    v87 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v96[2] = *(_OWORD *)L"ityList";
    v88 = 0LL;
    v89 = 0LL;
    v86 = 0LL;
    v90 = 256LL;
    v96[1] = *(_OWORD *)L"rcePriorityList";
    v26 = VIDPN_MGR::_ReadTargetPriorityList(v25, Handle, v78, &v85);
    v27 = v26;
    if ( v26 >= 0 )
    {
      v56 = v89;
      if ( !v89 )
        WdLogSingleEntry0(1LL);
      v57 = v56 >> 2;
      v58 = 0;
      if ( v57 )
      {
        v59 = v88;
        v60 = 0LL;
        do
        {
          v61 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, *(_DWORD *)(v59 + 4 * v60));
          v66 = v61;
          if ( v61 )
          {
            if ( *((_DWORD *)v61 + 32) == -1 )
            {
              *((_DWORD *)v61 + 32) = v58;
              v67 = WdLogNewEntry5_WdTrace(v63, v62, v64, v65);
              *(_QWORD *)(v67 + 24) = v60;
              *(_QWORD *)(v67 + 32) = *((unsigned int *)v66 + 6);
            }
            else
            {
              WdLogSingleEntry1(2LL, *((unsigned int *)v61 + 6));
            }
          }
          else
          {
            WdLogSingleEntry2(3LL, *(unsigned int *)(v59 + 4 * v60), v60);
          }
          v60 = ++v58;
        }
        while ( v58 < v57 );
        v2 = *(VIDPN_MGR **)v76;
      }
LABEL_38:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v85);
      ZwClose(Handle);
      v76[0] = -1;
      if ( !*((_QWORD *)v2 + 1) )
        WdLogSingleEntry0(1LL);
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL) + 216LL),
                  L"DefaultSimulatedTarget",
                  (char *)v76,
                  4u,
                  1u) < 0
        || (v69 = v76[0], v76[0] == -1) )
      {
        v32 = WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
        if ( !*((_QWORD *)v2 + 1) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(v32 + 24) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL);
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, v76[0]) )
      {
        v74 = WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
        *(_QWORD *)(v74 + 24) = v69;
        if ( !*((_QWORD *)v2 + 1) )
          WdLogSingleEntry0(1LL);
        *(_QWORD *)(v74 + 32) = *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL);
        *((_DWORD *)v2 + 137) = v69;
      }
      else
      {
        if ( !*((_QWORD *)v2 + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry2(2LL, v69, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
      }
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
      LODWORD(v11) = VIDPN_MGR::_InitializeDmmClientInterfaces(v2);
      v34 = *((_QWORD *)v2 + 1);
      if ( (int)v11 < 0 )
      {
        if ( !v34 )
          goto LABEL_140;
        goto LABEL_65;
      }
      if ( !v34 )
        WdLogSingleEntry0(1LL);
      v35 = *((_QWORD *)v2 + 1);
      if ( v35 )
      {
        v36 = (_QWORD *)((char *)v2 + 528);
        if ( v2 != (VIDPN_MGR *)-528LL )
        {
          *v36 = 0LL;
          v37 = *(MONITOR_MGR **)(v35 + 112);
          if ( v37 )
          {
            LODWORD(v11) = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                             v37,
                             (int (__high *)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))v35,
                             v33,
                             (struct HDXGMONITOREVENT__ **)v2 + 66);
            if ( (int)v11 >= 0 )
            {
              if ( !*v36 )
                WdLogSingleEntry0(1LL);
              v38 = operator new[](0x70uLL, 0x4E506456u, 256LL);
              if ( v38 )
                v3 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v38, 0x8000u, 1, 256LL, 0x12Cu);
              *((_QWORD *)v2 + 70) = v3;
              *((_DWORD *)v2 + 26) = 2;
              return v2;
            }
LABEL_139:
            if ( !*((_QWORD *)v2 + 1) )
LABEL_140:
              WdLogSingleEntry0(1LL);
LABEL_65:
            WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
LABEL_67:
            *((_DWORD *)v2 + 24) = v11;
            return v2;
          }
          WdLogSingleEntry1(2LL, *(_QWORD *)(v35 + 16));
        }
      }
      LODWORD(v11) = -1073741811;
      goto LABEL_139;
    }
    if ( v26 == -1073741275 )
      goto LABEL_38;
    if ( !*((_QWORD *)v2 + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL), v27);
    v68 = Handle;
    *((_DWORD *)v2 + 24) = v27;
    ZwClose(v68);
    v41 = &v85;
    goto LABEL_76;
  }
  if ( !v20 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry3(2LL, *(_QWORD *)(*v5 + 40), *(_QWORD *)(*v4 + 40), *(_QWORD *)(*((_QWORD *)v2 + 1) + 16LL));
  *((_DWORD *)v2 + 24) = -1071774938;
  return v2;
}
