/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02735E0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0091B20 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C027414C (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, HDEV a2)
{
  unsigned int v3; // esi
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-29h] BYREF
  HDEV v7; // [rsp+30h] [rbp-19h]
  int v8; // [rsp+38h] [rbp-11h]
  _QWORD v9[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v10[40]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  __int64 v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v15; // [rsp+C8h] [rbp+7Fh] BYREF

  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v13, a1);
  if ( a2 )
  {
    if ( !v13 )
      return v3;
    v15 = *((_QWORD *)a2 + 7);
    GreAcquireSemaphore(v15);
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v9);
    v12 = 0LL;
    v11 = 0LL;
    v9[0] = 0LL;
    v3 = 1;
    v4 = *((_DWORD *)a2 + 10);
    v6 = 0LL;
    v8 = 1;
    if ( (v4 & 1) != 0 )
    {
      *(_QWORD *)&v6 = *((_QWORD *)a2 + 6);
      v7 = a2;
      GreAcquireSemaphore(v6);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v6, 11LL);
    }
    v14 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v13, *((struct PALETTE **)a2 + 222));
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v6);
    if ( v9[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v15);
  }
  if ( v13 )
    DEC_SHARE_REF_CNT(v13);
  return v3;
}
