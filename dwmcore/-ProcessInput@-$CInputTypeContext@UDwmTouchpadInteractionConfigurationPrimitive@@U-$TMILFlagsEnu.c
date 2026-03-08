/*
 * XREFs of ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801AC250
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AC330 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801AA4DC (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
        _QWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // edi
  __int64 v8; // rcx
  int v9; // ecx
  _BYTE v11[64]; // [rsp+30h] [rbp-78h] BYREF

  if ( *a1 )
  {
    if ( (*(_BYTE *)(a3 + 12) & 4) == 0 && (*(_DWORD *)(a3 + 12) & 0x180000) == 0
      || (v7 = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
                 a1,
                 a2,
                 a4),
          v7 >= 0) )
    {
      v8 = *a1;
      *((_DWORD *)a1 + 36) = a2[2];
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v8 + 24LL))(v8, a3, a2 + 82);
      if ( v7 >= 0 )
      {
        v9 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a1 + 40LL))(*a1, v11) + 20);
        if ( v9 )
          *((_DWORD *)a1 + 38) = v9;
        *((_BYTE *)a1 + 148) |= 0x20u;
      }
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return (unsigned int)v7;
}
