/*
 * XREFs of FsRtlUpperOplockFsctrl @ 0x14093B1B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406B3240 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406B36C8 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlUpperOplockFsctrl(__int64 *Oplock, PIRP Irp, int a3, char a4, int a5)
{
  unsigned int v5; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v9; // ecx
  PIRP v10; // r11
  UCHAR MajorFunction; // di
  int v12; // r10d
  ULONG Options; // edx
  struct _IRP *MasterIrp; // rdx

  v5 = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  v10 = Irp;
  MajorFunction = CurrentStackLocation->MajorFunction;
  v12 = ((a4 & 6) << 12) | ((a4 & 1) << 12);
  if ( !CurrentStackLocation->MajorFunction )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( (Options & 0x100000) != 0 && (v12 & 0x4000) == 0 || (Options & 0x10000) != 0 && (v12 & 0x2000) == 0 )
      return (unsigned int)-1073741598;
    return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x90000u:
      v9 = 2;
      break;
    case 0x90004u:
      v9 = 16;
      break;
    case 0x90008u:
      v9 = 4;
      break;
    case 0x9005Cu:
      v9 = 8;
      break;
    case 0x90240u:
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      if ( CurrentStackLocation->Parameters.Create.Options >= 0xC )
      {
        if ( MasterIrp->Type <= 1u )
        {
          if ( ((__int64)MasterIrp->MdlAddress & 2) != 0 )
            return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
          v9 = ((*(_DWORD *)(&MasterIrp->Size + 1) & 6) << 12) | ((*(_DWORD *)(&MasterIrp->Size + 1) & 1) << 12);
        }
        else
        {
          v5 = -1073741811;
        }
      }
      else
      {
        v5 = -1073741789;
      }
      break;
    default:
      return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
  }
  if ( FsRtlpOplockUpperLowerCompatible(v9, v12) )
  {
    if ( !v5 )
      return (unsigned int)FsRtlpOplockFsctrlInternal(Oplock, v10, a3, a5, v12);
  }
  else
  {
    v5 = -1073741598;
  }
  if ( MajorFunction == 13 )
  {
    v10->IoStatus.Status = v5;
    IofCompleteRequest(v10, 1);
  }
  return v5;
}
