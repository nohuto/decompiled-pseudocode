__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r15
  int v13; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rbp
  int v24; // edi
  unsigned int v26; // ebx
  DMMVIDPNTOPOLOGY *v27; // rcx
  __int64 v28; // rdi
  unsigned int PathSourceFromTarget; // eax
  __int64 v30; // rax
  _QWORD *v31; // r15
  __int64 v32; // rax
  UINT cx; // r12d
  UINT cy; // r13d
  int v35; // r15d
  struct DMMVIDPNTARGETMODESET *v36; // rax
  DMMVIDPNSOURCEMODE *v37; // rbx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // [rsp+80h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v43; // [rsp+88h] [rbp+10h] BYREF
  struct DMMVIDPNTARGETMODESET *v44; // [rsp+90h] [rbp+18h] BYREF
  __int64 v45; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v42 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)a2 + 8, 1u);
  auto_rc<DMMVIDPN>::reset(&v42, (__int64)a2);
  v4 = v42;
  v45 = v42;
  v5 = Set<DMMVIDPN>::FindByValue((__int64)this + 136, v42);
  v7 = v6 + 8;
  if ( !DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::ContainsByReference(v6 + 8, v5) )
  {
    WdLogSingleEntry2(2LL, v4, this);
    v2 = -1071774973;
    goto LABEL_21;
  }
  v9 = (_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v10 + 8) != v8 + 8 || (v11 = *(_QWORD **)(v8 + 16), (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = v4 + 96;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*(_QWORD *)(v7 + 32);
  if ( *(_QWORD *)(v4 + 136) )
  {
    v13 = *((_DWORD *)this + 138);
    if ( v13 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v4 + 96), v13) )
    {
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      v26 = *((_DWORD *)this + 138);
      v27 = (DMMVIDPNTOPOLOGY *)(v4 + 96);
      v28 = *((_QWORD *)this + 1);
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v27, v26);
      v15 = 0LL;
      v16 = v26;
      v17 = PathSourceFromTarget;
      v18 = v28;
      goto LABEL_11;
    }
    MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((DMMVIDPNTOPOLOGY *)(v4 + 96));
    if ( !MostImportantPath )
      goto LABEL_12;
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    v15 = 2LL;
    v16 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
    v17 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    v16 = 0xFFFFFFFFLL;
    v15 = 3LL;
    v17 = 0xFFFFFFFFLL;
  }
  v18 = *((_QWORD *)this + 1);
LABEL_11:
  ADAPTER_DISPLAY::SetPrimaryPath(v18, v17, v16, v15);
LABEL_12:
  v19 = v12 + 24;
  v20 = *(_QWORD *)(v12 + 24);
  if ( v20 == v12 + 24 )
    v21 = 0LL;
  else
    v21 = (_QWORD *)(v20 - 8);
  v22 = *(_QWORD *)(v12 + 40);
  v23 = v21;
  if ( v22 == 1 )
  {
    if ( !v21 )
      WdLogSingleEntry0(1LL);
    v24 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) == 15 )
      v24 = 8;
  }
  else
  {
    if ( v22 != 2 )
    {
      if ( !v21 )
        goto LABEL_20;
      while ( *(_DWORD *)(*(_QWORD *)(v23[12] + 96LL) + 84LL) != 15 )
      {
        v32 = v23[1];
        v23 = (_QWORD *)(v32 - 8);
        if ( v32 == v19 )
          v23 = 0LL;
        if ( !v23 )
          goto LABEL_20;
      }
      v24 = 1;
LABEL_49:
      cx = 0;
      cy = 0;
      v35 = 0;
      if ( !v23 )
        WdLogSingleEntry0(1LL);
      v36 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v23[11]);
      v44 = v36;
      v37 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v36 + 18);
      if ( v37 && *((_DWORD *)v37 + 18) != 2 )
      {
        cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v36 + 18))->PrimSurfSize.cx;
        cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v37)->PrimSurfSize.cy;
      }
      v43 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v23[12]);
      v38 = *((_QWORD *)v43 + 18);
      if ( v38 )
      {
        v39 = *(_DWORD *)(v38 + 120);
        v40 = *(_QWORD *)(v38 + 92);
        v41 = (v39 >> 3) & 0x3F;
        if ( v41 )
        {
          LODWORD(v42) = v40;
          HIDWORD(v42) = v41 * HIDWORD(v40);
          v40 = v42;
        }
        v35 = DMMVIDEOSIGNALMODE::DivideAndRound((unsigned int)v40, HIDWORD(v40));
      }
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      DpiMiracastHandleDisplayConfigChange(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
        v24,
        cx,
        cy,
        v35);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v43, 0LL);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v44, 0LL);
      goto LABEL_20;
    }
    v30 = v21[1];
    v31 = (_QWORD *)(v30 - 8);
    if ( v30 == v19 )
      v31 = 0LL;
    if ( !v31 )
      WdLogSingleEntry0(1LL);
    if ( *(_DWORD *)(*(_QWORD *)(v21[12] + 96LL) + 84LL) != 15 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v31[12] + 96LL) + 84LL) != 15 )
        goto LABEL_20;
      v23 = v31;
    }
    v24 = 2;
    if ( v21[11] != v31[11] )
      v24 = 4;
  }
  if ( v24 )
    goto LABEL_49;
LABEL_20:
  v42 = 0LL;
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, v45);
LABEL_21:
  auto_rc<DMMVIDPN>::reset(&v42, 0LL);
  return v2;
}
