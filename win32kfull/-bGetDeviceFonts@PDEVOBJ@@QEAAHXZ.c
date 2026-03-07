__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  __int64 v1; // r8
  signed __int32 v3; // ett
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
  do
    v3 = *(_DWORD *)(v1 + 40);
  while ( v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 40), v3 | 0x40, v3) );
  PDEVOBJ::cFonts(this);
  if ( *(_DWORD *)(*(_QWORD *)this + 2072LL) )
  {
    DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v5);
    if ( !(unsigned int)DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)v5, this) )
      *(_DWORD *)(*(_QWORD *)this + 2072LL) = 0;
  }
  return 1LL;
}
