/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C0116400
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C022E840 (xxxFlushPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6390 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v9; // ecx
  __int64 v10; // rax
  signed __int32 v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v14[8]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v15; // [rsp+30h] [rbp-59h] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h]
  int v17; // [rsp+48h] [rbp-41h]
  _QWORD v18[2]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v19[40]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  _QWORD v22[2]; // [rsp+A0h] [rbp+17h] BYREF
  _BYTE v23[48]; // [rsp+B0h] [rbp+27h] BYREF
  int v24; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+100h] [rbp+77h] BYREF
  __int64 v26; // [rsp+108h] [rbp+7Fh] BYREF

  v24 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    v25 = *(_QWORD *)(v22[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v14, (struct PDEVOBJ *)&v25);
    v13 = *(_QWORD *)(v25 + 56);
    GreAcquireSemaphore(v13);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v18);
    v21 = 0LL;
    v20 = 0LL;
    v18[0] = 0LL;
    v3 = v25;
    v15 = 0LL;
    v17 = 1;
    if ( (*(_DWORD *)(v25 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(v25 + 48);
      v16 = v25;
      GreAcquireSemaphore(v15);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v15, 11LL);
      v3 = v25;
    }
    if ( (*(_DWORD *)(v3 + 2140) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 1776);
      v26 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v4 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v5 = *(_DWORD *)(v4 + 60) >> 1;
      v6 = *(_DWORD *)(v4 + 28) - v5;
      if ( (unsigned int)v5 < v6 )
      {
        v7 = 4 * v5;
        v8 = v6 - (unsigned int)v5;
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
      *(_DWORD *)(*(_QWORD *)(v22[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v26);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v15);
    if ( v18[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v14);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v24);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v22);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
  return 0LL;
}
