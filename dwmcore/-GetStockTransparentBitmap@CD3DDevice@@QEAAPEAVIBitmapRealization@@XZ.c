struct IBitmapRealization *__fastcall CD3DDevice::GetStockTransparentBitmap(CD3DDevice *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 135) && (int)CD3DDevice::EnsureBlackBitmapTargets(this) < 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 135);
  if ( v3 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  return (struct IBitmapRealization *)v1;
}
