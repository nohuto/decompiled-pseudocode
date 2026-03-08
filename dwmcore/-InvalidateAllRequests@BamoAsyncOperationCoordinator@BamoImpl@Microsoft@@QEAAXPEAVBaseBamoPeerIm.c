/*
 * XREFs of ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x1801B6AC0
 * Callers:
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6FE4 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800AC908 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800AC950 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoAsyncOperationCoordinator::InvalidateAllRequests(
        Microsoft::BamoImpl::BamoAsyncOperationCoordinator *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD); // rax
  int v12; // eax
  int v13[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)a2 + 3) + 32LL),
    a3,
    a4);
  v7 = *(_QWORD *)this;
  v8 = 0;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5 )
  {
    v9 = 0LL;
    do
    {
      v10 = 32 * v9;
      v11 = *(__int64 (__fastcall **)(_QWORD))(v10 + v7 + 16);
      if ( v11 )
      {
        v12 = v11(*(_QWORD *)(v10 + v7 + 8));
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            251LL,
            (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoAsyncOperationCoordinator.inl",
            (const char *)(unsigned int)v12,
            v13[0]);
      }
      v7 = *(_QWORD *)this;
      v9 = ++v8;
    }
    while ( v8 < (unsigned __int64)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5) );
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v5,
    v6);
  *((_QWORD *)this + 1) = *(_QWORD *)this;
}
