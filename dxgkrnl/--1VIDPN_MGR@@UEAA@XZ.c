void __fastcall VIDPN_MGR::~VIDPN_MGR(VIDPN_MGR *this)
{
  bool v1; // zf
  _QWORD *v3; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // edi
  DXGDIAGNOSTICS *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

  v1 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  *((_QWORD *)this + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  *((_QWORD *)this + 11) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  if ( v1 )
    WdLogSingleEntry0(1LL);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 208LL) )
      WdLogSingleEntry0(1LL);
  }
  if ( *((VIDPN_MGR **)this + 20) != (VIDPN_MGR *)((char *)this + 160) )
    WdLogSingleEntry0(3LL);
  *(_QWORD *)(*((_QWORD *)this + 14) + 88LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 15) + 88LL) = 0LL;
  v3 = (_QWORD *)(*((_QWORD *)this + 15) + 24LL);
  if ( (_QWORD *)*v3 != v3 )
  {
    NextTarget = (struct DMMVIDEOPRESENTTARGET *)(*v3 - 8LL);
    if ( *v3 != 8LL )
    {
      do
      {
        v5 = *((_QWORD *)NextTarget + 14);
        if ( v5 )
        {
          DMMVIDEOPRESENTTARGET::SetConnectedMonitor(NextTarget, 0LL);
          if ( !*((_QWORD *)this + 1) )
            WdLogSingleEntry0(1LL);
          MonitorReleaseMonitorHandle(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v5, NextTarget);
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(*((DMMVIDEOPRESENTTARGETSET **)this + 15), NextTarget);
      }
      while ( NextTarget );
    }
  }
  v6 = *((_QWORD *)this + 66);
  if ( !v6 )
    goto LABEL_24;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  v7 = MonitorUnregisterMonitorEventCallback(*((_QWORD *)this + 1), v6);
  if ( v7 < 0 )
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry1(2LL, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    *((_DWORD *)this + 24) = v7;
  }
  else
  {
LABEL_24:
    v8 = (DXGDIAGNOSTICS *)*((_QWORD *)this + 70);
    if ( v8 )
      DXGDIAGNOSTICS::`scalar deleting destructor'(v8);
  }
  v9 = (void *)*((_QWORD *)this + 64);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)this + 63);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = (void *)*((_QWORD *)this + 62);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = (void *)*((_QWORD *)this + 61);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v13 = (void *)*((_QWORD *)this + 60);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = (void *)*((_QWORD *)this + 59);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = (void *)*((_QWORD *)this + 58);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = (void *)*((_QWORD *)this + 57);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = (void *)*((_QWORD *)this + 56);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = (void *)*((_QWORD *)this + 55);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  v19 = (void *)*((_QWORD *)this + 54);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = (void *)*((_QWORD *)this + 53);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = (void *)*((_QWORD *)this + 52);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (void *)*((_QWORD *)this + 51);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  v23 = (void *)*((_QWORD *)this + 50);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (void *)*((_QWORD *)this + 49);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 41);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 40, 0LL);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 32);
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>((_QWORD *)this + 24);
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>((_QWORD *)this + 17);
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, 0LL);
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)this + 15, 0LL);
  auto_rc<DMMVIDEOPRESENTSOURCESET>::reset((__int64 *)this + 14, 0LL);
  Lockable::~Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
}
