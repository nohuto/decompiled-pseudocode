/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C03417F0
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01A6B80 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C035FB20 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C035D9A0 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 74);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
      DxgkCompositionObject::Release(*((DxgkCompositionObject **)this + 74));
      *((_QWORD *)this + 74) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 74) = a2;
      DxgkCompositionObject::AddRef(a2);
      DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 74), *((struct _EPROCESS **)this + 7));
    }
  }
}
