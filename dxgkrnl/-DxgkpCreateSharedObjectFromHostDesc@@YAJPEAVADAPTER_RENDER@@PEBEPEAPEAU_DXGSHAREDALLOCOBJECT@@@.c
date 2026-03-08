/*
 * XREFs of ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C036F040
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379070 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x1C00468E0 (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x1C00525F8 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00532A0 (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0053394 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0186E18 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C01881E4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C01A8CD4 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C01CA2A0 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C034A5B0 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkpCreateSharedObjectFromHostDesc(
        struct ADAPTER_RENDER *a1,
        const unsigned __int8 *a2,
        struct _LIST_ENTRY **a3)
{
  __int64 v5; // rdi
  struct DXGSHAREDRESOURCE *SharedResource; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r8
  struct DXGSHAREDRESOURCE *v10; // rsi
  const wchar_t *v11; // r9
  unsigned int v12; // eax
  const unsigned __int8 *v13; // r15
  const unsigned __int8 *v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  __int64 v17; // rax
  unsigned int v18; // eax
  void *v19; // rax
  unsigned int v20; // eax
  void *v21; // rax
  unsigned int v22; // eax
  DXGADAPTERALLOCATION_VGPU *v23; // rax
  DXGADAPTERALLOCATION_VGPU *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  DXGADAPTERALLOCATION_VGPU *v27; // r15
  const unsigned __int8 *v28; // rcx
  unsigned int v29; // eax
  void *v30; // rax
  const unsigned __int8 *v31; // rcx
  struct DXGSHAREDRESOURCE *v32; // r15
  struct DXGSHAREDRESOURCE **v33; // rcx
  int v34; // edi
  ADAPTER_RENDER *v35; // r15
  int v36; // eax
  DXGGLOBAL *v37; // rax
  int v38; // eax
  struct DXGSYNCOBJECT *v39; // rbx
  PERESOURCE *Global; // rax
  struct DXGKEYEDMUTEX *v42; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGSYNCOBJECT *v43; // [rsp+58h] [rbp-A8h] BYREF
  const unsigned __int8 *v44; // [rsp+60h] [rbp-A0h]
  _DWORD v45[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+80h] [rbp-80h]
  int v49; // [rsp+84h] [rbp-7Ch]
  __int128 v50; // [rsp+88h] [rbp-78h]
  _DWORD v51[40]; // [rsp+A0h] [rbp-60h] BYREF
  int v53; // [rsp+158h] [rbp+58h]
  struct _LIST_ENTRY *v55; // [rsp+168h] [rbp+68h] BYREF

  v55 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  LODWORD(v5) = 0;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(a1, 0LL, 0);
  v9 = -1LL;
  v10 = SharedResource;
  if ( !SharedResource )
  {
    v5 = 14088LL;
    WdLogSingleEntry1(6LL, 14088LL);
    v11 = L"Failed to create shared resource for host shared resource";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v11, v5, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v5) = -1073741801;
LABEL_38:
    if ( v55 )
    {
      WdLogSingleEntry1(1LL, 14280LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSharedAllocObject == nullptr",
        14280LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 17, 0xFFFFFFFF) == 1 )
      DXGSHAREDRESOURCE::Destroy(v10, 0LL, 0);
    if ( v42 )
      DXGKEYEDMUTEX::ReleaseReference(v42);
    v39 = v43;
    if ( v43 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, v39, 0);
    }
    goto LABEL_48;
  }
  v12 = *((_DWORD *)a2 + 18);
  v13 = a2 + 80;
  v14 = a2 + 92;
  if ( v12 > 1 )
  {
    v16 = v12;
    v15 = 8LL * v12;
    if ( !is_mul_ok(v16, 8uLL) )
      v15 = -1LL;
    v17 = operator new[](v15, 0x4B677844u, 256LL);
    if ( !v17 )
    {
      WdLogSingleEntry1(3LL, 14104LL);
      LODWORD(v5) = -1073741801;
      goto LABEL_38;
    }
    *((_QWORD *)v10 + 21) = v17;
  }
  *((_DWORD *)v10 + 3) = *(_DWORD *)v13;
  v18 = *((_DWORD *)v13 + 1);
  if ( v18 )
  {
    v19 = operator new(v18, v7, v9, v14);
    *((_QWORD *)v10 + 15) = v19;
    if ( !v19 )
    {
      v5 = 14120LL;
      WdLogSingleEntry1(6LL, 14120LL);
      v11 = L"Failed to allocate shared resource private driver data";
      goto LABEL_3;
    }
    *((_DWORD *)v10 + 32) = *((_DWORD *)v13 + 1);
    v14 += *((unsigned int *)v13 + 1);
  }
  v20 = *((_DWORD *)v13 + 2);
  if ( v20 )
  {
    v21 = operator new(v20, v7, v9, v14);
    *((_QWORD *)v10 + 13) = v21;
    if ( !v21 )
    {
      v5 = 14135LL;
      WdLogSingleEntry1(6LL, 14135LL);
      v11 = L"Failed to allocate shared resource runtime data";
      goto LABEL_3;
    }
    *((_DWORD *)v10 + 28) = *((_DWORD *)v13 + 2);
    v14 += *((unsigned int *)v13 + 2);
  }
  v53 = 0;
  v22 = *((_DWORD *)a2 + 18);
  if ( !v22 )
  {
LABEL_27:
    *((_DWORD *)v10 + 33) = v22;
    v34 = *((_DWORD *)a2 + 14);
    if ( v34 )
    {
      memset(v51, 0, 0x60uLL);
      v35 = a1;
      v51[3] |= 3u;
      v51[2] = 3;
      v36 = CreateSynchronizationObjectInternal(0LL, 1, (__int64)a1, (__int64)v51, 0xEu, v34, &v43, 0LL, 0LL);
      v5 = v36;
      if ( v36 < 0 )
      {
LABEL_29:
        WdLogSingleEntry1(3LL, v5);
        goto LABEL_38;
      }
    }
    else
    {
      v35 = a1;
    }
    if ( !*((_DWORD *)a2 + 15)
      || (v37 = DXGGLOBAL::GetGlobal(),
          v38 = DXGGLOBAL::CreateKeyedMutex(
                  v37,
                  *(_QWORD *)v14,
                  (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)1,
                  *((_DWORD *)a2 + 15),
                  &v42),
          v5 = v38,
          v38 >= 0) )
    {
      v45[1] = 0;
      v49 = 0;
      v46 = 0LL;
      v47 = 0LL;
      LOBYTE(v8) = 1;
      v45[0] = 48;
      v48 = 64;
      v50 = 0LL;
      LODWORD(v5) = ObCreateObject(1LL, g_pDxgkSharedAllocationObjectType, v45, v8, 0LL, 48, 0, 0, &v55);
      if ( (int)v5 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)v10 + 16, 1u);
        v55[1].Flink = (struct _LIST_ENTRY *)v10;
        v55[1].Blink = (struct _LIST_ENTRY *)v42;
        v55[2].Flink = (struct _LIST_ENTRY *)v43;
        LODWORD(v55[2].Blink) = *((_DWORD *)a2 + 13);
        ADAPTER_RENDER::AddNtSharedAllocObject(v35, v55);
        goto LABEL_48;
      }
      WdLogSingleEntry1(2LL, 14260LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create shared alloc object",
        14260LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_38;
    }
    goto LABEL_29;
  }
  while ( 1 )
  {
    v44 = v14;
    v14 += 56;
    v23 = (DXGADAPTERALLOCATION_VGPU *)operator new[](0x78uLL, 0x4B677844u, 256LL);
    if ( !v23 )
      break;
    v24 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v23);
    v27 = v24;
    if ( !v24 )
      break;
    v28 = v44;
    *((_DWORD *)v24 + 1) = *(_DWORD *)v44 | 0x20000;
    *((_OWORD *)v24 + 4) = *(_OWORD *)(v28 + 8);
    *((_OWORD *)v24 + 5) = *(_OWORD *)(v28 + 24);
    *((_OWORD *)v24 + 6) = *(_OWORD *)(v28 + 40);
    v29 = *((_DWORD *)v28 + 1);
    if ( v29 )
    {
      v30 = operator new(v29, v25, v26, v14);
      *((_QWORD *)v27 + 4) = v30;
      if ( !v30 )
      {
        v5 = 14165LL;
        WdLogSingleEntry1(6LL, 14165LL);
        v11 = L"Failed to allocate private driver data for DXGADAPTERALLOCATION_VGPU";
        goto LABEL_3;
      }
      v31 = v44;
      *((_DWORD *)v27 + 10) = *((_DWORD *)v44 + 1);
      v14 += *((unsigned int *)v31 + 1);
    }
    v32 = (DXGADAPTERALLOCATION_VGPU *)((char *)v27 + 48);
    v33 = (struct DXGSHAREDRESOURCE **)*((_QWORD *)v10 + 18);
    if ( *v33 != (struct DXGSHAREDRESOURCE *)((char *)v10 + 136) )
      __fastfail(3u);
    *(_QWORD *)v32 = (char *)v10 + 136;
    *((_QWORD *)v32 + 1) = v33;
    *v33 = v32;
    *((_QWORD *)v10 + 18) = v32;
    v22 = *((_DWORD *)a2 + 18);
    if ( ++v53 >= v22 )
      goto LABEL_27;
  }
  WdLogSingleEntry1(6LL, 14152LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DXGADAPTERALLOCATION_VGPU object for shared host resource",
    14152LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_48:
  *a3 = v55;
  return (unsigned int)v5;
}
