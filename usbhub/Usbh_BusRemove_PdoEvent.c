/*
 * XREFs of Usbh_BusRemove_PdoEvent @ 0x1C003AD1C
 * Callers:
 *     Usbh_BS_BusPause @ 0x1C001D2E0 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusStop @ 0x1C0031AE0 (Usbh_BS_BusStop.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C00212F4 (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhAcquirePdoStateLock @ 0x1C0031CB0 (UsbhAcquirePdoStateLock.c)
 *     UsbhSetPdo_FailIo @ 0x1C00396D0 (UsbhSetPdo_FailIo.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 */

void __fastcall Usbh_BusRemove_PdoEvent(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // rcx
  _QWORD **v6; // r14
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  _DWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD **v14; // r14
  _QWORD *v15; // r10
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // r10
  __int16 v20; // r9
  __int16 v21; // r14
  unsigned __int16 i; // bx
  __int64 PortData; // rax
  __int64 v24; // rbp
  _DWORD *v25; // rax
  __int64 v26; // rcx
  KIRQL v27; // dl

  Log(a1, 2, 1716736630, 0LL, a2);
  v4 = FdoExt(a1);
  UsbhAcquirePdoStateLock(v5, a2, 11);
  if ( (v4[640] & 0x40000000) != 0 )
    UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  Log(a1, 2, 1718374961, 0LL, a2);
  v6 = (_QWORD **)(v4 + 1206);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_13:
      __fastfail(3u);
    v9 = v7 - 165;
    *v6 = v8;
    v8[1] = v6;
    Log(a1, 4, 1718374962, (__int64)(v7 - 165), 0LL);
    v10 = v9[105];
    *v11 = 0LL;
    v9[166] = 0LL;
    v12 = PdoExt(v10);
    UsbhDeletePdo(a1, v9[105], (unsigned int)v12[281]);
    UsbhAcquirePdoStateLock(v13, a2, 11);
  }
  v14 = (_QWORD **)(v4 + 1210);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == v14 )
      break;
    if ( (_QWORD **)v15[1] != v14 )
      goto LABEL_13;
    v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_13;
    v17 = v15 - 165;
    *v14 = v16;
    v16[1] = v14;
    Log(a1, 4, 1346650466, (__int64)(v15 - 165), 0LL);
    v18 = v17[105];
    *v19 = 0LL;
    v17[166] = 0LL;
    PdoExt(v18);
    *((_DWORD *)v17 + 355) |= 0x40000u;
  }
  Log(a1, 2, 1718374963, 0LL, a2);
  v21 = v20 + 1;
  for ( i = v20 + 1; (v4[640] & 0x400000) != 0 && i <= *((unsigned __int8 *)FdoExt(a1) + 2938); i += v21 )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v24 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526259, v24, 0LL);
      if ( v24 )
      {
        UsbhSetPdo_FailIo(v24);
        v25 = PdoExt(v24);
        UsbhDeletePdo(a1, v24, (unsigned int)v25[281]);
        UsbhAcquirePdoStateLock(v26, a2, 11);
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  v27 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v27);
}
