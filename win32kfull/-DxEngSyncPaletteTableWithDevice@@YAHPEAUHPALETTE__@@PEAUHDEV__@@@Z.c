/*
 * XREFs of ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0270FC8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006F30 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C0271B7C (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DxEngSyncPaletteTableWithDevice(HPALETTE a1, HDEV a2)
{
  unsigned int v3; // edi
  Gre::Base *v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-50h] BYREF
  HDEV v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+4Ch] [rbp-24h]
  __int16 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+38h] BYREF

  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v16, a1);
  if ( a2 && v16 )
  {
    v18 = *((_QWORD *)a2 + 7);
    GreAcquireSemaphore(v18);
    v11 = 0;
    v12 = 0;
    v3 = 1;
    v15 = 0LL;
    v14 = 0LL;
    v10 = 0LL;
    v5 = *((_DWORD *)a2 + 10);
    v13 = 256;
    v7 = 0LL;
    v9 = 1;
    if ( (v5 & 1) != 0 )
    {
      Gre::Base::Globals(v4);
      *(_QWORD *)&v7 = *((_QWORD *)a2 + 6);
      v8 = a2;
      GreAcquireSemaphore(v7);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v7, 11LL);
    }
    v17 = *((_QWORD *)Gre::Base::Globals(v4) + 5);
    GreAcquireSemaphore(v17);
    XEPALOBJ::apalColorSet((XEPALOBJ *)&v16, *((struct PALETTE **)a2 + 222));
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v7);
    if ( v10 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
  }
  if ( v16 )
    DEC_SHARE_REF_CNT(v16);
  return v3;
}
