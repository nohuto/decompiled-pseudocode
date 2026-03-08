/*
 * XREFs of ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346DF8
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0346B84 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B044 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkExtractBundleObjectInternal @ 0x1C0323344 (DxgkExtractBundleObjectInternal.c)
 *     ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C036DA00 (-AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        struct _EPROCESS *a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  struct DXGFASTMUTEX *v11; // rax
  DXGSHAREDVMOBJECT *v12; // rax
  DXGSHAREDVMOBJECT *v13; // rsi
  struct _KPROCESS *v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rdi
  int BundleObjectInternal; // eax
  unsigned int v18; // edi
  _BYTE v19[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  _BYTE *v24; // [rsp+70h] [rbp-90h]
  void **v25; // [rsp+78h] [rbp-88h]
  __int128 v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-68h] BYREF
  char v29; // [rsp+C8h] [rbp-38h]
  _BYTE v30[64]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a3;
  v8 = a2;
  if ( !a2 || a3 - 1 > 0xF || !a4 )
  {
    WdLogSingleEntry4(3LL, a2, a3, a4, -1073741811LL);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 3);
  if ( PsGetCurrentProcess(this) != v9 && (unsigned __int8)PsGetProcessExitProcessCalled(v9) )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 3), -1073741558LL);
    return 3221225738LL;
  }
  v11 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v12 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                               *((_QWORD *)this + 1),
                               (unsigned int)v8,
                               13LL);
  v13 = v12;
  if ( !v12 || *(_DWORD *)v12 != 16 )
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared object handle: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v20 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    return 3221225485LL;
  }
  DXGSHAREDVMOBJECT::AddReference(v12);
  if ( v20 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  v14 = (struct _KPROCESS *)*((_QWORD *)this + 3);
  v29 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, v14);
  v23 = 0;
  v27 = 0LL;
  v26 = 0LL;
  if ( (_DWORD)v6 )
  {
    v15 = v6;
    v16 = v30;
    while ( v15 )
    {
      *v16++ = 0x10000000;
      --v15;
    }
  }
  v21 = *((_QWORD *)v13 + 2);
  v22 = v6;
  v24 = v30;
  v25 = a4;
  BundleObjectInternal = DxgkExtractBundleObjectInternal(0LL, 0, a5, (ULONG64)&v21);
  v18 = BundleObjectInternal;
  if ( BundleObjectInternal < 0 )
    WdLogSingleEntry1(3LL, BundleObjectInternal);
  DXGSHAREDVMOBJECT::ReleaseReference(v13);
  if ( v29 )
    KeUnstackDetachProcess(&ApcState);
  return v18;
}
