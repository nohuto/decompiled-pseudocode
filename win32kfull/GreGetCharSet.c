__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rdx
  struct LFONT *v2; // rbx
  Gre::Base *v3; // rcx
  unsigned int v4; // ebx
  struct LFONT *v6; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTL v7; // [rsp+38h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v11 = 0;
  v7 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  v1 = v9[0];
  if ( v9[0] )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9[0] + 976LL) + 152LL) & 0x10) == 0 )
    {
LABEL_10:
      v4 = *(_DWORD *)(*(_QWORD *)(v1 + 976) + 4LL);
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
      return v4;
    }
    v12 = *(_QWORD *)(v9[0] + 48LL);
    if ( (*(_DWORD *)(v12 + 40) & 0x40) == 0 )
    {
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v12);
      v1 = v9[0];
    }
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v6, *(struct HLFONT__ **)(*(_QWORD *)(v1 + 976) + 296LL), (struct PDEVOBJ *)&v12);
    v2 = v6;
    if ( v6 )
    {
      if ( (int)UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v8 = *((_QWORD *)Gre::Base::Globals(v3) + 6);
        GreAcquireSemaphore(v8);
        LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v6, (struct XDCOBJ *)v9, &v11, &v7, &v10, 0);
        SEMOBJ::vUnlock((SEMOBJ *)&v8);
        if ( v2 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
        v1 = v9[0];
        goto LABEL_10;
      }
      if ( v2 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return 0x10000LL;
}
