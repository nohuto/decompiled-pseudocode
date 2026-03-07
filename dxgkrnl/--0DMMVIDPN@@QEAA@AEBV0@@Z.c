DMMVIDPN *__fastcall DMMVIDPN::DMMVIDPN(DMMVIDPN *this, const struct DMMVIDPN *a2)
{
  unsigned __int8 (__fastcall ***v4)(_QWORD); // rbx
  DMMVIDPN *v5; // r14
  __int64 *v6; // r12
  __int64 *v7; // r13
  DMMVIDPNSOURCESET *v8; // rax
  DMMVIDPNSOURCESET *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  DMMVIDPNTARGETSET *v16; // rax
  DMMVIDPNTARGETSET *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
  int v21; // ebx
  __int64 v22; // rsi
  _QWORD *v23; // r14
  _QWORD *v24; // rsi
  _QWORD *v25; // rsi
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  DMMVIDPNTOPOLOGY *v36; // r15
  char *v37; // rdx
  __int64 v38; // r8
  char *v39; // rdx
  const struct DMMVIDPN *v40; // rsi
  const struct DMMVIDPNPRESENTPATH *v41; // rsi
  unsigned int *v42; // r12
  __int64 v43; // rax
  unsigned int *v44; // r13
  DMMVIDPNPRESENTPATH *v45; // rax
  DMMVIDPNPRESENTPATH *v46; // rax
  struct DMMVIDPNPRESENTPATH *v47; // rbx
  int v48; // eax
  int v49; // r15d
  const struct DMMVIDPN *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int v57; // eax
  __int64 v58; // rbx
  DMMVIDPNTARGET *v59; // rax
  DMMVIDPNTARGET *v60; // rax
  struct DMMVIDPNPRESENTPATH *v61; // rbx
  _QWORD *v62; // rcx
  int v63; // ebx
  int v64; // eax
  int v65; // ebx
  struct DMMVIDPNPRESENTPATH *v66; // [rsp+50h] [rbp-39h] BYREF
  __int64 v67; // [rsp+58h] [rbp-31h]
  __int64 *v68; // [rsp+60h] [rbp-29h]
  __int64 *v69; // [rsp+68h] [rbp-21h]
  _BYTE v70[24]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v71[32]; // [rsp+88h] [rbp-1h] BYREF
  struct DMMVIDPNPRESENTPATH *v74; // [rsp+100h] [rbp+77h] BYREF
  DMMVIDPNTOPOLOGY *v75; // [rsp+108h] [rbp+7Fh]

  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 16) = 1833172997;
  *((_QWORD *)this + 3) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 6) = 0LL;
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD))((char *)this + 96);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  v67 = (__int64)this + 40;
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  v75 = (DMMVIDPN *)((char *)this + 96);
  DMMVIDPNTOPOLOGY::DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  v5 = this;
  v6 = (__int64 *)((char *)this + 304);
  v7 = (__int64 *)((char *)this + 312);
  *v6 = 0LL;
  v69 = v6;
  v68 = v7;
  *((_DWORD *)this + 22) = 1;
  *v7 = 0LL;
  if ( !(**v4)(v4) )
  {
    WdLogSingleEntry1(7LL, this);
    v57 = *((_DWORD *)this + 28);
    if ( v57 >= 0 )
      v57 = *((_DWORD *)this + 40);
    *((_DWORD *)this + 20) = v57;
    return v5;
  }
  v8 = (DMMVIDPNSOURCESET *)operator new[](0x60uLL, 0x4E506456u, 256LL);
  if ( v8 )
    v9 = DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(v8, *((const struct DMMVIDPNSOURCESET **)a2 + 38));
  else
    v9 = 0LL;
  auto_ptr<DMMVIDPNSOURCESET>::reset(v6, (__int64)v9);
  if ( !*v6 )
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 20) = -1073741801;
    return v5;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))*v6)(*v6) )
  {
    WdLogSingleEntry1(7LL, this);
    *((_DWORD *)this + 20) = *(_DWORD *)(*v6 + 16);
    return v5;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v6 + 64, (__int64)this);
  v10 = (_QWORD *)(*v6 + 24);
  if ( (_QWORD *)*v10 != v10 )
  {
    v11 = *v10 - 8LL;
    if ( *v10 != 8LL )
    {
      do
      {
        if ( !(**(unsigned __int8 (__fastcall ***)(__int64))(v11 + 64))(v11 + 64) )
        {
          WdLogSingleEntry1(7LL, v11);
          *((_DWORD *)this + 20) = *(_DWORD *)(v11 + 72);
          return v5;
        }
        v12 = *v6;
        if ( *v6 )
        {
          if ( *(_QWORD *)(v11 + 40) )
            WdLogSingleEntry0(1LL);
          *(_QWORD *)(v11 + 40) = v12;
        }
        else
        {
          WdLogSingleEntry2(2LL, v11 + 32, *(_QWORD *)(v11 + 40));
        }
        v13 = *(_QWORD *)(v11 + 8);
        v11 = v13 - 8;
        if ( v13 == *v6 + 24 )
          v11 = 0LL;
      }
      while ( v11 );
    }
  }
  v14 = *((_QWORD *)a2 + 6);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 120) + 72LL));
  v15 = *(_QWORD *)(v14 + 120);
  v16 = (DMMVIDPNTARGETSET *)operator new[](0x60uLL, 0x4E506456u, 256LL);
  if ( v16 )
    v17 = DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(v16, *((const struct DMMVIDPNTARGETSET **)a2 + 39));
  else
    v17 = 0LL;
  auto_ptr<DMMVIDPNTARGETSET>::reset(v7, (__int64)v17);
  if ( !*v7 )
  {
    WdLogSingleEntry0(6LL);
    *((_DWORD *)this + 20) = -1073741801;
    goto LABEL_69;
  }
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))*v7)(*v7) )
  {
    WdLogSingleEntry1(7LL, this);
    *((_DWORD *)this + 20) = *(_DWORD *)(*v7 + 16);
    goto LABEL_69;
  }
  ContainedBy<DMMVIDPN>::SetContainer(*v7 + 64, (__int64)this);
  v18 = (_QWORD *)(*v7 + 24);
  v19 = (_QWORD *)*v18;
  if ( (_QWORD *)*v18 != v18 )
  {
    v20 = v19 - 1;
    if ( v19 != (_QWORD *)8 )
    {
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD *))v20[8])(v20 + 8) )
      {
        v21 = *((_DWORD *)v20 + 6);
        if ( v21 == -1 )
          WdLogSingleEntry0(1LL);
        v22 = *(_QWORD *)(v15 + 24);
        v23 = (_QWORD *)(v15 + 24);
        if ( v22 != v15 + 24 )
        {
          v24 = (_QWORD *)(v22 - 8);
          if ( v24 )
          {
            while ( *((_DWORD *)v24 + 6) != v21 )
            {
              v25 = (_QWORD *)v24[1];
              if ( v25 != v23 )
              {
                v24 = v25 - 1;
                if ( v24 )
                  continue;
              }
              goto LABEL_35;
            }
            _InterlockedIncrement((volatile signed __int32 *)v24 + 18);
            v26 = (void (__fastcall ***)(_QWORD, __int64))(v20[12] + 64LL);
            v27 = _InterlockedDecrement((volatile signed __int32 *)(v20[12] + 72LL));
            if ( v27 )
            {
              if ( v27 < 0 )
              {
                v58 = v27;
                WdLogSingleEntry1(2LL, v27);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                  v58,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else if ( v26 )
            {
              (**v26)(v26, 1LL);
            }
            v20[12] = v24;
          }
        }
LABEL_35:
        v28 = *v7;
        if ( *v7 )
        {
          if ( v20[5] )
            WdLogSingleEntry0(1LL);
          v20[5] = v28;
        }
        else
        {
          WdLogSingleEntry2(2LL, v20 + 4, v20[5]);
        }
        v29 = v20[1];
        v20 = (_QWORD *)(v29 - 8);
        if ( v29 == *v7 + 24 )
          v20 = 0LL;
        if ( !v20 )
          goto LABEL_42;
      }
      WdLogSingleEntry1(7LL, v20);
      v5 = this;
      *((_DWORD *)this + 20) = *((_DWORD *)v20 + 18);
LABEL_69:
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
      return v5;
    }
  }
  v23 = (_QWORD *)(v15 + 24);
