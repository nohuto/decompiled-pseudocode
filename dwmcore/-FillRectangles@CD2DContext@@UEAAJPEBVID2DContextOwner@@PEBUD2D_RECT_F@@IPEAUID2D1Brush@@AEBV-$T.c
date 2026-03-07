__int64 __fastcall CD2DContext::FillRectangles(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  __int64 v8; // rdi
  __int64 v12; // r8
  __int64 v13; // rbx

  v8 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a8, &a7, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0ffff_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT,
      v12,
      (float)a6[1],
      COERCE_UNSIGNED_INT((float)a6[2]),
      COERCE_UNSIGNED_INT((float)a6[3]));
  if ( (_DWORD)v8 )
  {
    v13 = v8;
    do
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 25) + 136LL))(
        *((_QWORD *)this + 25),
        a3,
        a5);
      a3 += 16LL;
      --v13;
    }
    while ( v13 );
  }
  return 0LL;
}
