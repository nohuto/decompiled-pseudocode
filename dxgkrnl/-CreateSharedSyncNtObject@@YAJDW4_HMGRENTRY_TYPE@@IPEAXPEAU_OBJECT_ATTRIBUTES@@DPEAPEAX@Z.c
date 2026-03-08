/*
 * XREFs of ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01DE444
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C0186240 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C03225D0 (DxgkCreateBundleObjectInternal.c)
 *     DxgkWslShareObjects @ 0x1C0324D60 (DxgkWslShareObjects.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01DD0C0 (-DxgkSharedSyncObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x1C038262C (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 */

__int64 __fastcall CreateSharedSyncNtObject(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  int v7; // ebx
  __int64 v8; // r12
  struct DXGPROCESS *Current; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rsi
  struct DXGDEVICESYNCOBJECT *v19; // rsi
  _DWORD *v20; // rsi
  PVOID v21; // rdx
  __int64 result; // rax
  int v23; // edx
  __int64 v24; // r8
  int v25; // edx
  struct DXGGLOBAL *v26; // rax
  unsigned int NtSharedObject; // eax
  PVOID Object; // [rsp+60h] [rbp-9h] BYREF
  struct DXGDEVICESYNCOBJECT *v29; // [rsp+68h] [rbp-1h]
  _BYTE v30[8]; // [rsp+70h] [rbp+7h] BYREF
  char v31; // [rsp+78h] [rbp+Fh]
  _BYTE v32[24]; // [rsp+80h] [rbp+17h] BYREF
  char v33; // [rsp+B8h] [rbp+4Fh]

  v33 = a1;
  v7 = 0;
  v8 = a3;
  Object = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_47:
    v21 = Object;
    if ( Object )
    {
      if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
        DxgkSharedSyncObjectObDeleteProcedure((struct DXGSYNCOBJECT **)Object, (__int64)Object, v17);
      else
        ObfDereferenceObject(Object);
      v21 = 0LL;
    }
    goto LABEL_21;
  }
  v29 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v30, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v30);
  if ( a4 )
    goto LABEL_14;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, Current);
  v15 = *((_DWORD *)Current + 74);
  v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( a2 == 11 )
  {
    if ( v16 >= v15 )
      goto LABEL_5;
    v18 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)v8 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16LL * v16 + 8) & 0x60) )
      goto LABEL_5;
    if ( (*(_DWORD *)(v18 + 16LL * v16 + 8) & 0x2000) != 0 )
      goto LABEL_5;
    v23 = *(_DWORD *)(v18 + 16LL * v16 + 8) & 0x1F;
    if ( !v23 )
      goto LABEL_5;
    if ( v23 != 11 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_5;
    }
    v19 = *(struct DXGDEVICESYNCOBJECT **)(v18 + 16LL * v16);
    v29 = v19;
    if ( !v19 )
    {
LABEL_5:
      v7 = -1073741811;
      WdLogSingleEntry2(3LL, v8, -1073741811LL);
LABEL_6:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      goto LABEL_45;
    }
    a4 = *((_QWORD *)v19 + 4);
  }
  else if ( v16 < v15
         && (v24 = *((_QWORD *)Current + 35),
             (((unsigned int)v8 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16LL * v16 + 8) & 0x60))
         && (*(_DWORD *)(v24 + 16LL * v16 + 8) & 0x2000) == 0
         && (v25 = *(_DWORD *)(v24 + 16LL * v16 + 8) & 0x1F) != 0 )
  {
    if ( a2 == v25 )
    {
      a4 = *(_QWORD *)(v24 + 16LL * v16);
    }
    else
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      a4 = 0LL;
    }
  }
  else
  {
    a4 = 0LL;
  }
  if ( !a4 )
    goto LABEL_5;
  if ( (*(_DWORD *)(a4 + 204) & 2) == 0 )
  {
    _InterlockedIncrement(&dword_1C013D254);
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, a4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
      a4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_6;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_14:
  if ( (*((_DWORD *)Current + 106) & 0x10) != 0 )
  {
    Object = (PVOID)operator new[](0x10uLL, 0x4B677844u, 256LL);
    v20 = Object;
    if ( Object )
      goto LABEL_17;
    WdLogSingleEntry1(6LL, 434LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDSYNCOBJECT",
      434LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = -1073741801;
LABEL_40:
    if ( Object )
    {
      WdLogSingleEntry1(1LL, 440LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 440LL, 0LL, 0LL, 0LL, 0LL);
    }
    WdLogSingleEntry2(3LL, Current, v7);
    goto LABEL_45;
  }
  LOBYTE(v14) = a6;
  LOBYTE(v13) = v33;
  v7 = ObCreateObject(v13, g_pDxgkSharedSyncObjectType, a5, v14, 0LL, 16, 0, 0, &Object);
  if ( v7 < 0 )
    goto LABEL_40;
  v20 = Object;
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)(a4 + 24));
  v20[2] = 0;
  *(_QWORD *)v20 = a4;
  if ( (*(_DWORD *)(a4 + 284) & 2) != 0 )
  {
    v26 = DXGGLOBAL::GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)v26 + 214),
                       Current,
                       v8,
                       (struct DXGSYNCOBJECT *)a4,
                       v29,
                       0LL);
    v20[2] = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry1(2LL, 466LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed",
        466LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v7 = -1073741823;
LABEL_45:
      if ( v31 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v30);
      goto LABEL_47;
    }
  }
  if ( v31 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v30);
  v21 = Object;
LABEL_21:
  result = (unsigned int)v7;
  *a7 = v21;
  return result;
}
