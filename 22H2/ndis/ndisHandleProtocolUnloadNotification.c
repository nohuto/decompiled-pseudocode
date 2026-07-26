/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C0076CD4
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001D814 (ndisHandleUModePnPOp.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012F18 (WPP_RECORDER_SF_Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A1C8 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0120D74 (-ndisInvokeUninstall@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C013B688 (-ndisReferenceProtocolByName@@YAJPEBU_UNICODE_STRING@@PEAPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_R.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  int v2; // eax
  int v3; // edx
  int v4; // r9d
  struct _NDIS_PROTOCOL_BLOCK *v5; // rbx
  unsigned int v6; // edi
  void (*UnloadHandler)(void); // rax
  struct _NDIS_PROTOCOL_BLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x15u,
      (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
      &SourceString->Length);
  v2 = ndisReferenceProtocolByName(SourceString, &v9, 0, PTREF_UNLOADNOTIFY);
  v5 = v9;
  v6 = v2;
  if ( v2 >= 0 )
  {
    ndisDereferenceProtocol(v9, v3, 5u, v4);
    UnloadHandler = v5->UnloadHandler;
    if ( UnloadHandler )
    {
      UnloadHandler();
    }
    else if ( v5->UninstallHandler )
    {
      ndisInvokeUninstall(v5);
    }
    else
    {
      v6 = -1073741823;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x16u,
      (struct _GUID *)&WPP_8b0ab799cd8539b5ce5df5ce3671a55c_Traceguids,
      v5);
  return v6;
}
