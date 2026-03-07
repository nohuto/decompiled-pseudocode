__int64 __fastcall dwGetFontLanguageInfo(DC **a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  Gre::Base *v5; // rcx
  struct PFE *v6; // rax
  __int64 v7; // rcx
  struct _POINTL v9; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+28h] BYREF
  struct LFONT *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0x8000;
  v3 = *((_QWORD *)*a1 + 6);
  v14 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v14);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v13, *(struct HLFONT__ **)(*((_QWORD *)*a1 + 122) + 296LL), (struct PDEVOBJ *)&v14);
    if ( v13 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v4) >= 0 )
      {
        v10 = *((_QWORD *)Gre::Base::Globals(v5) + 6);
        GreAcquireSemaphore(v10);
        v12 = 0;
        v11 = 0;
        v9 = 0LL;
        v6 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v13, a1, &v12, &v9, &v11, 0);
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 + 4);
          v2 = *(_DWORD *)(v7 + 164) != 0 ? 8 : 0;
          if ( (*(_DWORD *)(v7 + 48) & 0x80000001) != 0 )
            v2 |= 0x40000u;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v10);
      }
      if ( v13 )
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v13);
    }
  }
  return v2;
}
