/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C03A2598
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C03A1FD4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkAcquireAdapterCoreSync @ 0x1C01801F4 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0180708 (DxgkReleaseAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01E67E0 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C03A926C (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DpiAcpiProcessEventRequests(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r8
  bool v9; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  if ( (a2 & 1) != 0 || *(_DWORD *)(a3 + 24) == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 6u, (__int64)a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3912), 1, a3);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 3912), DXGK_AVIR_HOTKEY, 0LL, 0, a4, v9);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3912), 1u, v8);
  }
  return result;
}
