/*
 * XREFs of ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C005799C
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C0349D0C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C034C27C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C034CA98 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGKEYEDMUTEX::IsOwner(DXGKEYEDMUTEX *this, int a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*((_DWORD *)this + 14) && a2 && *((_DWORD *)this + 15) == a2 )
    return *((_QWORD *)this + 8) == (_QWORD)DXGPROCESS::GetCurrent();
  return v2;
}
