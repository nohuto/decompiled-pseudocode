/*
 * XREFs of DrvIsExternalMonitorActive @ 0x1C000F280
 * Callers:
 *     UpdateExternalMonitorConnectedStatus @ 0x1C000F1C0 (UpdateExternalMonitorConnectedStatus.c)
 * Callees:
 *     ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000F37C (-Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C000F450 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DrvIsExternalMonitorActive(_BYTE *a1)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v4; // r8
  int v5; // eax
  _BYTE v7[432]; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned int v8; // [rsp+1D0h] [rbp-28h]
  __int64 v9; // [rsp+1D8h] [rbp-20h]

  memset(v7, 0, sizeof(v7));
  v2 = 0;
  v8 = 0;
  v9 = 0LL;
  *a1 = 0;
  v3 = QDC_AUTO_BUFFERS::Fill((QDC_AUTO_BUFFERS *)v7, 2u, 0LL);
  if ( v3 >= 0 && v8 )
  {
    while ( 1 )
    {
      v4 = 216LL * v2;
      if ( (*(_QWORD *)(v4 + v9) & 0x9800000000000000uLL) == 0x8000000000000000uLL )
      {
        v5 = *(_DWORD *)(v4 + v9 + 80);
        if ( v5 != 0x80000000 && v5 != 11 && v5 != 13 )
          break;
      }
      if ( ++v2 >= v8 )
        goto LABEL_8;
    }
    *a1 = 1;
  }
LABEL_8:
  QDC_AUTO_BUFFERS::Free((QDC_AUTO_BUFFERS *)v7);
  return (unsigned int)v3;
}
