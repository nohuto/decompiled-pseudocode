/*
 * XREFs of ?Clear@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1801EADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1801C4734 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ??0?$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z @ 0x1801E907C (--0-$ReentrancyGuard@$00@detail@XWinRT@@QEAA@JPECJ@Z.c)
 *     ??4?$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z @ 0x1801E9D00 (--4-$ReentrancyGuard@$00@detail@XWinRT@@QEAAAEAU012@U012@@Z.c)
 *     ?RaiseEvent@?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@Internal@Collections@Foundation@Windows@@SAJAEAU?$ReentrancyGuard@$00@detail@XWinRT@@AEAV?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@25@PEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@W4CollectionChange@345@I@Z @ 0x1801EFDD8 (-RaiseEvent@-$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Wind.c)
 *     ?_EraseAll@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@PEAI@Z @ 0x1801F28CC (-_EraseAll@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDi.c)
 *     ?_Free@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@CAXPEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@I@Z @ 0x1801F2964 (-_Free@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispla.c)
 *     ?hr@?$ReentrancyGuard@$00@detail@XWinRT@@QEAA?BJXZ @ 0x1801F3814 (-hr@-$ReentrancyGuard@$00@detail@XWinRT@@QEAA-BJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::Clear(
        __int64 a1)
{
  _DWORD *v2; // rbx
  __int64 v3; // r14
  bool v4; // r15
  int v5; // edi
  int *v6; // rax
  int v7; // ebx
  RTL_SRWLOCK *v8; // rcx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v11; // [rsp+38h] [rbp-20h]
  _BYTE v12[24]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+90h] [rbp+38h] BYREF
  int v14; // [rsp+98h] [rbp+40h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+48h] BYREF
  RTL_SRWLOCK *v16; // [rsp+A8h] [rbp+50h] BYREF

  v10 = -2147483627;
  v2 = 0LL;
  v14 = 0;
  v3 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v4 = 0;
  XWinRT::SerializingLockPolicy::Write(&v16, (RTL_SRWLOCK *)(a1 + 120), &v13);
  v5 = v13;
  if ( v13 >= 0 )
  {
    v6 = (int *)XWinRT::detail::ReentrancyGuard<1>::ReentrancyGuard<1>(
                  (__int64)v12,
                  *(_DWORD *)(a1 + 168),
                  (_DWORD *)(a1 + 172));
    XWinRT::detail::ReentrancyGuard<1>::operator=((__int64)&v10, v6);
    v13 = XWinRT::detail::ReentrancyGuard<1>::hr(&v10);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v7 = *(_DWORD *)(a1 + 88);
      Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::_EraseAll(
        a1,
        &v15,
        &v14);
      v3 = v15;
      v4 = v7 != 0;
    }
    v2 = v11;
  }
  if ( v16 )
  {
    v8 = v16 + 1;
    if ( LODWORD(v16->Ptr) == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
    v16 = 0LL;
  }
  Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::_Free(v3);
  if ( v5 >= 0 && v4 )
  {
    v5 = Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>::RaiseEvent(
           (unsigned int)&v10,
           (int)a1 + 144,
           a1 != 0 ? a1 + 16 : 0,
           0,
           0);
    v13 = v5;
  }
  if ( v2 )
    *v2 = 0;
  return (unsigned int)v5;
}
