/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180027564
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180027BB0 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18000987C (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180013630 (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180027A5C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x180093968 (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  unsigned int i; // edi
  CWindowData *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v2 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v5 )
    CBaseObject::Release(v5);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v10 = *((_QWORD *)this + 4);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 40);
    else
      v11 = 0LL;
    McTemplateU0pp_EtwEventWriteTransfer(v5, &RemoveSecondaryWindowRepresentation_Destroy, this, v11);
  }
  v7 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v7 )
    CWindowData::RemoveSecondaryWindowRepresentation(v7, this);
  v8 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v9 )
    CBaseObject::Release(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 128);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
