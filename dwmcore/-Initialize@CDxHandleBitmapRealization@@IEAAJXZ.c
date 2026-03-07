__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = (*(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)this + 64LL))(this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180355960, 2u, v2, 0x40u, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 45) + 72LL))((char *)this + 360)
         || (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 45) + 32LL))((char *)this + 360) == 1
         || CDeviceManager::s_bXbox )
  {
    *((_BYTE *)this + 393) = 0;
  }
  return v4;
}
