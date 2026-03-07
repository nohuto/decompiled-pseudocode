__int64 __fastcall CD3DDevice::EnqueueSetEvent(CD3DDevice *this, void *a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_DWORD *)this + 272);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v2, 0xC8Bu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 67) + 128LL))(*((_QWORD *)this + 67), a2);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0xC8Du, 0LL);
    else
      *((_BYTE *)this + 1507) = 0;
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v2, 0);
}
