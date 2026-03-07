__int64 __fastcall CWICBitmapRealization::ReleaseCopyBuffers(CWICBitmapRealization *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 9);
  if ( v1 )
  {
    v9 = 0LL;
    v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 4LL));
    v3 = (**v2)(v2, &IID_IWICDecoderBitmapSource, &v9);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x7Fu, 0LL);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/WICBitmapRealization.h",
        (const char *)(unsigned int)v3);
    }
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x85u, 0LL);
  }
  return v4;
}
