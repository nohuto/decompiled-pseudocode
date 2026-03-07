__int64 __fastcall DXGSESSIONDATA::VailGuestConnect(DXGSESSIONDATA *this)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  DXGVAILGUESTOBJECT *v4; // rdi
  __int64 v5; // rdx
  const struct _GUID *v6; // r8
  int v7; // eax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGSESSIONDATA *)((char *)this + 18904), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( *((_QWORD *)this + 2370) )
  {
    ++*((_DWORD *)this + 4738);
  }
  else
  {
    v3 = operator new[](0x60uLL, 0x4B677844u, 256LL);
    v4 = (DXGVAILGUESTOBJECT *)v3;
    if ( v3 )
    {
      *(_QWORD *)v3 = this;
      *(_DWORD *)(v3 + 8) = 1;
      *(_QWORD *)(v3 + 24) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 40) = 0LL;
      *(_DWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 52) = -1;
      *(_DWORD *)(v3 + 56) = 59;
      *(_QWORD *)(v3 + 72) = 0LL;
      *(_QWORD *)(v3 + 80) = 0LL;
      *(_QWORD *)(v3 + 88) = 0LL;
      ExInitializeRundownProtection((PEX_RUNDOWN_REF)(v3 + 64));
      *((_QWORD *)this + 2370) = v4;
      v7 = DXGVAILGUESTOBJECT::Initialize(v4, v5, v6);
      v2 = v7;
      if ( v7 >= 0 )
      {
        *((_DWORD *)this + 4738) = 1;
      }
      else
      {
        WdLogSingleEntry1(3LL, v7);
        DXGVAILGUESTOBJECT::ReleaseReference(*((DXGVAILGUESTOBJECT **)this + 2370));
        *((_QWORD *)this + 2370) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)this + 2370) = 0LL;
      v2 = -1073741801;
      WdLogSingleEntry1(3LL, -1073741801LL);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v2;
}
