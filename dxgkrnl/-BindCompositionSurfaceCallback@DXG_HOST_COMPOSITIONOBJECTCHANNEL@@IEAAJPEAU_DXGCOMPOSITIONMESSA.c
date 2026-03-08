/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02DC3D0
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02DE0D0 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346B84 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035D5D4 (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *v3; // r12
  __int64 RemoteBundleObject; // rsi
  DxgkCompositionObject *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v11; // rax
  unsigned int *v12; // r13
  DxgkCompositionObject *v13; // rax
  struct _KPROCESS *v14; // rdx
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // bl
  __int64 v20; // r12
  HANDLE v21; // rcx
  NTSTATUS v22; // esi
  __int64 v23; // rax
  HANDLE v24; // rcx
  __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rbx
  HANDLE v33; // rcx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v37[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-90h] BYREF
  char v39; // [rsp+A0h] [rbp-60h]
  HANDLE Handle[32]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = a3;
  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v8 = *((_DWORD *)a2 + 47);
  v9 = 31LL;
  if ( v8 < 0x1F )
    v9 = v8;
  *((_DWORD *)a2 + 47) = v9;
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    v12 = (unsigned int *)((char *)a2 + 12);
    goto LABEL_36;
  }
  v11 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  v12 = (unsigned int *)((char *)a2 + 12);
  v13 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                   *((_QWORD *)this + 1),
                                   *((unsigned int *)a2 + 3),
                                   17LL);
  if ( v13 )
  {
    v7 = v13;
    DxgkCompositionObject::AddRef(v13);
  }
  else
  {
    WdLogSingleEntry2(3LL, *v12, -1073741811LL);
  }
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  if ( !v7 )
  {
LABEL_36:
    WdLogSingleEntry2(3LL, *v12, (int)RemoteBundleObject);
    goto LABEL_37;
  }
  v14 = (struct _KPROCESS *)*((_QWORD *)this + 5);
  v39 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v14);
  RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                              *((_DWORD *)a2 + 334),
                              *((_DWORD *)a2 + 47) + 1,
                              Handle,
                              *((struct _EPROCESS **)this + 3));
  if ( v39 )
    KeUnstackDetachProcess(&ApcState);
  if ( (int)RemoteBundleObject < 0 )
  {
    WdLogSingleEntry1(3LL, RemoteBundleObject);
    goto LABEL_32;
  }
  v15 = DXGVAILOBJECT::IsIFlipFeatureEnabled() == 0;
  v18 = *((unsigned int *)a2 + 47);
  v19 = !v15;
  v20 = 0LL;
  if ( !(_DWORD)v18 )
  {
LABEL_20:
    v24 = Handle[v18];
    v25 = *((_QWORD *)a2 + 4);
    v26 = *((_DWORD *)a2 + 44) & 0xFFFFFFEF;
    *((_QWORD *)a2 + 150) = v24;
    LODWORD(v24) = v19 & 1;
    v27 = (unsigned int)((_DWORD)v24 << 6);
    v28 = (unsigned int)v27 | (v26 | (16 * (_DWORD)v24)) & 0xFFFFFFBF;
    *((_DWORD *)a2 + 44) = v28;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v16, v17);
    v29[3] = *((unsigned int *)a2 + 3);
    v29[4] = v7;
    v29[5] = *((int *)a2 + 4);
    v29[6] = *((_QWORD *)a2 + 4);
    LOBYTE(v30) = *((_DWORD *)a2 + 4) != 0;
    v31 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 24LL))(
            (_QWORD *)v7 + 4,
            (char *)a2 + 24,
            v30,
            (char *)a3 + 16);
    RemoteBundleObject = v31;
    if ( v31 >= 0 )
    {
      if ( v25 != *((_QWORD *)a3 + 2) )
        WdLogSingleEntry4(3LL, *((unsigned int *)a2 + 3), v7, *((_QWORD *)a2 + 4), *((_QWORD *)a3 + 2));
    }
    else
    {
      WdLogSingleEntry5(2LL, *((unsigned int *)a2 + 3), v7, *((int *)a2 + 4), *((_QWORD *)a2 + 4), v31);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PairedBind(0x%I64x = 0x%I64x, 0x%I64x, 0x%I64x) failed. Returning 0x%I64x",
        *((unsigned int *)a2 + 3),
        (__int64)v7,
        *((int *)a2 + 4),
        *((_QWORD *)a2 + 4),
        RemoteBundleObject);
    }
    goto LABEL_27;
  }
  while ( 1 )
  {
    v21 = Handle[v20];
    *((_QWORD *)a2 + 4 * (unsigned int)v20 + 24) = v21;
    if ( v19 )
      break;
LABEL_19:
    v18 = *((unsigned int *)a2 + 47);
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= (unsigned int)v18 )
      goto LABEL_20;
  }
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(v21, 0xF0000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  if ( v22 >= 0 )
  {
    v23 = *((_QWORD *)Object + 2);
    if ( v23 )
    {
      if ( *(_DWORD *)(v23 + 132) == 1 )
      {
        v19 &= (*(_DWORD *)(*(_QWORD *)(v23 + 136) - 44LL) & 0x2000) != 0;
        ObfDereferenceObject(Object);
        goto LABEL_19;
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  LODWORD(RemoteBundleObject) = -1073741811;
LABEL_27:
  v32 = 0LL;
  if ( *((_DWORD *)a2 + 47) != -1 )
  {
    do
    {
      v33 = Handle[v32];
      if ( v33 )
        ObCloseHandle(v33, 1);
      v32 = (unsigned int)(v32 + 1);
    }
    while ( (unsigned int)v32 < *((_DWORD *)a2 + 47) + 1 );
  }
  v3 = a3;
LABEL_32:
  DxgkCompositionObject::Release(v7);
  if ( (int)RemoteBundleObject < 0 )
    goto LABEL_36;
LABEL_37:
  *((_DWORD *)v3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
