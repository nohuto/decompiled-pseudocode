/*
 * XREFs of WmipIoControl @ 0x1406061A0
 * Callers:
 *     <none>
 * Callees:
 *     WmipReceiveNotifications @ 0x14023EA1C (WmipReceiveNotifications.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoIs32bitProcess @ 0x140252580 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1406064FC (WmipProbeWmiOpenGuidBlock.c)
 *     WmipEnumerateMofResources @ 0x1406067B0 (WmipEnumerateMofResources.c)
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     WmipOpenBlock @ 0x1406340C8 (WmipOpenBlock.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     WmipProbeWnodeSingleInstance @ 0x14072AD64 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x14072ADE4 (WmipProbeWnodeMethodItem.c)
 *     WmipQuerySetExecuteSI @ 0x140757430 (WmipQuerySetExecuteSI.c)
 *     WmipEnumerateGuids @ 0x1409327A4 (WmipEnumerateGuids.c)
 *     WmipQueryAllDataMultiple @ 0x140932C38 (WmipQueryAllDataMultiple.c)
 *     WmipQueryGuidInfo @ 0x140932F50 (WmipQueryGuidInfo.c)
 *     WmipQuerySingleMultiple @ 0x140933020 (WmipQuerySingleMultiple.c)
 *     WmipProbeWnodeSingleItem @ 0x140933564 (WmipProbeWnodeSingleItem.c)
 *     WmipTranslateFileHandle @ 0x1409335D4 (WmipTranslateFileHandle.c)
 */

