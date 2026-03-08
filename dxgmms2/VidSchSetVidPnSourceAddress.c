/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x1C0108970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C002C96C (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(
        _QWORD *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 400];
  if ( *(_DWORD *)(v4 + 44328) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[382];
    if ( v5 )
      v5(a1[390]);
  }
  v6 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 2920LL), a2);
  if ( *(_DWORD *)(v4 + 44328) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[384];
    if ( v7 )
      v7(a1[390]);
  }
  return v6;
}
