/*
 * XREFs of VirtualizeFullKeyboardStates @ 0x1C0218E00
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     Feature_KeyboardInputVirtualization__private_ReportDeviceUsage @ 0x1C00E1194 (Feature_KeyboardInputVirtualization__private_ReportDeviceUsage.c)
 *     PpiFromProcessId @ 0x1C01544D0 (PpiFromProcessId.c)
 *     ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C02265A4 (-SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

char __fastcall VirtualizeFullKeyboardStates(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  const struct CONTAINER_ID *v13; // rdx
  unsigned int v14; // eax
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

  Feature_KeyboardInputVirtualization__private_ReportDeviceUsage();
  LOBYTE(v6) = isRootPartition(v3, v2, v4, v5);
  if ( (_BYTE)v6 )
  {
    v11 = SGDGetUserSessionState(v8, v7, v9, v10);
    LOBYTE(v6) = CIVChannel::ContainerConnected(*(_DWORD *)(*(_QWORD *)(v11 + 12672) + 1360LL));
    if ( (_BYTE)v6 )
    {
      v12 = PpiFromProcessId(a1);
      if ( v12 )
        v14 = *(_DWORD *)(v12 + 1072);
      else
        v14 = 0;
      v16 = v14;
      if ( (_WORD)v14 || (v6 = HIWORD(v14), (_WORD)v6) )
        LOBYTE(v6) = IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
                       (IVRootDeliver::Keyboard::Detail *)&v16,
                       v13);
    }
  }
  return v6;
}
