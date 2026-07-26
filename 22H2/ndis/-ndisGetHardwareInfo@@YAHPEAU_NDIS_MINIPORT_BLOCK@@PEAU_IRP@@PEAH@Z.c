/*
 * XREFs of ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006BF6C
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     NdisGetRssProcessorInformation @ 0x1C0026D70 (NdisGetRssProcessorInformation.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0037A88 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisGetHardwareInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2, int *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STATUS_BLOCK **p_UserIosb; // rsi
  NDIS_STATUS RssProcessorInformation; // r15d
  unsigned int Length; // r12d
  unsigned int v9; // ebp
  _IRP::<unnamed_type_AssociatedIrp> v10; // rbx
  unsigned int v11; // r14d
  struct _NDIS_INTERRUPT_BLOCK *InterruptEx; // r8
  int v13; // edx
  __int64 v14; // rdx
  unsigned int i; // r9d
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _NDIS_RECEIVE_SCALE_PARAMETERS *CombinedNdisRSSParameters; // rax
  unsigned int v21; // ebp
  struct _NDIS_RSS_PROCESSOR_INFO *PoolWithTagPriority; // rax
  struct _NDIS_RSS_PROCESSOR_INFO *v23; // rsi
  unsigned int v24; // r14d
  ULONG_PTR Size; // [rsp+58h] [rbp+10h] BYREF

  *a3 = -1073741823;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  p_UserIosb = 0LL;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    Length = CurrentStackLocation->Parameters.Read.Length;
    v9 = 1320;
    v10.MasterIrp = (_IRP *)a2->AssociatedIrp;
    if ( Length >= 0x528 )
    {
      *a3 = 0;
      memset(&v10.MasterIrp->AllocationProcessorNumber, 0, 0x524uLL);
      *(_DWORD *)&v10.MasterIrp->Type = 86508160;
      v11 = 1320;
      BYTE4(v10.MasterIrp->MdlAddress) = a1->MajorNdisVersion;
      BYTE5(v10.MasterIrp->MdlAddress) = a1->MinorNdisVersion;
      HIWORD(v10.MasterIrp->MdlAddress) = HIWORD(a1->DriverHandle->DriverVersion);
      LOWORD(v10.MasterIrp->Flags) = a1->DriverHandle->DriverVersion;
      InterruptEx = a1->InterruptEx;
      if ( InterruptEx )
      {
        if ( *((_BYTE *)InterruptEx + 192) )
        {
          v11 = 8 * *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL) + 1320;
          if ( Length >= v11 )
          {
            p_UserIosb = &v10.MasterIrp[6].UserIosb;
            *(_DWORD *)&v10.MasterIrp->Cancel = 1320;
          }
        }
      }
      LODWORD(v10.MasterIrp->MdlAddress) = v11;
      if ( p_UserIosb )
        v9 = v11;
      if ( InterruptEx )
      {
        v13 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber;
        v10.MasterIrp->ThreadListEntry = *(_LIST_ENTRY *)&a1->MsiCaps.Header.CapabilityID;
        v10.MasterIrp->IoStatus.Pointer = *(void **)&a1->MsiCaps.Option64Bit.MaskBits;
        v10.MasterIrp->IoStatus.Information = *(_QWORD *)&a1->MsiXCaps.Header.CapabilityID;
        *(_DWORD *)&v10.MasterIrp->RequestorMode = a1->MsiXCaps.PBATable.TableOffset;
        if ( *((_BYTE *)InterruptEx + 192)
          && (v13 |= 4u, *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13, *((_BYTE *)InterruptEx + 193)) )
        {
          HIDWORD(v10.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)(*((_QWORD *)InterruptEx + 15) + 4LL);
          *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13 | 8;
          if ( p_UserIosb )
          {
            v14 = *((_QWORD *)InterruptEx + 15);
            for ( i = 0; i < *(_DWORD *)(v14 + 4); v14 = *((_QWORD *)InterruptEx + 15) )
            {
              v16 = i++;
              p_UserIosb[v16] = *(_IO_STATUS_BLOCK **)(v14 + 48 * v16 + 16);
            }
          }
          if ( a1->MsiXCaps.Header.CapabilityID == 17 )
          {
            v17 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber | 0x10;
            *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v17;
            v10.MasterIrp->AssociatedIrp.IrpCount = (*(_WORD *)&a1->MsiXCaps.MessageControl & 0x7FF) + 1;
            if ( *(_WORD *)&a1->MsiXCaps.MessageControl < 0 )
              *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v17 | 0x20;
          }
        }
        else
        {
          *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v13 | 2;
        }
      }
      else
      {
        v18 = *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber;
        if ( a1->Interrupt )
          v19 = v18 | 2;
        else
          v19 = v18 | 1;
        *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber = v19;
      }
      v10.MasterIrp->Overlay.AllocationSize.LowPart = 120;
      v10.MasterIrp->Overlay.AllocationSize.HighPart = 52;
      v10.MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry = *(_LIST_ENTRY *)&a1->PciDeviceCustomProperties.Header.Type;
      *((_OWORD *)&v10.MasterIrp->Tail.CompletionKey + 1) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxPayloadSize;
      *((_OWORD *)&v10.MasterIrp->Tail.CompletionKey + 2) = *(_OWORD *)&a1->PciDeviceCustomProperties.MaxLinkSpeed;
      *((_DWORD *)&v10.MasterIrp->Tail.CompletionKey + 12) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      HIDWORD(v10.MasterIrp->UserIosb) = a1->PciDeviceCustomProperties.PciExpressVersion;
      LODWORD(v10.MasterIrp->UserEvent) = a1->PciDeviceCustomProperties.InterruptType;
      HIDWORD(v10.MasterIrp->UserEvent) = a1->PciDeviceCustomProperties.MaxInterruptMessages;
      HIDWORD(v10.MasterIrp[1].AssociatedIrp.SystemBuffer) = a1->PciDeviceSriovSupport;
      LOBYTE(v10.MasterIrp[1].ThreadListEntry.Flink) = a1->S0WakeupSupported;
      BYTE1(v10.MasterIrp[1].ThreadListEntry.Flink) = (a1->Flags & 0x10) != 0;
      *((_DWORD *)&v10.MasterIrp->Overlay.AllocationSize + 2) = 172;
      *((_DWORD *)&v10.MasterIrp->Overlay.AllocationSize + 3) = 20;
      *(_OWORD *)((char *)&v10.MasterIrp->Tail.CompletionKey + 52) = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
      *((_DWORD *)&v10.MasterIrp->Tail.CompletionKey + 17) = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
      if ( ndisIsRssEnabledForMiniport(a1) )
      {
        LODWORD(v10.MasterIrp->CancelRoutine) = 192;
        HIDWORD(v10.MasterIrp->CancelRoutine) = 44;
        CombinedNdisRSSParameters = a1->CombinedNdisRSSParameters;
        *(_OWORD *)(&v10.MasterIrp->Tail.CompletionKey + 9) = *(_OWORD *)&CombinedNdisRSSParameters->Header.Type;
        *(_OWORD *)&v10.MasterIrp[1].Type = *(_OWORD *)&CombinedNdisRSSParameters->IndirectionTableOffset;
        *(_QWORD *)&v10.MasterIrp[1].Flags = *(_QWORD *)&CombinedNdisRSSParameters->NumberOfProcessorMasks;
        v10.MasterIrp[1].AssociatedIrp.IrpCount = (int)CombinedNdisRSSParameters->DefaultProcessorNumber;
        v11 += a1->CombinedNdisRSSParameters->HashSecretKeySize + a1->CombinedNdisRSSParameters->IndirectionTableSize;
        LODWORD(v10.MasterIrp->MdlAddress) = v11;
        if ( Length < v11 )
        {
          *(_DWORD *)&v10.MasterIrp[1].Type = 0;
          LODWORD(v10.MasterIrp[1].MdlAddress) = 0;
        }
        else
        {
          LODWORD(v10.MasterIrp[1].MdlAddress) = v9 - 192;
          memmove(
            (char *)v10.MasterIrp + v9,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->HashSecretKeyOffset,
            a1->CombinedNdisRSSParameters->HashSecretKeySize);
          v21 = a1->CombinedNdisRSSParameters->HashSecretKeySize + v9;
          *(_DWORD *)&v10.MasterIrp[1].Type = v21 - 192;
          memmove(
            (char *)v10.MasterIrp + v21,
            &a1->CombinedNdisRSSParameters->Header.Type + a1->CombinedNdisRSSParameters->IndirectionTableOffset,
            a1->CombinedNdisRSSParameters->IndirectionTableSize);
          v9 = a1->CombinedNdisRSSParameters->IndirectionTableSize + v21;
        }
      }
      else
      {
        *(_DWORD *)&v10.MasterIrp->AllocationProcessorNumber |= 0x40u;
      }
      Size = 0LL;
      RssProcessorInformation = NdisGetRssProcessorInformation(a1, 0LL, &Size);
      PoolWithTagPriority = (struct _NDIS_RSS_PROCESSOR_INFO *)ExAllocatePoolWithTagPriority(
                                                                 NonPagedPoolNx,
                                                                 Size,
                                                                 0x2020444Eu,
                                                                 LowPoolPriority);
      v23 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        RssProcessorInformation = NdisGetRssProcessorInformation(a1, PoolWithTagPriority, &Size);
        if ( RssProcessorInformation >= 0 )
        {
          LODWORD(v10.MasterIrp->UserBuffer) = 248;
          HIDWORD(v10.MasterIrp->UserBuffer) = 40;
          *(_OWORD *)&v10.MasterIrp[1].ThreadListEntry.Blink = *(_OWORD *)&v23->Header.Type;
          *(_OWORD *)&v10.MasterIrp[1].IoStatus.Information = *(_OWORD *)&v23->PreferredNumaNode;
          v10.MasterIrp[1].UserIosb = *(_IO_STATUS_BLOCK **)&v23[1].Header.Type;
          v24 = v23->RssProcessorEntrySize * v23->RssProcessorCount + v11;
          LODWORD(v10.MasterIrp->MdlAddress) = v24;
          if ( Length < v24 )
          {
            HIDWORD(v10.MasterIrp[1].IoStatus.Information) = 0;
          }
          else
          {
            HIDWORD(v10.MasterIrp[1].IoStatus.Information) = v9 - 248;
            memmove(
              (char *)v10.MasterIrp + v9,
              &v23->Header.Type + v23->RssProcessorArrayOffset,
              v23->RssProcessorEntrySize * v23->RssProcessorCount);
            v9 += v23->RssProcessorEntrySize * v23->RssProcessorCount;
          }
        }
        ExFreePoolWithTag(v23, 0x2020444Eu);
      }
      a2->IoStatus.Information = v9;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)RssProcessorInformation;
}
