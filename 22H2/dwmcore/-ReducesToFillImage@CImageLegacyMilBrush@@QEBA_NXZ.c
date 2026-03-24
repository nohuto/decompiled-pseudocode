/*
 * XREFs of ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x1800D439C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180069D3C (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdx
  bool v2; // bl
  __int64 *v3; // rcx
  __int64 v4; // rax
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 30);
  v2 = 0;
  if ( v1
    && *((float *)this + 30) == 1.0
    && !*((_DWORD *)this + 39)
    && *((_DWORD *)this + 38) == 1
    && *((float *)this + 40) == 0.0
    && *((float *)this + 41) == 0.0
    && *((float *)this + 42) == 1.0
    && *((float *)this + 43) == 1.0
    && *((_DWORD *)this + 52) == 1
    && !*((_QWORD *)this + 16)
    && !*((_QWORD *)this + 18)
    && !*((_QWORD *)this + 17)
    && !*((_QWORD *)this + 25)
    && !*((_QWORD *)this + 22) )
  {
    v3 = (__int64 *)(v1 + 56 + *(int *)(*(_QWORD *)(v1 + 56) + 8LL));
    v4 = *v3;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(v3, &v8) >= 0 )
    {
      v7 = 0;
      v2 = (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, v6, 0LL) == 0;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
  return v2;
}
