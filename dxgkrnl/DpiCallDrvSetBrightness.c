/*
 * XREFs of DpiCallDrvSetBrightness @ 0x1C039DC30
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C039C3C0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C039D330 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C004006C (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r9
  __int16 v7; // ax
  __int64 v8; // r8
  _QWORD *v9; // rax
  int v10; // esi
  __int64 (__fastcall *v11)(__int64, __int64, __int64, _QWORD *); // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_WORD *)(v3 + 4682);
  v8 = v3 + 4680;
  if ( v7 == 2 )
    v5 = (_QWORD *)(v3 + 4680);
  if ( v7 == 1 )
    v6 = (_QWORD *)(v3 + 4680);
  v9 = v5 + 4;
  if ( (!v5 || !*v9) && (!v6 || !v6[4]) )
    return 3221225659LL;
  v10 = *(unsigned __int8 *)(v3 + 4400);
  if ( v5 && *v9 )
  {
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v5[5];
    v12 = v5[1];
  }
  else
  {
    v11 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v6[5];
    v12 = v6[1];
  }
  LOBYTE(v3) = v2;
  v13 = v11(v12, v3, v8, v6);
  v16 = v13;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(v14, &EventBrightness, v15, a1, v10, v2, v13);
  return v16;
}
