/*
 * XREFs of ?CreateD2DInk@CD2DContext@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180282E40
 * Callers:
 *     ?CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x18022BE34 (-CreateResource@CInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180074DD0 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802994EC (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD2DContext::CreateD2DInk(
        CD2DContext *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  __int64 v4; // rax
  bool v6; // zf
  __int64 v7; // rcx
  int v10; // ebx
  int v11; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct ID2D1InkStyle *v15; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1Ink *v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = 0LL;
  v4 = (__int64)this + 1072;
  v15 = 0LL;
  v6 = this == 0LL;
  v7 = 1088LL;
  if ( v6 )
    v4 = 1088LL;
  v10 = *(_DWORD *)v4;
  if ( *(int *)v4 < 0 )
  {
    v12 = *(_DWORD *)v4;
    v14 = 337;
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_STYLE_PROPERTIES *, struct ID2D1InkStyle **))(**((_QWORD **)this + 25) + 768LL))(
            *((_QWORD *)this + 25),
            a3,
            &v15);
    v10 = v11;
    if ( v11 < 0 )
    {
      v14 = 339;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D1_INK_POINT *, struct ID2D1Ink **))(**((_QWORD **)this + 25)
                                                                                                 + 760LL))(
              *((_QWORD *)this + 25),
              a2,
              &v16);
      v10 = v11;
      if ( v11 < 0 )
      {
        v14 = 341;
      }
      else
      {
        v11 = CD2DInk::Create(*((struct CD2DResourceManager **)this + 21), v16, v15, a4);
        v10 = v11;
        if ( v11 >= 0 )
          goto LABEL_13;
        v14 = 343;
      }
    }
    v12 = v11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v12, v14, 0LL);
LABEL_13:
  if ( v16 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v15 + 16LL))(v15);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v10, 0);
}
