void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        char **a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  VIDPN_MGR *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rax
  DMMVIDEOPRESENTTARGET *v9; // rcx
  DMMVIDEOPRESENTTARGET *v10; // rcx
  DXGADAPTER *v11; // rcx
  struct _IO_WORKITEM *v12; // rcx

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v4 )
  {
    if ( !*((_QWORD *)this + 5) )
      WdLogSingleEntry0(1LL);
    v6 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v6 )
      WdLogSingleEntry0(1LL);
    VIDPN_MGR::ReleaseMonitorHandle(v6, v4);
  }
  v7 = (char *)this + 512;
  v8 = *((_QWORD *)this + 64);
  if ( v8 )
  {
    if ( *(char **)(v8 + 8) != v7 || (a2 = (char **)*((_QWORD *)this + 65), *a2 != v7) )
      __fastfail(3u);
    *a2 = (char *)v8;
    *(_QWORD *)(v8 + 8) = a2;
  }
  v9 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v9 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v9, this);
  v10 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v10 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v10, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this, (__int64)a2, a3, a4);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v11 = (DXGADAPTER *)**((_QWORD **)this + 67);
      if ( v11 )
        DXGADAPTER::ReleaseReferenceNoTracking(v11);
      v12 = *(struct _IO_WORKITEM **)(*((_QWORD *)this + 67) + 144LL);
      if ( v12 )
        IoFreeWorkItem(v12);
      operator delete(*((void **)this + 67));
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
