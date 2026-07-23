/*
 * XREFs of PopPluginRequestDeviceIdleConstraints @ 0x14056E228
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDiagTraceFxDeviceIdleConstraints @ 0x140572684 (PopDiagTraceFxDeviceIdleConstraints.c)
 */

char __fastcall PopPluginRequestDeviceIdleConstraints(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  __int64 v4; // r9
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]

  v12 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 == PopFxProcessorPlugin )
  {
    if ( v4 )
    {
      v8 = *(_QWORD *)(a1 + 72);
      v10[1] = a2;
      v10[0] = v8;
      v11 = a3;
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v4 + 96))(26LL, v10);
      if ( v3 )
        PopDiagTraceFxDeviceIdleConstraints(a1, a2, a3);
    }
  }
  return v3;
}
