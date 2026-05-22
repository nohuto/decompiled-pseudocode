/*
 * XREFs of ?AddNodePoseValidityChangedCallback@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJPEAUISpatialGraphNodePoseValidityChangedCallback@234@@Z @ 0x180159444
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x180163A30 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800D4ADC (--$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D61D8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$_Emplace_reallocate@VWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180151A70 (--$_Emplace_reallocate@VWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VW.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::AddNodePoseValidityChangedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *this,
        struct Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback *a2)
{
  __int64 *v4; // rax
  int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback *v12; // [rsp+40h] [rbp+18h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+20h] BYREF

  v12 = a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v12);
  v11 = 0LL;
  v13 = &v11;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v13);
  v5 = Microsoft::WRL::AsWeak<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>(
         (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
         v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2028LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 29);
  try
  {
    v13 = (__int64 *)((char *)this + 232);
    v6 = (__int64 *)*((_QWORD *)this + 31);
    if ( *((__int64 **)this + 32) == v6 )
    {
      std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef>(
        (__int64 **)this + 30,
        v6,
        &v11);
    }
    else
    {
      *v6 = 0LL;
      if ( v6 != &v11 )
      {
        *v6 = v11;
        v11 = 0LL;
      }
      *((_QWORD *)this + 31) += 8LL;
    }
    if ( this != (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)-232LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 29);
    v7 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7F2,
                           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                           v8);
  }
  return result;
}
