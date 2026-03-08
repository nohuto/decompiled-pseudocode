/*
 * XREFs of IoRevokeHandlesForProcess @ 0x140555EE0
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     IopGetDevicePDO @ 0x14023FFC4 (IopGetDevicePDO.c)
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x14055F0F8 (PnpDisableUserModeNotifications.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObDereferenceProcessHandleTable @ 0x1406EDFD0 (ObDereferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x14070F670 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, void *a2)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  _DWORD *DevicePDO; // rax
  void *v8; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  __int128 v15; // [rsp+70h] [rbp-90h]
  _OWORD v16[14]; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+190h] [rbp+90h] BYREF

  v14 = 0;
  v10[1] = 0;
  if ( !(unsigned __int8)PsIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v16, 0, sizeof(v16));
  v11 = 0LL;
  v10[0] = 48;
  memset(&v16[10], 0, 32);
  v13 = 576;
  v12 = a1;
  LOWORD(v16[10]) = 40;
  v15 = 0LL;
  LODWORD(v16[0]) = 14680072;
  LODWORD(v16[2]) = 1;
  *(_QWORD *)&v16[12] = 1LL;
  *(_QWORD *)&v16[12] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(v10, IoFileObjectType, 0LL, 0LL, 0, v16, *(_QWORD *)&v16[12], &v17);
  if ( LODWORD(v16[2]) == -1096154543 )
  {
    v6 = v16[1];
    if ( SLODWORD(v16[1]) >= 0 )
    {
      Object[0] = *((PVOID *)&v16[2] + 1);
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
