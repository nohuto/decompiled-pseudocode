bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 *v6; // [rsp+58h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 149) )
  {
    v5 = 0LL;
    CD2DBitmap::TryFastWarpLock((CD2DBitmap *)((char *)this - 96), &v6, &v4, &v3, &v5);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v5);
  }
  return *((_BYTE *)this + 148);
}
