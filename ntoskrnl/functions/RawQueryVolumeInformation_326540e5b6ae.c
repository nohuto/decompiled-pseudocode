__int64 __fastcall RawQueryVolumeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _IRP *MasterIrp; // r8
  int v7; // eax
  int SectorSizeInformation; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
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
        *(_DWORD *)&MasterIrp->Type = 0;
        v3 -= 18;
        *(_DWORD *)(&MasterIrp->Size + 1) = 0;
        LODWORD(MasterIrp->MdlAddress) = 6;
        SectorSizeInformation = 0;
        HIDWORD(MasterIrp->MdlAddress) = *(_DWORD *)L"RAW";
        LOWORD(MasterIrp->Flags) = aRaw[2];
      }
      break;
    case 0xB:
      SectorSizeInformation = FsRtlGetSectorSizeInformation(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 192) + 16LL));
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
