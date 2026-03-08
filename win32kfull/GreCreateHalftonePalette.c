/*
 * XREFs of GreCreateHalftonePalette @ 0x1C02D32E0
 * Callers:
 *     CreateDIBPalette @ 0x1C0200398 (CreateDIBPalette.c)
 * Callees:
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C0019BA8 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A4A0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateHalftonePalette(Gre::Base *a1)
{
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  HPALETTE *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp-20h]
  _QWORD v12[3]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+30h] BYREF
  char v15; // [rsp+B8h] [rbp+38h] BYREF

  Gre::Base::Globals(a1);
  DCOBJ::DCOBJ((DCOBJ *)v12, (HDC)a1);
  if ( !v12[0] )
  {
    EngSetLastError(6u);
LABEL_3:
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    return 0LL;
  }
  v14 = *(_QWORD *)(v12[0] + 48LL);
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)&v15, (struct PDEVOBJ *)&v14);
  v4 = Gre::Base::Globals(v3);
  v13 = *((_QWORD *)v4 + 17);
  GreAcquireSemaphore(v13);
  if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v14, 0LL) )
  {
LABEL_10:
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
    goto LABEL_3;
  }
  v5 = (HPALETTE *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v14);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, *v5);
  v11 = 0;
  v10 = 0LL;
  v6 = v9;
  if ( v9 && (v7 = *(_DWORD *)(v9 + 28)) != 0 )
  {
    if ( !PALMEMOBJ::bCreatePalette(
            (PALMEMOBJ *)&v10,
            1u,
            v7,
            *(const unsigned int **)(v9 + 112),
            0,
            0,
            0,
            0x100500u,
            0) )
    {
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v9);
      goto LABEL_10;
    }
  }
  else if ( !PALMEMOBJ::bCreatePalette(
               (PALMEMOBJ *)&v10,
               1u,
               *((__int16 *)v4 + 1927),
               (const unsigned int *)v4 + 964,
               0,
               0,
               0,
               0x100500u,
               0) )
  {
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    goto LABEL_10;
  }
  v11 = 1;
  v8 = *v10;
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v10);
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v15);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13);
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v8;
}
