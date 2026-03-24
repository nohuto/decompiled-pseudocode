/*
 * XREFs of ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171360
 * Callers:
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0171148 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0244D90 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02ABBC8 (-OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN.c)
 *     ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02ABEEC (-OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00085E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C4D0 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C001C588 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C011AC00 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGGLOBAL::OpenSyncObject(
        PERESOURCE *this,
        __int64 a2,
        struct DXGSYNCOBJECT **a3,
        unsigned int *a4,
        struct DXGADAPTERSYNCOBJECT **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rbx
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  _BYTE v35[16]; // [rsp+60h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( !a3 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 2790LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v25 + 24) = 2791LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(this) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v26 + 24) = 2792LL;
    WdLogEvent5_WdAssertion(v26);
  }
  *a3 = 0LL;
  *a4 = 0;
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  v15 = *((_BYTE *)Current + 347);
  if ( (v15 & 0x30) != 0 )
  {
    if ( (v15 & 0x20) != 0 )
      v27 = *((_QWORD *)Current + 62);
    else
      v27 = (unsigned __int64)Current & -(__int64)((v15 & 0x10) != 0);
    v28 = v27 + 208;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 208));
    v29 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 < *(_DWORD *)(v27 + 256) )
    {
      v30 = *(_QWORD *)(v27 + 240);
      v31 = *(_DWORD *)(v30 + 16 * v29 + 8);
      if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60)
        && (v31 & 0x2000) == 0
        && (v31 & 0x1F) != 0 )
      {
        v32 = v31 & 0x1F;
        if ( (_BYTE)v32 == 8 )
        {
          ObjectA = *(DXGSYNCOBJECT **)(v30 + 16LL * (unsigned int)v29);
          goto LABEL_25;
        }
        v33 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v32);
        *(_QWORD *)(v33 + 24) = 316LL;
        WdLogEvent5_WdError(v33);
      }
    }
    ObjectA = 0LL;
LABEL_25:
    ExReleasePushLockSharedEx(v28, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_10;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v35, v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  Global = DXGGLOBAL::GetGlobal(v17, v16);
  ObjectA = (DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v5, 8);
  if ( v35[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35, v19);
LABEL_10:
  if ( !ObjectA )
  {
    v34 = WdLogNewEntry5_WdWarning(v20, v19, v22);
    *(_QWORD *)(v34 + 24) = v5;
LABEL_29:
    WdLogEvent5_WdWarning(v34);
    return 3221225485LL;
  }
  if ( (unsigned int)(*((_DWORD *)ObjectA + 48) - 5) <= 1 )
  {
    v34 = WdLogNewEntry5_WdWarning(v20, v19, v22);
    *(_QWORD *)(v34 + 24) = 2825LL;
    goto LABEL_29;
  }
  result = DXGSYNCOBJECT::Open(ObjectA, 0LL, 0LL, 0LL, a4, 0LL, 0LL, 0, a5, 0, DXGSYNCOBJECT::FlagsDefault);
  if ( (int)result >= 0 )
    *a3 = ObjectA;
  return result;
}
