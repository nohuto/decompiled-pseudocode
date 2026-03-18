/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B5EAC
 * Callers:
 *     CreateDIBPalette @ 0x1C021A574 (CreateDIBPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0092E30 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0096C18 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rdi
  HPALETTE *v2; // rax
  __int64 v3; // rbx
  unsigned int v4; // r8d
  const unsigned int *v5; // r9
  __int64 v6; // rsi
  _BYTE v8[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+58h] [rbp-1h] BYREF
  int v10; // [rsp+60h] [rbp+7h]
  _QWORD v11[2]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v12[56]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v1 = 0LL;
  if ( v11[0] )
  {
    v14 = *(_QWORD *)(v11[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v8, (struct PDEVOBJ *)&v14);
    v15 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v14, 0LL) )
    {
      v2 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v13, *v2);
      v3 = v13;
      v10 = 0;
      v9 = 0LL;
      if ( v13 && (v4 = *(_DWORD *)(v13 + 28)) != 0 )
      {
        v5 = *(const unsigned int **)(v13 + 112);
      }
      else
      {
        v4 = logDefaultPal[1];
        v5 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v9, 1u, v4, v5, 0, 0, 0, 0x100500u, 0) )
      {
        v10 = 1;
        v6 = *v9;
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v9);
        if ( v3 )
          DEC_SHARE_REF_CNT(v3);
        v1 = v6;
      }
      else
      {
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v9);
        if ( v3 )
          DEC_SHARE_REF_CNT(v3);
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v8);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v1;
}
