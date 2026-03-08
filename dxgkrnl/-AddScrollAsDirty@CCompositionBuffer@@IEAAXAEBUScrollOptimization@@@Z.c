/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C007C860
 * Callers:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0001720 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0011F40 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 *v6; // rcx
  bool v7; // sf
  __int64 v8; // rax
  void (*v9)(void); // rax
  void (***v10)(void); // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = (*(__int64 (__fastcall **)(char *, void (****)(void)))(*((_QWORD *)Global + 38069) + 40LL))((char *)a2 + 4, &v10);
  v6 = (__int64 *)*((_QWORD *)this + 35);
  v7 = v5 < 0;
  v8 = *v6;
  if ( v7 )
  {
    v9 = *(void (**)(void))(v8 + 32);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, void (***)(void), __int64))(v8 + 48))(v6, v10, 2LL);
    v9 = **v10;
  }
  v9();
}
