/*
 * XREFs of DpiCallDrvSetBacklightOptimizationLevel @ 0x1C039DBB4
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C039C3C0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C039D4C0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C004006C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiCallDrvSetBacklightOptimizationLevel(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4396LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 72))(*(_QWORD *)(a2 + 8), a3);
  v9 = v6;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v13 = v6;
    v12 = a3;
    v11 = v5;
    McTemplateK0pqqq_EtwWriteTransfer(v7, &EventBacklightOptimizationLevel, v8, a1, v11, v12, v13);
  }
  return v9;
}