__int64 __fastcall WmipIoControl(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rdi
  unsigned int Length; // esi
  unsigned int LowPart; // r12d
  __int64 Options; // r14
  int Blink_high; // eax
  NTSTATUS AllDataMultiple; // eax
  NTSTATUS v13; // ebx
  int v15; // edx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  ACCESS_MASK DesiredAccess[2]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  struct _DMA_ADAPTER *Object; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object_8[2]; // [rsp+70h] [rbp-98h] BYREF
  _OWORD v23[3]; // [rsp+80h] [rbp-88h] BYREF
  char v24; // [rsp+B8h] [rbp-50h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DesiredAccess[0] = Length;
  if ( LowPart > 0x224158 )
  {
    switch ( LowPart )
    {
      case 0x224160u:
        goto LABEL_77;
      case 0x228008u:
        v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, 0LL);
        if ( v13 < 0 )
          goto LABEL_18;
        break;
      case 0x22800Cu:
        v13 = WmipProbeWnodeSingleItem(MasterIrp, (unsigned int)Options);
        if ( v13 < 0 )
          goto LABEL_18;
        break;
      default:
        switch ( LowPart )
        {
          case 0x228024u:
            v13 = WmipProbeWnodeMethodItem(MasterIrp, (unsigned int)Options, Length);
            if ( v13 < 0 )
              goto LABEL_18;
            goto LABEL_15;
          case 0x22811Cu:
            if ( (_DWORD)Options == 22 )
            {
              AllDataMultiple = WmipTranslateFileHandle(MasterIrp, DesiredAccess);
              goto LABEL_16;
            }
LABEL_72:
            v13 = -1073741823;
            goto LABEL_20;
          case 0x22812Cu:
            if ( Length >= 0x38 && &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
            {
              v18 = *(_DWORD *)&MasterIrp->Type - 1;
              if ( v18 <= 0xFFE && &MasterIrp->Flags + 2 * v18 <= (ULONG *)((char *)MasterIrp + Options) )
              {
                LOBYTE(a4) = 1;
                AllDataMultiple = WmipQueryAllDataMultiple(
                                    0,
                                    0,
                                    (int)a2,
                                    a4,
                                    MasterIrp,
                                    Length,
                                    (__int64)MasterIrp,
                                    (__int64)DesiredAccess);
                goto LABEL_16;
              }
            }
            break;
          case 0x228130u:
            if ( Length >= 0x38 )
            {
              v16 = (unsigned __int64)MasterIrp + Options;
              if ( &MasterIrp->Size + 1 <= (USHORT *)((char *)MasterIrp + Options) )
              {
                v17 = (unsigned int)(*(_DWORD *)&MasterIrp->Type - 1);
                if ( (unsigned int)v17 <= 0xFFE && (unsigned __int64)&MasterIrp->ThreadListEntry + 24 * v17 <= v16 )
                {
                  LOBYTE(v16) = 1;
                  AllDataMultiple = WmipQuerySingleMultiple(
                                      (_DWORD)a2,
                                      v16,
                                      (_DWORD)MasterIrp,
                                      Length,
                                      (__int64)MasterIrp,
                                      *(_DWORD *)&MasterIrp->Type,
                                      0LL,
                                      0LL,
                                      (__int64)DesiredAccess);
                  goto LABEL_16;
                }
              }
            }
            break;
          case 0x228144u:
            if ( (unsigned int)Options < 0x10
              || Length < 0x38
              || *(_DWORD *)&MasterIrp->Type > (unsigned int)(Options - 8) >> 3 )
            {
              v13 = -1073741808;
              goto LABEL_18;
            }
            AllDataMultiple = WmipReceiveNotifications((unsigned int *)MasterIrp, (int *)DesiredAccess, (__int64)a2);
            goto LABEL_16;
          default:
            goto LABEL_57;
        }
LABEL_69:
        v13 = -1073741811;
        goto LABEL_18;
    }
    DesiredAccess[0] = Options;
    AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Options, (__int64)DesiredAccess);
    Length = 0;
    goto LABEL_17;
  }
  switch ( LowPart )
  {
    case 0x224158u:
      if ( Length >= 0x10 )
      {
        AllDataMultiple = WmipEnumerateMofResources(MasterIrp, Length, DesiredAccess);
        goto LABEL_16;
      }
      goto LABEL_69;
    case 0x224000u:
      if ( Length >= 0x48 )
      {
        if ( (unsigned int)Options >= 0x30 )
        {
          Blink_high = HIDWORD(MasterIrp->ThreadListEntry.Blink);
          if ( (Blink_high & 1) != 0 && (_DWORD)Options == *(_DWORD *)&MasterIrp->Type && (Blink_high & 0xFFFFFF7E) == 0 )
          {
            AllDataMultiple = WmipQueryAllData(0LL, Length, (__int64)DesiredAccess);
LABEL_16:
            Length = DesiredAccess[0];
LABEL_17:
            v13 = AllDataMultiple;
            goto LABEL_18;
          }
        }
        goto LABEL_72;
      }
      goto LABEL_54;
    case 0x224004u:
      if ( Length < 0x38 )
        goto LABEL_54;
      LOBYTE(a4) = 1;
      v13 = WmipProbeWnodeSingleInstance(MasterIrp, (unsigned int)Options, Length, a4);
      if ( v13 < 0 )
        goto LABEL_18;
LABEL_15:
      DesiredAccess[0] = Options;
      AllDataMultiple = WmipQuerySetExecuteSI(0LL, a2, 1, (__int64)MasterIrp, Length, (__int64)DesiredAccess);
      goto LABEL_16;
    case 0x224108u:
LABEL_30:
      Handle = 0LL;
      DesiredAccess[0] = 0;
      memset(v23, 0, sizeof(v23));
      Object = 0LL;
      *(_OWORD *)Object_8 = 0LL;
      v13 = WmipProbeWmiOpenGuidBlock(
              (unsigned int)v23,
              (unsigned int)Object_8,
              (unsigned int)&v24,
              (unsigned int)DesiredAccess,
              (__int64)MasterIrp,
              Options,
              Length);
      if ( v13 >= 0 )
      {
        LOBYTE(v15) = 1;
        v13 = WmipOpenBlock(LowPart, v15, (unsigned int)v23, DesiredAccess[0], (__int64)&Object);
        if ( v13 >= 0 )
        {
          v13 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess[0], WmipGuidObjectType, 1, &Handle);
          if ( v13 >= 0 )
          {
            if ( IoIs32bitProcess(0LL) )
              LODWORD(MasterIrp->MdlAddress) = (_DWORD)Handle;
            else
              *(_QWORD *)&MasterIrp->Flags = Handle;
          }
          HalPutDmaAdapter(Object);
        }
      }
LABEL_18:
      if ( v13 == 259 || v13 == -1073741536 )
        return (unsigned int)v13;
      goto LABEL_20;
    case 0x224124u:
      if ( Length >= 4 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
        Length = 4;
        v13 = 0;
        goto LABEL_20;
      }
      goto LABEL_54;
    case 0x224134u:
LABEL_77:
      if ( Length >= 8 )
      {
        AllDataMultiple = WmipEnumerateGuids(LowPart, MasterIrp, Length, DesiredAccess);
        goto LABEL_16;
      }
      goto LABEL_54;
  }
  if ( LowPart != 2244920 )
  {
    if ( LowPart != 2244924 && LowPart != 2244928 )
    {
LABEL_57:
      v13 = -1073741808;
      goto LABEL_20;
    }
    goto LABEL_30;
  }
  if ( Length >= 0x10 )
  {
    AllDataMultiple = WmipQueryGuidInfo(MasterIrp);
    Length = 16;
    goto LABEL_17;
  }
LABEL_54:
  v13 = -1073741789;
LABEL_20:
  a2->IoStatus.Status = v13;
  if ( v13 >= 0 )
    v5 = Length;
  a2->IoStatus.Information = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v13;
}
