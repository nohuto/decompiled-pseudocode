bool __fastcall CImageLegacyMilBrush::ReducesToFillImage(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdx
  bool v2; // bl
  __int64 *v3; // rcx
  __int64 v4; // rax
  _BYTE v6[64]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 23);
  v2 = 0;
  if ( v1
    && *((float *)this + 16) == 1.0
    && !*((_DWORD *)this + 25)
    && *((_DWORD *)this + 24) == 1
    && *(float *)_mm_loadu_si128((const __m128i *)((char *)this + 104)).m128i_i32 == 0.0
    && *((float *)this + 27) == 0.0
    && *((float *)this + 28) == 1.0
    && *((float *)this + 29) == 1.0
    && *((_DWORD *)this + 34) == 1
    && !*((_QWORD *)this + 9)
    && !*((_QWORD *)this + 11)
    && !*((_QWORD *)this + 10)
    && !*((_QWORD *)this + 22)
    && !*((_QWORD *)this + 21) )
  {
    v3 = (__int64 *)(v1 + 64 + *(int *)(*(_QWORD *)(v1 + 64) + 8LL));
    v4 = *v3;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 64))(v3, &v8) >= 0 )
    {
      v7 = 0;
      v2 = (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, v6, 0LL) == 0;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
  return v2;
}
