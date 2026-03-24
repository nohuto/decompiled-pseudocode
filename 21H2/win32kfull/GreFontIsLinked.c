/*
 * XREFs of GreFontIsLinked @ 0x1C01118D8
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C01118C0 (NtGdiFontIsLinked.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C009C038 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  char v4; // cl
  _QWORD v5[2]; // [rsp+28h] [rbp-19h] BYREF
  _BYTE v6[32]; // [rsp+38h] [rbp-9h] BYREF
  _QWORD v7[8]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+6Fh] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    v8 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v8, (struct XDCOBJ *)v5, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v8 + 504));
    if ( !v8 )
      goto LABEL_11;
    v2 = *(_QWORD *)(v8 + 120);
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    if ( v2 && (*(_DWORD *)(v2 + 12) & 8) == 0 )
    {
      if ( !*(_DWORD *)(v8 + 708) )
      {
        if ( *(_OWORD *)&gappfeSysEUDC == 0LL )
        {
          if ( !bFinallyInitializeFontAssocDefault
            || (IFIOBJR::IFIOBJR(
                  (IFIOBJR *)v7,
                  *(const struct _IFIMETRICS **)(v2 + 32),
                  (struct RFONTOBJ *)&v8,
                  (struct DCOBJ *)v5),
                v4 = *(_BYTE *)(v7[0] + 44LL),
                v4 == 1)
            || (unsigned __int8)(v4 - 3) <= 0xFBu
            || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v4 + 2) & 0xF) == 0 )
          {
            if ( *(_QWORD *)(v2 + 120) )
              v1 = 1;
            goto LABEL_10;
          }
        }
        goto LABEL_9;
      }
      if ( gbSystemDBCSFontEnabled )
LABEL_9:
        v1 = 1;
    }
LABEL_10:
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v5);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  return v1;
}
