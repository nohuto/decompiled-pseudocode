/*
 * XREFs of ndisIfDeleteCompartment @ 0x1C00B32E8
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020824 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B3A40 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0026070 (WPP_RECORDER_SF_dd_ea_1C0026070.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0034708 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     WPP_RECORDER_SF_Ll @ 0x1C00B3B54 (WPP_RECORDER_SF_Ll.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109B28 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C01277D0 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C01279E0 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v2; // ebx
  char v3; // di
  KIRQL v4; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v6; // edx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // rsi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  NET_IFTYPE v16; // bx
  __int64 v17; // rdi
  KIRQL v18; // di
  __int64 v19; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK **v20; // rdx
  void **v21; // r14
  PVOID *v22; // rdi
  PVOID v23; // rcx
  void **v24; // rax
  int v26; // [rsp+28h] [rbp-E0h]
  _QWORD v27[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v29[132]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = 0;
  memset(v27, 0, 0x48uLL);
  memset(v29, 0, sizeof(v29));
  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v7 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    v2 = -1073741072;
    goto LABEL_20;
  }
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 || (v8 = *((_DWORD *)CompartmentBlock + 10), (v8 & 1) != 0) )
  {
LABEL_31:
    v2 = -1073741811;
    goto LABEL_20;
  }
  if ( (v8 & 2) == 0 )
  {
    v3 = 1;
    *((_DWORD *)v7 + 10) = v8 | 2;
  }
  if ( *((int *)v7 + 12) <= 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)v7 + 3);
    if ( v9 == (_QWORD *)((char *)v7 + 24) )
    {
LABEL_16:
      v10 = *((_QWORD *)v7 + 7);
      v11 = *(_QWORD **)(v10 + 56);
      if ( v11 == (_QWORD *)(v10 + 56) )
      {
LABEL_19:
        *((_DWORD *)v7 + 10) |= 1u;
        *(_DWORD *)(v10 + 72) |= 2u;
        goto LABEL_20;
      }
      while ( v11 - 158 == *((_QWORD **)v7 + 213) )
      {
        v11 = (_QWORD *)*v11;
        if ( v11 == (_QWORD *)(v10 + 56) )
          goto LABEL_19;
      }
    }
    else
    {
      while ( v9 - 2 == *((_QWORD **)v7 + 7) )
      {
        v9 = (_QWORD *)*v9;
        if ( v9 == (_QWORD *)((char *)v7 + 24) )
          goto LABEL_16;
      }
    }
    goto LABEL_31;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      a1);
  v2 = -1073740024;
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisNsiNotifyClientCompartmentChange(v7, 2LL);
  if ( v2 >= 0 )
  {
    v15 = *((_QWORD *)v7 + 213);
    v16 = *(_WORD *)(v15 + 524);
    v17 = (*(_QWORD *)(v15 + 1312) >> 24) & 0xFFFFFFLL;
    NdisIfDeregisterInterface(*(_DWORD *)(v15 + 4));
    NdisIfFreeNetLuidIndex(v16, v17);
    HIDWORD(v27[1]) = 0;
    v27[2] = &NPI_MS_NDIS_MODULEID;
    v27[5] = (char *)v7 + 80;
    v27[3] = 6LL;
    v27[4] = 0x300000002LL;
    v27[6] = 16LL;
    memset(&v29[1], 0, 0x20CuLL);
    v29[0] = 34603436;
    v27[8] = 528LL;
    v27[7] = v29;
    v2 = NsiSetAllParametersEx(v27);
    if ( v2 >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      *((_QWORD *)v7 + 214) = &Event;
      v19 = *(_QWORD *)v7;
      if ( *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(*(_QWORD *)v7 + 8LL) != v7
        || (v20 = (struct _NDIS_IF_COMPARTMENT_BLOCK **)*((_QWORD *)v7 + 1), *v20 != v7) )
      {
LABEL_36:
        __fastfail(3u);
      }
      *v20 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      _InterlockedDecrement(&dword_1C00E7118);
      COMPARTMENTBLOCK_DECREMENT_REF(v7);
      KeReleaseSpinLock(&ndisIfListLock, v18);
      ndisWaitForKernelObject(&Event);
      *((_QWORD *)v7 + 214) = 0LL;
      v21 = (void **)((char *)v7 + 1728);
      while ( 1 )
      {
        v22 = (PVOID *)*v21;
        if ( *v21 == v21 )
          break;
        ObfDereferenceObject(v22[2]);
        v23 = *v22;
        if ( *((PVOID **)*v22 + 1) != v22 )
          goto LABEL_36;
        v24 = (void **)v22[1];
        if ( *v24 != v22 )
          goto LABEL_36;
        *v24 = v23;
        *((_QWORD *)v23 + 1) = v24;
        --*((_DWORD *)v7 + 430);
        ExFreePoolWithTag(v22, 0);
      }
      ExFreePoolWithTag(v7, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v13, v14, v26, v2, a1);
  return (unsigned int)v2;
}
