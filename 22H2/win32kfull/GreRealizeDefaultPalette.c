/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C001F258
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0214E20 (xxxFlushPalette.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00E0CE0 (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E1440 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C011C0AC (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02D2184 (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  Gre::Base *v3; // rcx
  struct Gre::Base::SESSION_GLOBALS *v4; // rsi
  __int64 v5; // rax
  Gre::Base *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-79h] BYREF
  __int64 v16; // [rsp+28h] [rbp-71h] BYREF
  _BYTE v17[8]; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-55h]
  _BYTE v20[40]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v21; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  _QWORD v24[2]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v25[40]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+2Fh]
  __int64 v27; // [rsp+D0h] [rbp+37h]
  int v28; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v29; // [rsp+110h] [rbp+77h] BYREF
  __int64 v30; // [rsp+118h] [rbp+7Fh] BYREF

  v28 = a2;
  DCOBJ::DCOBJ((DCOBJ *)&v18, a1);
  if ( v18 )
  {
    v4 = Gre::Base::Globals(v3);
    v29 = v18[6];
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v17, (struct PDEVOBJ *)&v29);
    v16 = *(_QWORD *)(v29 + 56);
    GreAcquireSemaphore(v16);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v24);
    v27 = 0LL;
    v26 = 0LL;
    v24[0] = 0LL;
    v5 = v29;
    v21 = 0LL;
    v23 = 1;
    v6 = (Gre::Base *)*(unsigned int *)(v29 + 40);
    if ( ((unsigned __int8)v6 & 1) != 0 )
    {
      Gre::Base::Globals(v6);
      *(_QWORD *)&v21 = *(_QWORD *)(v29 + 48);
      v22 = v29;
      GreAcquireSemaphore(v21);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v21, 11LL);
      v5 = v29;
    }
    if ( (*(_DWORD *)(v5 + 2140) & 0x100) != 0 )
    {
      v8 = *((_QWORD *)v4 + 5);
      v30 = *(_QWORD *)(v5 + 1776);
      v7 = v30;
      v15 = v8;
      GreAcquireSemaphore(v8);
      if ( (*(_DWORD *)(v7 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v9 = *(_DWORD *)(v7 + 60) >> 1;
      v10 = *(_DWORD *)(v7 + 28) - v9;
      if ( (unsigned int)v9 < v10 )
      {
        v11 = 4 * v9;
        v12 = v10 - (unsigned int)v9;
        do
        {
          v11 += 4LL;
          *(_BYTE *)(*(_QWORD *)(v7 + 112) + v11 - 1) &= ~0x20u;
          --v12;
        }
        while ( v12 );
      }
      *((_QWORD *)v4 + 479) = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v30);
      *(_DWORD *)(v18[122] + 152) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
    if ( v24[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v24);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v17);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    if ( v18 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v18);
      v28 = 0;
      v13 = *v18;
      HmgDecrementExclusiveReferenceCountEx(v18, v19, &v28);
      if ( v28 )
        GrepDeleteDC(v13, 0x2000000LL);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
  return 0LL;
}
