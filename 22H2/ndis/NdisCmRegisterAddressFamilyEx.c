/*
 * XREFs of NdisCmRegisterAddressFamilyEx @ 0x1C00B72A0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017200 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00198DC (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CEF0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x1C013C210 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 */

NDIS_STATUS __stdcall NdisCmRegisterAddressFamilyEx(NDIS_HANDLE NdisBindingHandle, PCO_ADDRESS_FAMILY AddressFamily)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v5; // rbp
  NDIS_STATUS v6; // ebx
  _NDIS_AF_LIST *i; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *PoolWithTag; // r14
  __int128 v10; // xmm1
  struct _NDIS_AF_NOTIFY *v11; // rcx
  KIRQL v12; // dl
  int v13; // edx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h] BYREF
  struct _NDIS_AF_NOTIFY *v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v5 = *((_QWORD *)NdisBindingHandle + 3);
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      (char)v3,
      v5,
      NdisBindingHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
  *((_DWORD *)NdisBindingHandle + 56) |= 0x20000u;
  if ( *(_BYTE *)(v5 + 632) == 0xA5 )
  {
    if ( (*((_DWORD *)NdisBindingHandle + 56) & 0x18000) != 0 )
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      v6 = -1073676286;
    }
    else
    {
      ndisMReferenceOpen((__int64)NdisBindingHandle, 0xDu);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
      if ( (v3->Flags & 0x20000) != 0 )
      {
        if ( *(_BYTE *)(v5 + 56) >= 5u )
        {
          for ( i = v3->CallMgrAfList; i; i = i->NextAf )
          {
            v8 = *(_QWORD *)&i->AddressFamily.AddressFamily - *(_QWORD *)&AddressFamily->AddressFamily;
            if ( !v8 )
              v8 = i->AddressFamily.MinorVersion - (unsigned __int64)AddressFamily->MinorVersion;
            if ( !v8 )
            {
              v6 = -1073741823;
              goto LABEL_25;
            }
          }
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
          if ( PoolWithTag )
          {
            v6 = ndisCreateNotifyQueue(v3, 0LL, (struct CO_ADDRESS_FAMILY *)AddressFamily, &v16);
            if ( v6 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
            }
            else
            {
              PoolWithTag[2] = *(_QWORD *)&AddressFamily->AddressFamily;
              *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
              *(_OWORD *)(PoolWithTag + 21) = *(_OWORD *)(v5 + 632);
              *(_OWORD *)(PoolWithTag + 23) = *(_OWORD *)(v5 + 648);
              *(_OWORD *)(PoolWithTag + 25) = *(_OWORD *)(v5 + 664);
              *(_OWORD *)(PoolWithTag + 27) = *(_OWORD *)(v5 + 680);
              *(_OWORD *)(PoolWithTag + 29) = *(_OWORD *)(v5 + 696);
              *(_OWORD *)(PoolWithTag + 31) = *(_OWORD *)(v5 + 712);
              *(_OWORD *)(PoolWithTag + 33) = *(_OWORD *)(v5 + 728);
              *(_OWORD *)(PoolWithTag + 35) = *(_OWORD *)(v5 + 744);
              v10 = *(_OWORD *)(v5 + 760);
              PoolWithTag[1] = NdisBindingHandle;
              *(_OWORD *)(PoolWithTag + 37) = v10;
              v11 = v16;
              *PoolWithTag = v3->CallMgrAfList;
              *((_DWORD *)PoolWithTag + 78) = 6;
              v3->CallMgrAfList = (_NDIS_AF_LIST *)PoolWithTag;
              *((_QWORD *)NdisBindingHandle + 130) = *(_QWORD *)(v5 + 640);
              *((_QWORD *)NdisBindingHandle + 131) = *(_QWORD *)(v5 + 648);
              *((_QWORD *)NdisBindingHandle + 132) = *(_QWORD *)(v5 + 728);
              *((_QWORD *)NdisBindingHandle + 133) = *(_QWORD *)(v5 + 736);
              *((_QWORD *)NdisBindingHandle + 143) = *(_QWORD *)(v5 + 760);
              *((_QWORD *)NdisBindingHandle + 144) = *(_QWORD *)(v5 + 752);
              if ( v11 )
                ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)v11 + 8), (WORK_QUEUE_TYPE)40);
            }
          }
          else
          {
            v6 = -1073741670;
          }
        }
        else
        {
          v6 = -1073676284;
        }
      }
      else
      {
        v6 = -1073676283;
      }
LABEL_25:
      ndisMDereferenceOpenLocked((__int64)NdisBindingHandle, 0xDu);
    }
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)NdisBindingHandle + 29);
    v6 = -1073676283;
  }
  v12 = NewIrql;
  v3->MiniportThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v12);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      0x13u,
      0x13u,
      (struct _GUID *)&WPP_70ccdfc7c82d34b36d81d4813b341409_Traceguids,
      (char)v3,
      v5,
      (char)NdisBindingHandle,
      v6);
  return v6;
}
