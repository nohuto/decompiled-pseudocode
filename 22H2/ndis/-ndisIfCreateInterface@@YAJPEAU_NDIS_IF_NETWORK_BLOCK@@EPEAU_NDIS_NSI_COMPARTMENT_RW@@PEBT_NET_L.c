/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0106818
 * Callers:
 *     ?ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C002E108 (-ndisIfCreateFilterInterface@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002ED34 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C003459C (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B2F38 (ndisIfCreateCompartment.c)
 * Callees:
 *     ndisIfRegisterInterfaceEx @ 0x1C002B8BC (ndisIfRegisterInterfaceEx.c)
 *     WPP_RECORDER_SF_qqqqL @ 0x1C002C1F4 (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1C002C2CC (-ndisIfNdisProviderGetHandle@@YAPEAX_N@Z.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C002C710 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C003A03C (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     ndisIfUpdateLoopbackInterfaceOnNetwork @ 0x1C003A0D0 (ndisIfUpdateLoopbackInterfaceOnNetwork.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C01277A0 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C01277D0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        const union _NET_LUID_LH *a4,
        const struct _GUID *a5,
        const struct NdisNetworkInterfacePersistedState *a6,
        struct _NDIS_FILTER_BLOCK *a7,
        enum NdisIfBlockSource a8)
{
  char v9; // bl
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rsi
  unsigned __int16 Length; // r12
  char *PoolWithTag; // rax
  __int64 v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // eax
  size_t v16; // r8
  _LIST_ENTRY *Value; // rbx
  __int128 v18; // xmm0
  _QWORD *Handle; // rax
  unsigned int v20; // edx
  int appended; // esi
  int v23; // eax
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  __int16 v26; // ax
  size_t v27; // r8
  size_t v28; // r8
  __int128 v29; // xmm0
  _WORD *v30; // rsi
  _WORD *v31; // r8
  char *v32; // rdx
  char *v33; // rcx
  size_t v34; // r8
  int v35; // [rsp+28h] [rbp-79h]
  char v36; // [rsp+58h] [rbp-49h]
  UINT32 v37; // [rsp+5Ch] [rbp-45h] BYREF
  UINT32 NetLuidIndex; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-29h] BYREF
  _UNICODE_STRING String; // [rsp+88h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-9h] BYREF
  char v44; // [rsp+F0h] [rbp+4Fh]

  v44 = a2;
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = L" ";
  v36 = 0;
  NetLuidIndex = 0;
  v37 = 0;
  v9 = a2;
  v10 = a1;
  Destination = 0LL;
  DestinationString = 0LL;
  String = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_74ec276d98723cbe160982132dfec1f3_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( !v10 || a6 && *((_WORD *)a6 + 32) > 0x20u || a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
  {
    appended = -1073741811;
  }
  else
  {
    Length = 512;
    String.MaximumLength = 512;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F8uLL, 0x6669444Eu);
    v13 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 4, 0, 0x4F4uLL);
      *(_DWORD *)v13 = 6291840;
      String.Buffer = (wchar_t *)(v13 + 1272);
      if ( !a6 )
      {
        if ( !a7 )
        {
          if ( v9 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(24LL, *((_DWORD *)a3 + 404) & 1, &v37);
            if ( appended )
            {
LABEL_19:
              ExFreePoolWithTag((PVOID)v13, 0);
              goto LABEL_20;
            }
            v36 = 1;
            *((_WORD *)a3 + 7) = 24;
            NetLuidIndex = v37;
            *((_QWORD *)a3 + 1) = *((_QWORD *)a3 + 1) & 0xFFFF000000000000uLL | ((unsigned __int64)(v37 & 0xFFFFFF) << 24);
            appended = ExUuidCreate((UUID *)a3 + 2);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v36 )
                NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
              goto LABEL_19;
            }
          }
          Value = (_LIST_ENTRY *)*((_QWORD *)a3 + 1);
          v29 = *((_OWORD *)a3 + 2);
          *(_QWORD *)(v13 + 28) = 1LL;
          *(_DWORD *)(v13 + 36) = 1;
          *(_OWORD *)(v13 + 52) = v29;
          *(_BYTE *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 88) = 17LL;
          *(_DWORD *)(v13 + 640) = 1500;
          *(_QWORD *)(v13 + 720) = 0x40000000LL;
          *(_QWORD *)(v13 + 728) = 0x40000000LL;
          *(_DWORD *)(v13 + 740) = 1;
          *(_DWORD *)(v13 + 744) = 2;
          *(_QWORD *)(v13 + 632) = 1LL;
          if ( v44 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00E55F2);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_71;
            appended = RtlIntegerToUnicodeString(*(_DWORD *)(*((_QWORD *)a1 + 6) + 16LL), 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_71;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_71;
            *(_WORD *)(v13 + 752) = Destination.Length;
            *(_WORD *)(v13 + 48) = Destination.Length;
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00E5802);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_71;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_71;
            *(_WORD *)(v13 + 116) = Destination.Length;
            *((_WORD *)a3 + 24) = *(_WORD *)(v13 + 48);
            memmove((char *)a3 + 50, (const void *)(v13 + 754), *(unsigned __int16 *)(v13 + 752));
            v33 = (char *)a3 + 566;
            *((_WORD *)a3 + 282) = *(_WORD *)(v13 + 116);
            v32 = (char *)(v13 + 118);
            v34 = *(unsigned __int16 *)(v13 + 116);
          }
          else
          {
            if ( !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 48))
              || (v30 = (_WORD *)((char *)a3 + 564),
                  !ndisIsValidIfString((const struct _IF_COUNTED_STRING_LH *)((char *)a3 + 564))) )
            {
              appended = -1073676267;
              goto LABEL_71;
            }
            *(_WORD *)(v13 + 48) = *v31;
            memmove((void *)(v13 + 754), (char *)a3 + 50, (unsigned __int16)*v31);
            v32 = (char *)a3 + 566;
            *(_WORD *)(v13 + 116) = *v30;
            v33 = (char *)(v13 + 118);
            v34 = (unsigned __int16)*v30;
          }
          memmove(v33, v32, v34);
          v10 = a1;
          *(_DWORD *)(v13 + 712) = 1;
LABEL_16:
          *(_WORD *)(v13 + 50) = 754;
          *(_OWORD *)(v13 + 68) = *((_OWORD *)v10 + 2);
          *(_DWORD *)(v13 + 96) = *(_DWORD *)(*((_QWORD *)v10 + 6) + 16LL);
          v18 = *((_OWORD *)v10 + 2);
          *(_WORD *)(v13 + 736) = 0;
          *(_OWORD *)(v13 + 100) = v18;
          Handle = ndisIfNdisProviderGetHandle(a3 != 0LL);
          appended = ndisIfRegisterInterfaceEx(Handle, Value, (__int64)a7, v13, a8, v20, &v37);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork((__int64)a1, (union _NET_LUID_LH)Value);
            goto LABEL_19;
          }
          goto LABEL_71;
        }
        *(_DWORD *)(v13 + 4) |= 2u;
        *(_DWORD *)(v13 + 20) = -1;
        *(_DWORD *)(v13 + 28) = a7->Miniport->IfBlock->AccessType;
        *(_DWORD *)(v13 + 32) = a7->Miniport->IfBlock->DirectionType;
        *(_DWORD *)(v13 + 36) = a7->Miniport->IfBlock->ConnectionType;
        *(_BYTE *)(v13 + 40) = 0;
        if ( a7->FilterFriendlyName->Length <= 0x200u )
          Length = a7->FilterFriendlyName->Length;
        *(_WORD *)(v13 + 752) = Length;
        v14 = *(unsigned __int16 *)(v13 + 752);
        *(_WORD *)(v13 + 48) = Length;
        if ( (_WORD)v14 )
          memmove((void *)(v13 + 754), a7->FilterFriendlyName->Buffer, v14);
        *(_BYTE *)(v13 + 738) = a7->Miniport->IfBlock->ifHideInterfaceInUi;
        v15 = a7->Miniport->IfBlock->ifPhysAddress.Length;
        *(_WORD *)(v13 + 42) = v15;
        *(_WORD *)(v13 + 644) = v15;
        *(_DWORD *)(v13 + 44) = 44565126;
        memmove((void *)(v13 + 646), a7->Miniport->IfBlock->ifPhysAddress.Address, v15);
        v16 = *(unsigned __int16 *)(v13 + 42);
        *(_WORD *)(v13 + 678) = v16;
        memmove((void *)(v13 + 680), a7->Miniport->IfBlock->PermanentPhysAddress.Address, v16);
        *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
        *(_DWORD *)(v13 + 84) = a7->Miniport->IfBlock->SupportedStatistics;
        *(_DWORD *)(v13 + 88) = a7->MediaType;
        *(_DWORD *)(v13 + 92) = a7->PhysicalMediaType;
        *(_DWORD *)(v13 + 712) = a7->Miniport->IfBlock->ifAdminStatus;
        *(_QWORD *)(v13 + 720) = a7->XmitLinkSpeed;
        *(_QWORD *)(v13 + 728) = a7->RcvLinkSpeed;
        *(_DWORD *)(v13 + 740) = a7->MediaConnectState;
        *(_DWORD *)(v13 + 744) = a7->MediaDuplexState;
        *(_DWORD *)(v13 + 632) = a7->Miniport->IfBlock->ifOperStatus;
        *(_DWORD *)(v13 + 636) = a7->Miniport->IfBlock->ifOperStatusFlags;
        *(_DWORD *)(v13 + 640) = a7->Miniport->IfBlock->ifMtu;
