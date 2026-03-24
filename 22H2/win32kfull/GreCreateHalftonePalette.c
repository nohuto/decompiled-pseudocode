/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02B716C
 * Callers:
 *     CreateDIBPalette @ 0x1C021F148 (CreateDIBPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A850 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0111F38 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C016C2D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1NEEDGRELOCK@@QEAA@XZ @ 0x1C026CA0C (--1NEEDGRELOCK@@QEAA@XZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D1FC (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(HDC a1)
{
  __int64 v1; // rbx
  HPALETTE *v2; // rax
  unsigned int v3; // r8d
  const unsigned int *v4; // r9
  __int64 v5; // rdx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  _BYTE v8[8]; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v9; // [rsp+58h] [rbp+Fh] BYREF
  int v10; // [rsp+60h] [rbp+17h]
  _QWORD v11[7]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v1 = 0LL;
  if ( v11[0] )
  {
    v13 = *(_QWORD *)(v11[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v8, (struct PDEVOBJ *)&v13);
    v14 = ghsemHT;
    GreAcquireSemaphore(ghsemHT);
    if ( PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v13) || (unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v13, 0LL) )
    {
      v2 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v13);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v12, *v2);
      v10 = 0;
      v9 = 0LL;
      if ( v12 && (v3 = *(_DWORD *)(v12 + 28)) != 0 )
      {
        v4 = *(const unsigned int **)(v12 + 112);
      }
      else
      {
        v3 = logDefaultPal[1];
        v4 = (const unsigned int *)&logDefaultPal[2];
      }
      if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v9, 1u, v3, v4, 0, 0, 0, 0x100500u, 0) )
      {
        v10 = 1;
        v1 = *v9;
      }
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v9);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v12, v5);
    }
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v14);
    NEEDGRELOCK::~NEEDGRELOCK((NEEDGRELOCK *)v8);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v1;
}
