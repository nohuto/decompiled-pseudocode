/*
 * XREFs of ?PopulatePanelId@CInputSpaceRegion@@QEAAXXZ @ 0x1C00A1A54
 * Callers:
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C00A0138 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C00A0DFC (-MapToDisplayPath@CInputSpaceRegion@@QEAAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     RIMGetPanelId @ 0x1C00A1AB8 (RIMGetPanelId.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputSpaceRegion::PopulatePanelId(CInputSpaceRegion *this)
{
  __int64 v1; // rdx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((unsigned int *)this + 11);
  Object = 0LL;
  v3 = 0LL;
  if ( (int)((__int64 (__fastcall *)(char *, __int64, PVOID *, __int64 *))qword_1C0296828)(
              (char *)this + 36,
              v1,
              &Object,
              &v3) >= 0 )
  {
    RIMGetPanelId(v3, (char *)this + 48);
    ObfDereferenceObject(Object);
  }
}
