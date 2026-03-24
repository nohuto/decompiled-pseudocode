/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C012B594
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0234C90 (xxxFlushPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B7624 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v9; // ecx
  __int64 v10; // rax
  signed __int32 v11; // ecx
  DYNAMICMODECHANGESHARELOCK *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v16; // [rsp+30h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-49h]
  int v18; // [rsp+48h] [rbp-41h]
  _QWORD v19[2]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v20[40]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+88h] [rbp-1h]
  __int64 v22; // [rsp+90h] [rbp+7h]
  _QWORD v23[2]; // [rsp+A0h] [rbp+17h] BYREF
  _BYTE v24[48]; // [rsp+B0h] [rbp+27h] BYREF
  int v25; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+100h] [rbp+77h] BYREF
  __int64 v27; // [rsp+108h] [rbp+7Fh] BYREF

  v25 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( v23[0] )
  {
    v26 = *(_QWORD *)(v23[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v25);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v15, (struct PDEVOBJ *)&v26);
    v14 = *(_QWORD *)(v26 + 64);
    GreAcquireSemaphore(v14);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
    v22 = 0LL;
    v21 = 0LL;
    v19[0] = 0LL;
    v3 = v26;
    v16 = 0LL;
    v18 = 1;
    if ( (*(_DWORD *)(v26 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(v26 + 48);
      v17 = v26;
      GreAcquireSemaphore(v16);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v16, 11LL);
      v3 = v26;
    }
    if ( (*(_DWORD *)(v3 + 2172) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 1808);
      v27 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v4 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v5 = *(_DWORD *)(v4 + 60) >> 1;
      v6 = *(_DWORD *)(v4 + 28) - v5;
      if ( v5 < v6 )
      {
        v7 = 4LL * v5;
        v8 = v6 - v5;
        do
        {
          v7 += 4LL;
          *(_BYTE *)(v7 + *(_QWORD *)(v4 + 112) - 1) &= ~0x20u;
          --v8;
        }
        while ( v8 );
      }
      hForePalette = 0LL;
      v9 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v10 = *(_QWORD *)(v4 + 120);
      v11 = v9 + 1;
      *(_DWORD *)(v4 + 32) = v11;
      if ( v10 != v4 )
        *(_DWORD *)(v10 + 32) = v11;
      *(_DWORD *)(*(_QWORD *)(v23[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v27);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
    if ( v19[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v12);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v24);
  return 0LL;
}
