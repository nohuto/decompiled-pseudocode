/*
 * XREFs of ?ReleaseCopyBuffers@CWICBitmapWrapper@@UEAAJXZ @ 0x18027E9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::ReleaseCopyBuffers(CWICBitmapWrapper *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  if ( v1 )
  {
    v8 = 0LL;
    v2 = (**v1)(v1, &IID_IWICDecoderBitmapSource, &v8);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x96u, 0LL);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"onecoreuap\\windows\\dwm\\common\\bitmaps\\WICBitmapWrapper.h",
        (const char *)(unsigned int)v2);
    }
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2003292412, 0x9Cu, 0LL);
  }
  return v3;
}
