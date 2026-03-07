__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // ebx
  HANDLE Event; // rax
  __int64 v9; // rcx
  HANDLE v10; // rax
  bool v11; // zf
  int Device; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  *((struct _LUID *)this + 22) = a2;
  *((_DWORD *)this + 52) = -6;
  *((_DWORD *)this + 53) = -6;
  v3 = *((_QWORD *)this + 2);
  *((struct _LUID *)this + 24) = a2;
  *((struct _LUID *)this + 25) = a2;
  *((_DWORD *)this + 54) = (_DWORD)this;
  v4 = *(_QWORD *)(v3 + 264);
  *((_QWORD *)this + 21) = v4;
  if ( !v4 )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x54u, 0LL);
    return v5;
  }
  *((_DWORD *)this + 58) = 87;
  v6 = (_QWORD *)((char *)this + 256);
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v15 = 92;
      goto LABEL_11;
    }
    v10 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v11 = *v6 == 0LL;
    v6[1] = v10;
    if ( v11 )
    {
      v15 = 94;
LABEL_11:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, v15, 0LL);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 23);
  Device = CDeviceManager::GetDevice(
             (CDeviceManager *)&g_DeviceManager,
             *(struct _LUID *)((char *)this + 176),
             (struct CD3DDevice **)this + 23);
  v5 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, Device, 0x61u, 0LL);
  return v5;
}
