/*
 * XREFs of ?GetDeviceTexture@CAtlasTexture@@AEBAXPEAPEAVIDeviceTexture@@@Z @ 0x1800B78E4
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1800185F4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800B76E4 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAtlasTexture::GetDeviceTexture(CAtlasTexture *this, struct IDeviceTexture **a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, __int64, struct IDeviceTexture **); // rbx
  __int64 v6; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 16LL);
  v5 = *(void (__fastcall **)(__int64, __int64, struct IDeviceTexture **))(*(_QWORD *)(v4 + 8) + 48LL);
  v6 = (**(__int64 (__fastcall ***)(__int64, _BYTE *))v2)(v2, v7);
  v5(v4 + 8, v6, a2);
}
