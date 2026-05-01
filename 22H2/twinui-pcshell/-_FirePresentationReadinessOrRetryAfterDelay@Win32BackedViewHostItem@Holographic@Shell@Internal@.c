/*
 * XREFs of ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802C3ABC
 * Callers:
 *     LambdaHelpers::CLambda__lambda_3ce61c1b5ffbb910afab198a725bb5d9___::Invoke @ 0x1800C91A0 (LambdaHelpers--CLambda__lambda_3ce61c1b5ffbb910afab198a725bb5d9___--Invoke.c)
 *     ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802C52F0 (-add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJP.c)
 *     ?put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1802C6230 (-put_Visibility@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     LambdaHelpers::SetDelayOnCurrentThread__lambda_3ce61c1b5ffbb910afab198a725bb5d9___ @ 0x1800C81E0 (LambdaHelpers--SetDelayOnCurrentThread__lambda_3ce61c1b5ffbb910afab198a725bb5d9___.c)
 *     ??1TabWrapper@@QEAA@XZ @ 0x1800C869C (--1TabWrapper@@QEAA@XZ.c)
 *     ??$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802BAC70 (--$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x1802C4584 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?get_ReadyToPresent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C5DB0 (-get_ReadyToPresent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int ready; // ebx
  __int64 v9; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+20h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 80)
    && ((Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v15, (RTL_SRWLOCK *)this + 81),
         (v6 = *((_QWORD *)this + 80)) != 0)
      ? (v7 = (__int64)(*(_QWORD *)(v6 + 24) - *(_QWORD *)(v6 + 16)) >> 3)
      : (v7 = 0LL),
        (Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v15), v7)
     && (LOBYTE(v15) = 0,
         (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_ReadyToPresent(
                this,
                (unsigned __int8 *)&v15) >= 0)
     && (_BYTE)v15) )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(this, 1);
    if ( ready < 0 )
    {
      v9 = 722LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      return (unsigned int)ready;
    }
    return 0LL;
  }
  else if ( a2 )
  {
    v15 = (RTL_SRWLOCK *)this;
    v11 = wil::com_weak_copy_failfast<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
            &v16,
            (__int64 *)&v15);
    v12 = *v11;
    *v11 = 0LL;
    v13[0] = v12;
    v13[1] = (__int64)this;
    v13[2] = a2;
    v13[3] = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 76);
    ready = LambdaHelpers::SetDelayOnCurrentThread__lambda_3ce61c1b5ffbb910afab198a725bb5d9___(
              (__int64 *)this + 76,
              (unsigned int)a3,
              (__int64)v13);
    TabWrapper::~TabWrapper(v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    if ( ready < 0 )
    {
      v9 = 744LL;
      goto LABEL_10;
    }
    return 1LL;
  }
  else
  {
    return 2147943635LL;
  }
}
