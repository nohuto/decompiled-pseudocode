/*
 * XREFs of RawQueryVolumeInformation @ 0x1406C8F9C
 * Callers:
 *     RawDispatch @ 0x1406C8830 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     FsRtlGetSectorSizeInformation @ 0x140610F70 (FsRtlGetSectorSizeInformation.c)
 *     RawQueryFsVolumeInfo @ 0x1406C84DC (RawQueryFsVolumeInfo.c)
 *     RawQueryFsDeviceInfo @ 0x14090F564 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsSizeInfo @ 0x14090F5E8 (RawQueryFsSizeInfo.c)
 */

__int64 __fastcall RawQueryVolumeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 MasterIrp; // r8
  int v7; // eax
  int SectorSizeInformation; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v11 = v3;
  switch ( *(_DWORD *)(a3 + 16) )
  {
    case 1:
      v7 = RawQueryFsVolumeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
LABEL_3:
      v3 = v11;
      SectorSizeInformation = v7;
      break;
    case 3:
      v7 = RawQueryFsSizeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 4:
      v7 = RawQueryFsDeviceInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 5:
      if ( v3 < 0x12 )
      {
        SectorSizeInformation = -2147483643;
      }
      else
      {
        *(_DWORD *)MasterIrp = 0;
        v3 -= 18;
        *(_DWORD *)(MasterIrp + 4) = 0;
        *(_DWORD *)(MasterIrp + 8) = 6;
        SectorSizeInformation = 0;
        *(_DWORD *)(MasterIrp + 12) = *(_DWORD *)L"RAW";
        *(_WORD *)(MasterIrp + 16) = aRaw[2];
      }
      break;
    case 0xB:
      SectorSizeInformation = FsRtlGetSectorSizeInformation(
                                *(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 184) + 16LL),
                                MasterIrp);
      if ( SectorSizeInformation >= 0 )
        v3 -= 28;
      break;
    default:
      SectorSizeInformation = -1073741811;
      break;
  }
  v9 = *(_DWORD *)(a3 + 8) - v3;
  a2->IoStatus.Status = SectorSizeInformation;
  a2->IoStatus.Information = v9;
  IofCompleteRequest(a2, 1);
  return (unsigned int)SectorSizeInformation;
}
