/*
 * XREFs of NtGdiQueryFontAssocInfo @ 0x1C0114720
 * Callers:
 *     <none>
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C009B9B0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiQueryFontAssocInfo(HDC a1)
{
  unsigned int v1; // ebx
  char v3; // cl
  _QWORD v4[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v5[32]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+60h] [rbp+10h] BYREF
  struct LFONT *v7; // [rsp+68h] [rbp+18h] BYREF

  v1 = 0;
  if ( !a1 )
    return fFontAssocStatus;
  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  if ( v4[0] )
  {
    v6 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v6, (struct XDCOBJ *)v4, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v6 + 504));
    if ( v6 )
    {
      v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 120) + 32LL) + 44LL);
      if ( (((v3 + 0x80) & 0xF6) != 0 || v3 == -119) && v3 != -122 )
      {
        if ( !v3 && (fFontAssocStatus & 2) != 0
          || v3 == -1 && (fFontAssocStatus & 1) != 0
          || v3 == 2 && (fFontAssocStatus & 4) != 0 )
        {
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v7, *(struct HLFONT__ **)(v4[0] + 1752LL), 0LL);
          if ( v7 )
          {
            if ( (*((_BYTE *)v7 + 301) & 0x40) != 0 )
            {
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
            }
            else
            {
              DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v7);
              v1 = 1;
            }
          }
        }
      }
      else
      {
        v1 = 2;
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v4);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v5);
  return v1;
}
