/*
 * XREFs of ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180066308
 * Callers:
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x1800225BC (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180029070 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Append@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1801EA6E0 (-Append@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDispl.c)
 *     ?InsertAt@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@@Z @ 0x1801EE420 (-InsertAt@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDis.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007E5C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     memmove_s @ 0x1801CA074 (memmove_s.c)
 *     ??$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@?$EventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_18fc82b29393100b2544100e203bc48c_@@@Z @ 0x1801E8410 (--$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@-$EventSource@U-$VectorChangedEventHand.c)
 *     ??$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@345@AEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@@12@AEAW4CollectionChange@Collections@Foundation@Windows@@AEAI@Z @ 0x1801E8BBC (--$Make@VVectorChangedEventArgs@Internal@Collections@Foundation@Windows@@AEAW4CollectionChange@3.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // r12
  bool v6; // zf
  RTL_SRWLOCK *v7; // r15
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // r8d
  int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  void *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v22; // rbx
  int v23; // [rsp+20h] [rbp-50h] BYREF
  _DWORD *v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-38h]
  unsigned int v27; // [rsp+3Ch] [rbp-34h]
  int v28; // [rsp+40h] [rbp-30h]
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+40h] BYREF

  v4 = (_DWORD *)(a1 + 120);
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 120) == 1;
  v7 = (RTL_SRWLOCK *)(a1 + 128);
  v24 = (_DWORD *)(a1 + 120);
  if ( v6 )
  {
    if ( !LODWORD(v7->Ptr) )
      LODWORD(v7->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 128));
  }
  v12 = *(_DWORD *)(a1 + 88);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 88);
  if ( a2 > v12 )
  {
    v13 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else if ( v12 >= 0x7FFFFFFF )
  {
    v13 = -2147024882;
  }
  else
  {
    v13 = -2147483627;
    if ( !*(_DWORD *)(a1 + 172) )
    {
      v13 = 0;
      if ( *(int *)(a1 + 168) > 0 )
      {
        v5 = (_DWORD *)(a1 + 172);
        *(_DWORD *)(a1 + 172) = 1;
      }
    }
    if ( v13 < 0 )
    {
      RoOriginateError((unsigned int)v13, 0LL);
    }
    else
    {
      v14 = *(_DWORD *)(a1 + 92);
      if ( *(_DWORD *)(a1 + 88) + 1 > v14 )
      {
        v15 = 1;
        v27 = v14 + 1;
        v26 = (v14 >> 1) + v14;
        v16 = *(_QWORD *)(a1 + 104);
        if ( v14 + 1 <= v26 )
          v15 = v14 >> 1;
        v13 = 0;
        v17 = v14 + v15;
        if ( v16 )
          v18 = (void *)_o_realloc(v16, 4LL * v17);
        else
          v18 = malloc(4LL * v17);
        if ( v18 )
        {
          *(_QWORD *)(a1 + 104) = v18;
          *(_DWORD *)(a1 + 92) = v17;
        }
        else
        {
          v13 = -2147024882;
        }
      }
      if ( v13 >= 0 )
      {
        v19 = *(_DWORD *)(a1 + 88);
        if ( a2 < v19
          && memmove_s(
               (void *const)(*(_QWORD *)(a1 + 104) + 4LL * (a2 + 1)),
               4LL * (*(_DWORD *)(a1 + 92) - a2 - 1),
               (const void *const)(*(_QWORD *)(a1 + 104) + 4LL * a2),
               4LL * (v19 - a2)) )
        {
          v13 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        if ( v13 >= 0 )
        {
          v20 = *(_QWORD *)(a1 + 104);
          v28 = 0;
          *(_DWORD *)(v20 + 4LL * a2) = a3;
          ++*(_DWORD *)(a1 + 88);
          ++*(_DWORD *)(a1 + 136);
        }
      }
    }
    v4 = v24;
  }
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v7->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v7);
    v24 = 0LL;
  }
  if ( v13 >= 0 )
  {
    v13 = 0;
    v32 = a2;
    v23 = 1;
    if ( !v5 )
      return (unsigned int)v13;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::VectorChangedEventArgs,enum Windows::Foundation::Collections::CollectionChange &,unsigned int &>(
      &v25,
      &v23,
      &v32);
    v22 = v25;
    if ( v25 )
    {
      v30 = v25;
      v31[0] = &v29;
      v29 = a1 + 16;
      v31[1] = &v30;
      v13 = Microsoft::WRL::EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_18fc82b29393100b2544100e203bc48c_>(
              a1 + 144,
              v31);
      v25 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v22);
    }
  }
  if ( v5 )
    *v5 = 0;
  return (unsigned int)v13;
}
