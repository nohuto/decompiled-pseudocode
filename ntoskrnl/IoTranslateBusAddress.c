/*
 * XREFs of IoTranslateBusAddress @ 0x14055DF60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     IopFindResourceHandlerInfo @ 0x140805DA0 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x140805E30 (IopFindLegacyBusDeviceNode.c)
 *     IopQueryResourceHandlerInterface @ 0x140805F74 (IopQueryResourceHandlerInterface.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall IoTranslateBusAddress(
        INTERFACE_TYPE InterfaceType,
        ULONG BusNumber,
        PHYSICAL_ADDRESS BusAddress,
        PULONG AddressSpace,
        PPHYSICAL_ADDRESS TranslatedAddress)
{
  int v5; // edi
  PULONG v6; // r14
  ULONG v9; // eax
  __int16 v10; // cx
  _QWORD *LegacyBusDeviceNode; // rsi
  __int64 v12; // r8
  char ResourceHandlerInfo; // r12
  PVOID v14; // r14
  int v15; // r15d
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  PULONG v19; // [rsp+50h] [rbp-21h]
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  int v21; // [rsp+68h] [rbp-9h]
  __int128 v22; // [rsp+70h] [rbp-1h] BYREF
  int v23; // [rsp+80h] [rbp+Fh]

  v5 = 0;
  v19 = AddressSpace;
  v23 = 0;
  v6 = AddressSpace;
  P = 0LL;
  v18 = 0LL;
  v21 = 0;
  v22 = 0LL;
  if ( KeGetCurrentIrql() || !IopRootDeviceNode )
  {
    *TranslatedAddress = BusAddress;
    return 1;
  }
  v9 = *AddressSpace;
  if ( *AddressSpace )
  {
    if ( v9 != 1 )
      return 0;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    LOBYTE(v9) = 3;
  }
  WORD1(v20) = v10;
  LOBYTE(v20) = v9;
  BYTE1(v20) = 3;
  *(PHYSICAL_ADDRESS *)((char *)&v20 + 4) = BusAddress;
  HIDWORD(v20) = 1;
  PpDevNodeLockTree(0LL);
  LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode((unsigned int)InterfaceType, BusNumber);
  if ( LegacyBusDeviceNode == IopRootDeviceNode )
  {
LABEL_21:
    PpDevNodeUnlockTree(0LL);
    if ( (unsigned __int8)v20 != 3 && (unsigned __int8)v20 != 7 )
    {
      if ( (unsigned __int8)v20 != 1 )
        return 0;
      v5 = 1;
    }
    *v6 = v5;
    *TranslatedAddress = *(PPHYSICAL_ADDRESS)((char *)&v20 + 4);
    return 1;
  }
  LOBYTE(v12) = v20;
  while ( 1 )
  {
    ResourceHandlerInfo = IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, v12, &v18);
    if ( !ResourceHandlerInfo )
    {
      if ( (int)IopQueryResourceHandlerInterface(1LL, LegacyBusDeviceNode[4], v12, &P) >= 0 )
      {
        v14 = P;
        goto LABEL_14;
      }
LABEL_18:
      LOBYTE(v12) = v20;
      goto LABEL_19;
    }
    if ( v18 )
      break;
LABEL_19:
    LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
    if ( LegacyBusDeviceNode == IopRootDeviceNode )
    {
LABEL_20:
      v6 = v19;
      goto LABEL_21;
    }
  }
  v14 = *(PVOID *)(v18 + 24);
LABEL_14:
  v15 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *))v14 + 4))(
          *((_QWORD *)v14 + 1),
          &v20,
          0LL,
          0LL,
          0LL,
          0LL,
          &v22);
  if ( !ResourceHandlerInfo )
  {
    (*((void (__fastcall **)(_QWORD))v14 + 3))(*((_QWORD *)v14 + 1));
    ExFreePoolWithTag(v14, 0);
  }
  if ( v15 >= 0 )
  {
    v21 = v23;
    v20 = v22;
    if ( v15 == 288 )
      goto LABEL_20;
    goto LABEL_18;
  }
  PpDevNodeUnlockTree(0LL);
  return 0;
}
