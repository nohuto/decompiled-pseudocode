DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, struct VIDPN_MGR *const a2)
{
  unsigned __int8 (__fastcall ***v2)(_QWORD); // r14
  struct VIDPN_MGR *v4; // rsi
  struct DMMVIDPNSOURCESET *const *v5; // r15
  struct DMMVIDPNTARGETSET *const *v6; // r13
  DMMVIDPNSOURCESET *v7; // rax
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNTARGETSET *v9; // rax
  DMMVIDPNTARGETSET *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  struct DMMVIDEOPRESENTSOURCE *v13; // r14
  DMMVIDPNSOURCE *v14; // rsi
  DMMVIDPNSOURCE *v15; // rax
  struct DMMVIDPNSOURCESET *v16; // rcx
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // r14
  struct DMMVIDEOPRESENTTARGET *v20; // r14
  DMMVIDPNTARGET *v21; // rax
  DMMVIDPNTARGET *v22; // rsi
  struct DMMVIDPNTARGETSET *v23; // rcx
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // eax
  struct DMMVIDPNSOURCESET *v32; // rax
  DMMVIDPNTARGET *v33; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v34[32]; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNSOURCE *v35; // [rsp+B0h] [rbp+48h] BYREF
  struct VIDPN_MGR *v36; // [rsp+B8h] [rbp+50h]
  DMMVIDPNTARGET *v37; // [rsp+C0h] [rbp+58h] BYREF
  DMMVIDPNSOURCE *v38; // [rsp+C8h] [rbp+60h] BYREF

  v36 = a2;
  *(_QWORD *)this = &SetElement::`vftable';
  v2 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 16) = 1833172997;
  *((_DWORD *)this + 20) = 0;
  v4 = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  v5 = (struct DMMVIDPNSOURCESET *const *)((char *)this + 304);
  *((_QWORD *)this + 38) = 0LL;
  v6 = (struct DMMVIDPNTARGETSET *const *)((char *)this + 312);
  *((_QWORD *)this + 39) = 0LL;
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)this + 22) = 1;
  AggregatedBy<VIDPN_MGR>::SetAggregator((__int64)this + 40, (__int64)v4);
  if ( !(**v2)(v2) )
  {
    WdLogSingleEntry1(7LL, this);
    v31 = *((_DWORD *)this + 28);
    if ( v31 >= 0 )
      v31 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v31;
    return this;
  }
  v7 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, 256LL);
  if ( v7 )
    v8 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v7, this);
  else
    v8 = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::reset((__int64 *)this + 38, (__int64)v8);
  if ( !*v5 )
    goto LABEL_46;
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNSOURCESET *const))v5)(*v5) )
  {
    WdLogSingleEntry1(7LL, this);
    v32 = *v5;
LABEL_49:
    *((_DWORD *)this + 20) = *((_DWORD *)v32 + 4);
    return this;
  }
  v9 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, 256LL);
  v10 = v9 ? DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v9, this) : 0LL;
  auto_ptr<DMMVIDPNTARGETSET>::reset((__int64 *)this + 39, (__int64)v10);
  if ( !*v6 )
  {
LABEL_46:
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 20) = -1073741801;
    return this;
  }
  if ( !(***(unsigned __int8 (__fastcall ****)(struct DMMVIDPNTARGETSET *const))v6)(*v6) )
  {
    WdLogSingleEntry1(7LL, this);
    v32 = *v6;
    goto LABEL_49;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 14) + 72LL));
  v11 = *((_QWORD *)v4 + 14);
  v12 = *(_QWORD *)(v11 + 24);
  if ( v12 == v11 + 24 || (v13 = (struct DMMVIDEOPRESENTSOURCE *)(v12 - 8)) == 0LL )
  {
LABEL_24:
    if ( v11 )
      ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v4 + 15) + 72LL));
    v11 = *((_QWORD *)v4 + 15);
    v19 = *(_QWORD *)(v11 + 24);
    if ( v19 == v11 + 24 || (v20 = (struct DMMVIDEOPRESENTTARGET *)(v19 - 8)) == 0LL )
    {
LABEL_36:
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
      if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        v34,
        ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 96) >> 64),
        0LL);
      DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v34);
      *((_DWORD *)this + 22) = 2;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v27, v26, v28, v29) + 24) = this;
      return this;
    }
    while ( 1 )
    {
      v21 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, 256LL);
      if ( v21 )
        v22 = DMMVIDPNTARGET::DMMVIDPNTARGET(v21, *v6, v20);
      else
        v22 = 0LL;
      v37 = v22;
      if ( !v22 )
      {
        WdLogSingleEntry0(6LL);
        *((_DWORD *)this + 20) = -1073741801;
        goto LABEL_56;
      }
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v22 + 8))((__int64)v22 + 64) )
        break;
      v23 = *v6;
      v37 = 0LL;
      v33 = v22;
      v24 = DMMVIDPNTARGETSET::AddTarget(v23, &v33);
      if ( v24 < 0 )
      {
        WdLogSingleEntry0(2LL);
        *((_DWORD *)this + 20) = v24;
        goto LABEL_56;
      }
      v25 = *((_QWORD *)v20 + 1);
      v20 = (struct DMMVIDEOPRESENTTARGET *)(v25 - 8);
      if ( v25 == v11 + 24 )
        v20 = 0LL;
      if ( !v20 )
        goto LABEL_36;
    }
    WdLogSingleEntry1(7LL, this);
    *((_DWORD *)this + 20) = *((_DWORD *)v22 + 18);
LABEL_56:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v37);
  }
  else
  {
    v14 = 0LL;
    while ( 1 )
    {
      v15 = (DMMVIDPNSOURCE *)operator new[](0xB8uLL, 0x4E506456u, 256LL);
      if ( v15 )
        v14 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(v15, *v5, v13);
      v35 = v14;
      if ( !v14 )
        break;
      if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v14 + 8))((__int64)v14 + 64) )
      {
        WdLogSingleEntry1(7LL, this);
        *((_DWORD *)this + 20) = *((_DWORD *)v14 + 18);
        goto LABEL_54;
      }
      v16 = *v5;
      v35 = 0LL;
      v38 = v14;
      v17 = DMMVIDPNSOURCESET::AddSource((__int64)v16, (__int64 (__fastcall ****)(_QWORD, __int64))&v38);
      if ( v17 < 0 )
      {
        WdLogSingleEntry0(2LL);
        *((_DWORD *)this + 20) = v17;
        goto LABEL_54;
      }
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v35);
      v18 = *((_QWORD *)v13 + 1);
      v14 = 0LL;
      v13 = (struct DMMVIDEOPRESENTSOURCE *)(v18 - 8);
      if ( v18 == v11 + 24 )
        v13 = 0LL;
      if ( !v13 )
      {
        v4 = v36;
        goto LABEL_24;
      }
    }
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 20) = -1073741801;
LABEL_54:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v35);
  }
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 64));
  return this;
}
