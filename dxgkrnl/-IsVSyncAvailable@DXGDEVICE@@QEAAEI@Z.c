/*
 * XREFs of ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x1C01E570C
 * Callers:
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C01CABC8 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C031DA20 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 */

char __fastcall DXGDEVICE::IsVSyncAvailable(DXGDEVICE *this, unsigned int a2)
{
  DXGADAPTER *v2; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 235);
  if ( v2 )
    return DXGADAPTER::IsVSyncAvailable(v2, a2);
  else
    return 1;
}
