__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // cl
  _DWORD *v8; // rdx
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-30h] BYREF
  Gre::Base *v11; // [rsp+90h] [rbp+20h] BYREF
  struct LFONT *v12; // [rsp+98h] [rbp+28h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( !a1 )
    return *(unsigned int *)(v3 + 18736);
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return 0LL;
  }
  v6 = SGDGetSessionState(v5);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v10, *(struct Gre::Full::SESSION_GLOBALS **)(v6 + 32));
  LODWORD(v12) = 4;
  HIDWORD(v12) = *(unsigned __int16 *)(v9[0] + 12LL);
  v11 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v11, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)&v12) )
    GreAcquireSemaphore(*((_QWORD *)v11 + 63));
  if ( !v11 )
    goto LABEL_26;
  v7 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 15) + 32LL) + 44LL);
  if ( (((v7 + 0x80) & 0xF6) != 0 || v7 == -119) && v7 != -122 )
  {
    if ( v7 )
    {
      v8 = (_DWORD *)(v3 + 18736);
      if ( v7 == -1 )
      {
        if ( (*(_DWORD *)(v3 + 18736) & 1) != 0 )
          goto LABEL_23;
        goto LABEL_14;
      }
    }
    else
    {
      v8 = (_DWORD *)(v3 + 18736);
      if ( (*(_DWORD *)(v3 + 18736) & 2) != 0 )
        goto LABEL_23;
    }
    if ( v7 == 2 && (*v8 & 4) != 0 )
    {
LABEL_23:
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v12, *(struct HLFONT__ **)(v9[0] + 1744LL), 0LL);
      if ( v12 )
      {
        if ( (*((_BYTE *)v12 + 301) & 0x40) == 0 )
        {
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
          v2 = 1;
          goto LABEL_26;
        }
        if ( v12 )
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
      }
    }
LABEL_14:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
    return 0LL;
  }
  v2 = 2;
LABEL_26:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v10);
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v2;
}
