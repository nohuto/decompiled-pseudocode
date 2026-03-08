/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C03541E0
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C03527E8 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1C0058C94 (McTemplateK0pqp_EtwWriteTransfer.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0166CCC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // r14
  const wchar_t *v11; // r9
  PVOID v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  struct DXGGLOBAL *Global; // rax
  PERESOURCE *v23; // rax
  __int64 v24; // rcx
  int v25; // r15d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct DXGPROCESS *Current; // rsi
  unsigned int v30; // edi
  unsigned int v31; // ecx
  __int64 v32; // r8
  int v33; // edx
  PVOID *Object; // [rsp+20h] [rbp-50h]
  int v35; // [rsp+38h] [rbp-38h]
  struct DXGSYNCOBJECT *v36; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v37[8]; // [rsp+58h] [rbp-18h] BYREF
  char v38; // [rsp+60h] [rbp-10h]
  PVOID v39; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+48h] BYREF

  if ( this[3] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 2112LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SwapChainLock.IsOwner()", 2112LL, 0LL, 0LL, 0LL, 0LL);
  }
  *(_QWORD *)a2 = 0LL;
  v39 = 0LL;
  v8 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v39, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v8);
    v11 = L"Failed to verify Surface Nt handle 0x%I64x, error 0x%I64x";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, (__int64)a4, v10, 0LL, 0LL, 0LL);
    return (unsigned int)v10;
  }
  v13 = v39;
  if ( v39 )
  {
    v14 = *((_QWORD *)v39 + 2);
    if ( v14 )
    {
      v15 = (_QWORD *)(v14 + 136);
      v16 = 0LL;
      if ( (_QWORD *)*v15 != v15 )
        v16 = *(_QWORD *)(*v15 - 40LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      {
        LODWORD(Object) = -1227133513 * ((a2 - this[8]) >> 4);
        McTemplateK0pqp_EtwWriteTransfer(0x6DB6DB6DB6DB6DB7LL, v16, v9, this, Object, v16);
      }
    }
  }
  ObfDereferenceObject(v13);
  v40 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v17);
  v20 = PsGetCurrentProcess(v19);
  LOBYTE(v35) = 1;
  v21 = ObDuplicateObject(v20, a4, CurrentProcess, &v40, 0, 0, 6, v35);
  v10 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v21);
    v11 = L"Failed to duplicate Surface Nt handle 0x%I64x, error 0x%I64x";
    goto LABEL_5;
  }
  *((_QWORD *)a3 + 3) = v40;
  *((_QWORD *)a3 + 2) = a4;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  LODWORD(v39) = 0;
  v23 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
  v25 = DXGGLOBAL::OpenSyncObject(v23, *((_DWORD *)a2 + 7), &v36, (unsigned int *)&v39, 0LL);
  if ( v25 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v24);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v30 = (unsigned int)v39;
    v31 = ((unsigned int)v39 >> 6) & 0xFFFFFF;
    if ( v31 < *((_DWORD *)Current + 74) )
    {
      v32 = *((_QWORD *)Current + 35);
      v33 = *(_DWORD *)(v32 + 16LL * v31 + 8);
      if ( (((unsigned int)v39 >> 25) & 0x60) == (v33 & 0x60) && (v33 & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v32 + 16 * (((unsigned __int64)(unsigned int)v39 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry1(1LL, 217LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            217LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * (((unsigned __int64)v30 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a3 + 2) = v30;
    if ( v38 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
    *(_BYTE *)a3 = 1;
  }
  else
  {
    v26 = PsGetCurrentProcess(v24);
    WdLogSingleEntry2(2LL, *((unsigned int *)a2 + 7), v26);
    v28 = PsGetCurrentProcess(v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x in process 0x%I64x",
      *((unsigned int *)a2 + 7),
      v28,
      0LL,
      0LL,
      0LL);
    if ( v38 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v37);
  }
  return (unsigned int)v25;
}
