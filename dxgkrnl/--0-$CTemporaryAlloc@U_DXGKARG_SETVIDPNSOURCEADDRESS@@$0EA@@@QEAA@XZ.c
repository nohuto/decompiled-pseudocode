/*
 * XREFs of ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0EA@@@QEAA@XZ @ 0x1C004092C
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C0176944 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C01C78EC (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

_QWORD *__fastcall CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,64>(
        _QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)operator new[](0x840uLL, 0x4B677844u, 64LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x840uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
