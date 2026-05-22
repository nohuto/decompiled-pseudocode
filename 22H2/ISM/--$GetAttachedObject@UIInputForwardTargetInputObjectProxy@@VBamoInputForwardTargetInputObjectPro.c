/*
 * XREFs of ??$GetAttachedObject@UIInputForwardTargetInputObjectProxy@@VBamoInputForwardTargetInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801763B0
 * Callers:
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x180176A38 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F2074 (--$As@UIInputForwardTargetInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<IInputForwardTargetInputObjectProxy,BamoInputForwardTargetInputObjectProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 400);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 408);
  v8 = 0LL;
  if ( v2 != v4 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 8),
                  &v8) >= 0 )
        break;
      v2 += 16LL;
    }
    while ( v2 != v4 );
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
    (**v6)(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return a2;
}
