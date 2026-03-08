/*
 * XREFs of ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01A3A50
 * Callers:
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000E0E4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C0187268 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C01A2B10 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01A314C (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C01A3710 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C01A5270 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C01B57FC (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C01B6B20 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0315A34 (-InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C0322084 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     DxgkWslShareObjects @ 0x1C0324D60 (DxgkWslShareObjects.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0344238 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C034BA24 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0361430 (-AllocateHandle@DXGCHANNELENDPOINTPROXY@@UEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03767F0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0376E60 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C01CAA80 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 */

__int64 __fastcall HMGRTABLE::AllocHandle(unsigned int *a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // r8d

  if ( a3 > 31 )
  {
    WdLogSingleEntry1(1LL, 150LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type <= HMGRENTRY_TYPE_LIMIT", 150LL, 0LL, 0LL, 0LL, 0LL);
  }
  else if ( a3 <= 0 )
  {
    WdLogSingleEntry1(1LL, 151LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Type > HMGRENTRY_TYPE_FREE", 151LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a1[5] <= 0x80 && !HMGRTABLE::ExpandTable((HMGRTABLE *)a1) )
    return 0LL;
  v9 = a1[2];
  if ( (unsigned int)v9 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 169LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 169LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0x1F) != 0 )
  {
    WdLogSingleEntry1(1LL, 170LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pEntryTable[Index].Type == HMGRENTRY_TYPE_FREE",
      170LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)a1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 16LL * a1[2]);
  v12 = 2LL * a1[3];
  a1[2] = v11;
  a1[3] = *(_DWORD *)(v10 + 8 * v12);
  if ( v11 >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 177LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListHead < m_TableSize",
      177LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1[3] >= a1[4] )
  {
    WdLogSingleEntry1(1LL, 178LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeHandleListTail < m_TableSize",
      178LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8);
  *(_QWORD *)(*(_QWORD *)a1 + 16 * v9) = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ a3) & 0x1F;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^= (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) ^ (a4 << 7)) & 0x1F80;
  *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) = *(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) & 0xFFFFDFFF | (a5 != 0 ? 0x2000 : 0);
  --a1[5];
  return (((((v13 >> 5) & 3) << 24) | v9 & 0xFFFFFF) << 6) | (*(_DWORD *)(*(_QWORD *)a1 + 16 * v9 + 8) >> 7) & 0x3F;
}
