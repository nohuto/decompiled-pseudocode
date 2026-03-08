/*
 * XREFs of ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C0346AF4
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C0347060 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0371BC8 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2)
{
  __int64 v2; // rbx
  DXGSHAREDVMOBJECT *v3; // rax

  v2 = (unsigned int)a2;
  v3 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 64LL))(
                              *((_QWORD *)this + 1),
                              a2,
                              13LL);
  if ( v3 && *(_DWORD *)v3 == 16 )
  {
    DXGSHAREDVMOBJECT::ReleaseReference(v3);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid shared object handle: 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
