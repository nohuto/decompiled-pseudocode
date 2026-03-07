__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  char v1; // bp
  signed int v2; // edi
  __int64 v4; // r14
  __int64 v5; // rbx
  signed int LastError; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  signed int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 68);
  v2 = 0;
  v13 = 0;
  if ( *((_BYTE *)this + 142) )
  {
    *((_BYTE *)this + 144) = 0;
    goto LABEL_8;
  }
  v4 = *((_QWORD *)this + 15);
  if ( !*((_QWORD *)this + 44) )
  {
    v5 = *((_QWORD *)this + 51);
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(v4 + 24), v5, *((_QWORD *)this + 52), 1LL) )
      goto LABEL_4;
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180355948, 2u, v2, 0xFAu, 0LL);
    v12 = 775;
LABEL_17:
    v13 = v2;
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180353B28, 2u, v2, v12, 0LL);
    goto LABEL_5;
  }
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(v4 + 24), 0LL, qword_1803E7198, 1LL) )
  {
    v10 = GetLastError();
    v2 = v10;
    if ( v10 > 0 )
      v2 = (unsigned __int16)v10 | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180355948, 2u, v2, 0xE9u, 0LL);
    v12 = 779;
    goto LABEL_17;
  }
  v1 = 1;
LABEL_4:
  v13 = 0;
  *((_BYTE *)this + 142) = 1;
  if ( v1 )
LABEL_8:
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_5:
  TranslateDXGIorD3DErrorInContext(v2, 9, &v13);
  return v13;
}