LABEL_42:
  v30 = (_QWORD *)*v23;
  if ( (_QWORD *)*v23 == v23 || (v31 = v30 - 1, v30 == (_QWORD *)8) )
  {
LABEL_53:
    AggregatedBy<VIDPN_MGR>::SetAggregator(v67, *((_QWORD *)a2 + 6));
    if ( ((unsigned __int16)((2 << *((_BYTE *)this + 172)) - 1) & *((_WORD *)this + 87)) != 0 )
      WdLogSingleEntry0(1LL);
    v36 = (DMMVIDPN *)((char *)this + 96);
    if ( this == (DMMVIDPN *)-96LL )
      v37 = 0LL;
    else
      v37 = (char *)this + 152;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v71, v37, 0LL);
    DMMVIDPNTOPOLOGY::_SetContainingVidPn((DMMVIDPN *)((char *)this + 96), this);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v71);
    if ( this == (DMMVIDPN *)-96LL )
      v39 = 0LL;
    else
      v39 = (char *)this + 152;
    LOBYTE(v38) = 1;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v70, v39, v38);
    v40 = (const struct DMMVIDPN *)*((_QWORD *)a2 + 15);
    if ( v40 == (const struct DMMVIDPN *)((char *)a2 + 120) || (v41 = (const struct DMMVIDPN *)((char *)v40 - 8)) == 0LL )
    {
LABEL_68:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
      *((_DWORD *)this + 22) = 2;
      v55 = WdLogNewEntry5_WdTrace(v52, v51, v53, v54);
      v5 = this;
      *(_QWORD *)(v55 + 24) = this;
      *(_QWORD *)(v55 + 32) = a2;
    }
    else
    {
      while ( 1 )
      {
        v42 = (unsigned int *)IndexedSet<DMMVIDPNSOURCE>::FindById(*v6, *(_DWORD *)(*((_QWORD *)v41 + 11) + 24LL));
        v43 = IndexedSet<DMMVIDPNTARGET>::FindById(*v7, *(_DWORD *)(*((_QWORD *)v41 + 12) + 24LL));
        v74 = 0LL;
        v44 = (unsigned int *)v43;
        v45 = (DMMVIDPNPRESENTPATH *)operator new[](0xC0uLL, 0x4E506456u, 256LL);
        if ( v45 )
          v46 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
                  v45,
                  (struct DMMVIDPNSOURCE *)v42,
                  (struct DMMVIDPNTARGET *)v44,
                  v41);
        else
          v46 = 0LL;
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v74,
          (__int64 (__fastcall ***)(_QWORD, __int64))v46);
        v47 = v74;
        if ( !v74 )
        {
          WdLogSingleEntry0(6LL);
          *((_DWORD *)this + 20) = -1073741801;
          goto LABEL_101;
        }
        if ( !(**((unsigned __int8 (__fastcall ***)(char *))v74 + 7))((char *)v74 + 56) )
          break;
        v48 = DMMVIDPNTOPOLOGY::AddPath(v36, v47, D3DKMDT_MCC_ENFORCE);
        v49 = v48;
        if ( v48 == -1071774920 )
        {
          WdLogSingleEntry4(7LL, v42[6], v44[6], this, (char *)a2 + 96);
          v64 = DMMVIDPNTOPOLOGY::AddPath(v75, v47, D3DKMDT_MCC_IGNORE);
          v65 = v64;
          if ( v64 < 0 )
          {
            WdLogSingleEntry5(2LL, v42[6], v44[6], this, (char *)a2 + 96, v64);
            *((_DWORD *)this + 20) = v65;
LABEL_101:
            auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
            goto LABEL_102;
          }
        }
        else if ( v48 < 0 )
        {
          WdLogSingleEntry5(2LL, v42[6], v44[6], this, (char *)a2 + 96, v48);
          *((_DWORD *)this + 20) = v49;
          goto LABEL_101;
        }
        v74 = 0LL;
        auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
        v50 = (const struct DMMVIDPN *)*((_QWORD *)v41 + 1);
        if ( v50 == (const struct DMMVIDPN *)((char *)a2 + 120) )
          goto LABEL_68;
        v41 = (const struct DMMVIDPN *)((char *)v50 - 8);
        if ( !v41 )
          goto LABEL_68;
        v7 = v68;
        v6 = v69;
        v36 = v75;
      }
      WdLogSingleEntry4(7LL, v42[6], v44[6], this, (char *)a2 + 96);
      v5 = this;
      *((_DWORD *)this + 20) = *((_DWORD *)v47 + 16);
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v70);
    }
    goto LABEL_69;
  }
  while ( 1 )
  {
    v32 = (_QWORD *)(*v7 + 24);
    if ( (_QWORD *)*v32 != v32 )
    {
      v33 = *v32 - 8LL;
      if ( *v32 != 8LL )
      {
        while ( *(_DWORD *)(v33 + 24) != *((_DWORD *)v31 + 6) )
        {
          v34 = *(_QWORD **)(v33 + 8);
          if ( v34 != v32 )
          {
            v33 = (__int64)(v34 - 1);
            if ( v33 )
              continue;
          }
          goto LABEL_90;
        }
        goto LABEL_50;
      }
    }
LABEL_90:
    v74 = 0LL;
    v59 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, 256LL);
    v60 = v59
        ? DMMVIDPNTARGET::DMMVIDPNTARGET(
            v59,
            (struct DMMVIDPNTARGETSET *const)*v7,
            (struct DMMVIDEOPRESENTTARGET *const)v31)
        : 0LL;
    auto_ptr<DMMVIDPNTARGET>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v74,
      (__int64 (__fastcall ***)(_QWORD, __int64))v60);
    v61 = v74;
    if ( !v74 )
      break;
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v74 + 8))((char *)v74 + 64) )
    {
      WdLogSingleEntry1(7LL, this);
      v5 = this;
      *((_DWORD *)this + 20) = *((_DWORD *)v61 + 18);
      auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
      goto LABEL_69;
    }
    v62 = (_QWORD *)*v7;
    v66 = v61;
    v74 = 0LL;
    v63 = DMMVIDPNTARGETSET::AddTarget(v62, (__int64 (__fastcall ****)(_QWORD, __int64))&v66);
    if ( v63 < 0 )
    {
      WdLogSingleEntry0(2LL);
      *((_DWORD *)this + 20) = v63;
      goto LABEL_99;
    }
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
LABEL_50:
    v35 = (_QWORD *)v31[1];
    v31 = v35 - 1;
    if ( v35 == v23 )
      v31 = 0LL;
    if ( !v31 )
      goto LABEL_53;
  }
  WdLogSingleEntry0(6LL);
  *((_DWORD *)this + 20) = -1073741801;
LABEL_99:
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))&v74);
LABEL_102:
  if ( v15 )
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  return this;
}
