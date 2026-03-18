/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01B3D00
 * Callers:
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00159D0 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0019198 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C018DD14 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C018E504 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C018F1D8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C01A6F98 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C01B2620 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01B2C5C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01B3840 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01B5930 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C031AA10 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0326AC4 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     DxgkWslShareObjects @ 0x1C03297A0 (DxgkWslShareObjects.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0348C78 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0350488 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0365EC0 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF60 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037B700 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     Feature_1344054585__private_IsEnabledDeviceUsage @ 0x1C0025464 (Feature_1344054585__private_IsEnabledDeviceUsage.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C0175940 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // ebp
  int v15; // ebp

  if ( a3 <= 31 )
  {
    if ( a3 <= 0 )
    {
      WdLogSingleEntry1(1LL, 152LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type > HMGRENTRY_TYPE_FREE", 152LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 151LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type <= HMGRENTRY_TYPE_LIMIT", 151LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v10 = a1[2];
  if ( (unsigned int)v10 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 170LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 170LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) & 0x1F) != 0 )
  {
    WdLogSingleEntry1(1LL, 171LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pEntryTable[Index].Type == HMGRENTRY_TYPE_FREE",
      171LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *(_QWORD *)a1;
  v12 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v13 = 2LL * a1[3];
  a1[2] = v12;
  a1[3] = *(_DWORD *)(v11 + 8 * v13);
  if ( v12 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 178LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListHead < m_TableSize",
      178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1[3] >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 179LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListTail < m_TableSize",
      179LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v14 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v10) = a2;
  v15 = (v14 >> 5) & 3;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) ^ a3) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) &= ~0x4000u;
  if ( (unsigned int)Feature_1344054585__private_IsEnabledDeviceUsage() )
  {
    if ( (unsigned int)(a3 - 4) <= 1 )
      *(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) |= 0x4000u;
  }
  --a1[5];
  return (((v15 << 24) | v10 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v10 + 8) >> 7) & 0x3F;
}