LABEL_15:
        Value = (_LIST_ENTRY *)a4->Value;
        goto LABEL_16;
      }
      *(_QWORD *)(v13 + 28) = 2LL;
      *(_DWORD *)(v13 + 36) = 1;
      switch ( *((_WORD *)a6 + 8) )
      {
        case 1:
          if ( *((_DWORD *)a6 + 14) != 9 )
          {
            if ( *((_DWORD *)a6 + 14) == 10 )
              goto LABEL_45;
            if ( *((_DWORD *)a6 + 14) == 11 )
            {
              *(_DWORD *)(v13 + 32) = 2;
              goto LABEL_45;
            }
            if ( *((_DWORD *)a6 + 14) != 12 )
              goto LABEL_27;
          }
          break;
        case 6:
        case 9:
          goto LABEL_27;
        case 0x17:
          break;
        case 0x25:
          *(_DWORD *)(v13 + 28) = 4;
          goto LABEL_27;
        case 0x83:
LABEL_45:
          *(_DWORD *)(v13 + 28) = 3;
          goto LABEL_27;
        default:
LABEL_27:
          *(_DWORD *)(v13 + 20) = -1;
          *(_DWORD *)(v13 + 4) = 28;
          v23 = *(_DWORD *)(v13 + 4);
          if ( *((_BYTE *)a6 + 133) )
            v23 = 29;
          *(_DWORD *)(v13 + 4) = v23;
          if ( *((_BYTE *)a6 + 132) )
            *(_BYTE *)(v13 + 738) = 1;
          *(_DWORD *)(v13 + 24) = 0;
          *(_BYTE *)(v13 + 40) = 0;
          *(_DWORD *)(v13 + 42) = 0;
          *(_WORD *)(v13 + 46) = 0;
          *(_DWORD *)(v13 + 88) = *((_DWORD *)a6 + 14);
          *(_DWORD *)(v13 + 92) = *((_DWORD *)a6 + 15);
          *(_QWORD *)(v13 + 636) = 0LL;
          *(_WORD *)(v13 + 644) = 0;
          *(_WORD *)(v13 + 678) = 0;
          *(_QWORD *)(v13 + 720) = 0LL;
          *(_QWORD *)(v13 + 728) = 0LL;
          *(_QWORD *)(v13 + 740) = 0LL;
          *(_DWORD *)(v13 + 712) = 2;
          *(_DWORD *)(v13 + 632) = 6;
          v24 = **(_WORD **)a6;
          if ( v24 > 0x200u )
            v24 = 512;
          *(_WORD *)(v13 + 116) = v24;
          if ( v24 )
            memmove((void *)(v13 + 118), *(const void **)(*(_QWORD *)a6 + 8LL), v24);
          v25 = **((_WORD **)a6 + 1);
          if ( v25 )
          {
            if ( v25 <= 0x200u )
              Length = **((_WORD **)a6 + 1);
            *(_WORD *)(v13 + 752) = Length;
            memmove((void *)(v13 + 754), *(const void **)(*((_QWORD *)a6 + 1) + 8LL), Length);
            *(_WORD *)(v13 + 48) = *(_WORD *)(v13 + 752);
          }
          *(struct _GUID *)(v13 + 52) = *a5;
          v26 = *((_WORD *)a6 + 32);
          if ( v26 )
          {
            v27 = *((unsigned __int16 *)a6 + 32);
            *(_DWORD *)(v13 + 44) = 44565126;
            *(_WORD *)(v13 + 42) = v26;
            *(_WORD *)(v13 + 644) = v26;
            memmove((void *)(v13 + 646), (char *)a6 + 66, v27);
            v28 = *(unsigned __int16 *)(v13 + 42);
            *(_WORD *)(v13 + 678) = v28;
            memmove((void *)(v13 + 680), (char *)a6 + 100, v28);
          }
          goto LABEL_15;
      }
      *(_DWORD *)(v13 + 36) = 3;
      goto LABEL_45;
    }
    appended = -1073741670;
  }
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v35);
  return (unsigned int)appended;
}
