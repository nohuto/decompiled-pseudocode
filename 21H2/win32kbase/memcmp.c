/*
 * XREFs of memcmp @ 0x1C00DD6E0
 * Callers:
 *     ?SetBufferProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0007B60 (-SetBufferProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     LogDiagSDC @ 0x1C005C5BC (LogDiagSDC.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00982C0 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     CompareEventEntry @ 0x1C00B1674 (CompareEventEntry.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00C41BC (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00CBE64 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C0172004 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C017B810 (-Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@.c)
 *     ?Lookup@CBackTraceBucket@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@Z @ 0x1C017B9D8 (-Lookup@CBackTraceBucket@NSInstrumentation@@QEBAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@_K@.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02169A0 (-SetBufferProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?SetBufferProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0229C30 (-SetBufferProperty@CSnapshotMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KP.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
