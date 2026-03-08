/*
 * XREFs of imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C0020A10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_DDd @ 0x1C0017C28 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0023720 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfChildListAddOrUpdateChildDescriptionAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned int *v7; // r9
  FxChildList *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // eax
  unsigned int v11; // ebx
  unsigned int IdentificationDescriptionSize; // edx
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v8 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x21u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v8 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !AddressDescription )
  {
    if ( v8->m_AddressDescriptionSize )
    {
      v11 = -1073741808;
      v14 = 36;
      v15 = 2;
      goto LABEL_17;
    }
LABEL_13:
    _a3 = v8->m_IdentificationDescriptionSize;
    IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
    if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
    {
      v13 = 37;
      goto LABEL_10;
    }
    v11 = FxChildList::Add(v8, IdentificationDescription, AddressDescription, v7);
    if ( !m_Globals->FxVerboseOn )
      return v11;
    v14 = 38;
    v15 = 5;
LABEL_17:
    WPP_IFR_SF_qd(m_Globals, v15, 0xCu, v14, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v11);
    return v11;
  }
  _a3 = v8->m_AddressDescriptionSize;
  if ( _a3 )
  {
    IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
    if ( _a3 != AddressDescription->AddressDescriptionSize )
    {
      v13 = 35;
LABEL_10:
      v11 = -1073741808;
      WPP_IFR_SF_DDd(
        m_Globals,
        IdentificationDescriptionSize,
        0xCu,
        v13,
        WPP_FxChildListAPI_cpp_Traceguids,
        IdentificationDescriptionSize,
        _a3,
        -1073741808);
      return v11;
    }
    goto LABEL_13;
  }
  v11 = -1073741808;
  WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x22u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
  return v11;
}
