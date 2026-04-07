/*
 * XREFs of ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800139F0
 * Callers:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800162C0 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A040 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180026EC0 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180012DF0 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180012E4C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012F9C (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800139B4 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013CB4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z @ 0x180013D20 (-GetIdealWindowRepresentation@CWindowData@@QEAAX_NPEAVCWindowRepresentation@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180014F08 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180015178 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180026538 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18008AA78 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnRepresentationUpdated(CSecondaryWindowRepresentation *this)
{
  unsigned int v2; // ebp
  CWindowData *v3; // rcx
  CWindowData **v4; // rsi
  char v5; // r14
  char v6; // r12
  int v7; // ecx
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  char v11; // r15
  CWindowData *v12; // rdx
  CWindowData *v13; // rdi
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  CWindowData *v17; // rcx
  CWindowData *v18; // rdi
  __int64 v19; // rcx
  CWindowData *v20; // rcx
  CWindowData *v21; // rdi
  __int64 v22; // rcx
  CVisual *v23; // rcx
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // eax
  __int128 v28; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 160) )
    return v2;
  v4 = (CWindowData **)((char *)this + 64);
  v5 = 1;
  v28 = *((_OWORD *)this + 4);
  if ( (*((_DWORD *)this + 10) & 0x800) != 0 )
  {
    *((_DWORD *)this + 18) = 3;
    *v4 = v3;
  }
  else
  {
    CWindowData::GetIdealWindowRepresentation(
      v3,
      (*((_DWORD *)this + 10) & 0x20) != 0,
      (CSecondaryWindowRepresentation *)((char *)this + 64));
  }
  v6 = 0;
  if ( (CWindowData *)v28 != *v4 || (v7 = *((_DWORD *)this + 18), DWORD2(v28) != v7) )
  {
    CSecondaryWindowRepresentation::ReleaseAllResources(this);
    v6 = 1;
    if ( *((_DWORD *)this + 18) == 3 && CWindowData::IsImmersiveWindow(*((CWindowData **)this + 4)) )
    {
      v26 = (CBaseObject *)*((_QWORD *)this + 47);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *((_QWORD *)this + 47) = 0LL;
      }
      v27 = CImmersiveWindowIconic::Create(
              *((struct CWindowData **)this + 4),
              *((_DWORD *)this + 41),
              (enum DEVICE_SCALE_FACTOR)*((_DWORD *)this + 30),
              (*((_DWORD *)this + 10) & 0x1000) != 0,
              (struct CImmersiveWindowIconic **)this + 47);
      v2 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x1C4u);
        return v2;
      }
    }
    v9 = CWindowData::ChangeSecondaryWindowRepresentation(*((CWindowData **)this + 4), this, (CWindowData **)&v28, v8);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1C7u);
      return v2;
    }
    v10 = CSecondaryWindowRepresentation::OnSourceConstantAlphaUpdated(this);
    v2 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1C8u);
      return v2;
    }
    v7 = *((_DWORD *)this + 18);
  }
  v11 = *((_BYTE *)this + 336);
  v12 = 0LL;
  v13 = *v4;
  v14 = v7 - 1;
  if ( !v14 )
    goto LABEL_33;
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_15;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v12 = *(CWindowData **)(*((_QWORD *)v13 + 53) + 80LL);
      goto LABEL_15;
    }
    goto LABEL_33;
  }
  v16 = *((_QWORD *)v13 + 52);
  if ( !v16 )
  {
LABEL_33:
    v12 = v13;
    goto LABEL_15;
  }
  v12 = *(CWindowData **)(v16 + 32);
LABEL_15:
  if ( !CWindowData::IsSimpleClientArea(v12) || *((_QWORD *)this + 6) )
    goto LABEL_39;
  v17 = 0LL;
  v18 = *v4;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      goto LABEL_38;
    case 2:
      v19 = *((_QWORD *)v18 + 52);
      if ( v19 )
      {
        v17 = *(CWindowData **)(v19 + 32);
        break;
      }
      goto LABEL_38;
    case 3:
      if ( !CWindowData::IsImmersiveWindow(*v4) )
      {
        v17 = *(CWindowData **)(*((_QWORD *)v18 + 53) + 80LL);
        break;
      }
LABEL_38:
      v17 = v18;
      break;
  }
  if ( CWindowData::IsImmersiveWindow(v17) )
LABEL_39:
    v5 = 0;
  *((_BYTE *)this + 336) = v5;
  if ( !v6 )
  {
    if ( !v11 && !v5 )
      return v2;
    v25 = (CBaseObject *)*((_QWORD *)this + 38);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( (*((_BYTE *)this + 40) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD, CSecondaryWindowRepresentation *))(**((_QWORD **)this + 21) + 16LL))(
      *((_QWORD *)this + 21),
      this);
  CSecondaryWindowRepresentation::SetDirtyFlags(this, 4);
  v20 = 0LL;
  v21 = *v4;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_34;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_29;
    if ( !CWindowData::IsImmersiveWindow(*v4) )
    {
      v20 = *(CWindowData **)(*((_QWORD *)v21 + 53) + 80LL);
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v22 = *((_QWORD *)v21 + 52);
  if ( !v22 )
  {
LABEL_34:
    v20 = v21;
    goto LABEL_29;
  }
  v20 = *(CWindowData **)(v22 + 32);
LABEL_29:
  v23 = (CVisual *)*((_QWORD *)v20 + 48);
  if ( v23 )
    CVisual::PropagateDirtyChildren(v23);
  CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(this);
  return v2;
}
