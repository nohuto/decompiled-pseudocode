/*
 * XREFs of ?EnqueueFlipExTokenCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN@@PEAU_DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN@@@Z @ 0x1C028D194
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028DE80 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0002D44 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A7F0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005E884 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::EnqueueFlipExTokenCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN *a2,
        struct _DXGCOMPOSITIONMESSAGE_ENQUEUEFLIPEXTOKEN_RETURN *a3)
{
  __int64 v6; // rbx
  DxgkCompositionObject *v7; // rdi
  BOOL v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  struct DXGFASTMUTEX *v19; // rax
  DxgkCompositionObject *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 result; // rax
  _BYTE v33[8]; // [rsp+30h] [rbp-28h] BYREF
  char v34; // [rsp+38h] [rbp-20h]

  LODWORD(v6) = -1073741811;
  v7 = 0LL;
  v8 = 0;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v33);
  Current = DXGPROCESS::GetCurrent(v10, v9, v11, v12);
  if ( Current )
  {
    if ( *((char *)Current + 347) >= 0 )
    {
      v18 = (*(__int64 (**)(void))(*((_QWORD *)Current + 11) + 216LL))();
      v15 = 1LL;
      v8 = v18 != 0;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
  }
  if ( v34 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v14);
  if ( v8 )
  {
    v19 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, v19, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    v20 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v20 )
    {
      v7 = v20;
      DxgkCompositionObject::AddRef(v20);
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v25 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
    }
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v24);
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
  }
  if ( v7 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*((_QWORD *)v7 + 4) + 40LL))(
            (_QWORD *)v7 + 4,
            *((_QWORD *)a2 + 2),
            *((_QWORD *)a2 + 3),
            (char *)a2 + 32);
    v6 = v27;
    if ( v27 < 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v31 + 24) = v6;
      WdLogEvent5_WdWarning(v31);
    }
    DxgkCompositionObject::Release(v7);
  }
  result = (unsigned int)v6;
  *((_DWORD *)a3 + 1) = v6;
  return result;
}
