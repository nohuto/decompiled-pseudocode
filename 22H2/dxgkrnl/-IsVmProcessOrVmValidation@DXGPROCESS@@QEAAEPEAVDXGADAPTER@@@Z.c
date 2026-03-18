/*
 * XREFs of ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000736C
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C018F4E4 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C019F070 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0004A80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

char __fastcall DXGPROCESS::IsVmProcessOrVmValidation(DXGPROCESS *this, struct DXGADAPTER *a2)
{
  struct DXGGLOBAL *Global; // rax
  char v4; // bl

  if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
    return 1;
  Global = DXGGLOBAL::GetGlobal();
  v4 = 0;
  if ( *((_BYTE *)Global + 1691) )
  {
    if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1684), a2) )
      return 1;
  }
  return v4;
}
