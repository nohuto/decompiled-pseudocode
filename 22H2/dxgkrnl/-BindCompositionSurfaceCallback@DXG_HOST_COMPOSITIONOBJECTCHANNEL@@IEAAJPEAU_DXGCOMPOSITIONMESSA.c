/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028C7F8
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028DE80 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005E884 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028AD80 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  __int64 RemoteBundleObject; // rbx
  DxgkCompositionObject *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGFASTMUTEX *v17; // rax
  DxgkCompositionObject *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  struct _KPROCESS *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 i; // rdx
  bool v31; // zf
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rsi
  HANDLE v38; // rcx
  __int64 v39; // rax
  _BYTE v41[16]; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char v43; // [rsp+70h] [rbp-90h]
  HANDLE Handle[32]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v11 = *((_DWORD *)a2 + 41);
  v12 = 31LL;
  if ( v11 < 0x1F )
    v12 = v11;
  *((_DWORD *)a2 + 41) = v12;
  Current = DXGPROCESS::GetCurrent(v12, v8, v9, v10);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    v17 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, v17, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
    v18 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v18 )
    {
      v7 = v18;
      DxgkCompositionObject::AddRef(v18);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
    }
    if ( v41[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41, v22);
  }
  else
  {
    v24 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
  }
  if ( v7 )
  {
    v25 = (struct _KPROCESS *)*((_QWORD *)this + 5);
    v43 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v25);
    RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                                *((unsigned int *)a2 + 266),
                                (unsigned int)(*((_DWORD *)a2 + 41) + 1),
                                Handle,
                                *((struct _EPROCESS **)this + 3));
    if ( v43 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)RemoteBundleObject < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v39 + 24) = RemoteBundleObject;
      WdLogEvent5_WdWarning(v39);
    }
    else
    {
      v29 = *((unsigned int *)a2 + 41);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v29; v29 = *((unsigned int *)a2 + 41) )
      {
        *((_QWORD *)a2 + 3 * i + 21) = Handle[i];
        i = (unsigned int)(i + 1);
      }
      v31 = *((_DWORD *)a2 + 4) == 0;
      *((_QWORD *)a2 + 116) = Handle[v29];
      LOBYTE(v28) = !v31;
      v32 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 24LL))(
              (_QWORD *)v7 + 4,
              (char *)a2 + 24,
              v28,
              (char *)a3 + 16);
      RemoteBundleObject = v32;
      if ( v32 < 0 )
      {
        v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v36 + 24) = RemoteBundleObject;
        WdLogEvent5_WdWarning(v36);
      }
      v37 = 0LL;
      if ( *((_DWORD *)a2 + 41) != -1 )
      {
        do
        {
          v38 = Handle[v37];
          if ( v38 )
            ObCloseHandle(v38, 1);
          v37 = (unsigned int)(v37 + 1);
        }
        while ( (unsigned int)v37 < *((_DWORD *)a2 + 41) + 1 );
      }
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
