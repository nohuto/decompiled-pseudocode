/*
 * XREFs of ?GetMany@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAUEventRegistrationToken@@PEAI@Z @ 0x140023690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001EA20 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400596B4 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int v7; // r12d
  _QWORD *v8; // r14
  size_t v9; // rdi
  int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  RTL_SRWLOCK *v17; // rcx
  unsigned int i; // ecx
  void *Block; // [rsp+20h] [rbp-48h]
  RTL_SRWLOCK *v21; // [rsp+28h] [rbp-40h] BYREF
  int v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v23 = 0;
  v7 = 0;
  v22 = 0;
  v8 = a4;
  v9 = a3;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  Block = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v21, a1 + 72, &v22);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v12 = v22;
  }
  else
  {
    v12 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v12 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 40);
    if ( a2 > v7 )
    {
      v12 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v12 >= 0 && a3 )
    {
      v13 = a2;
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          if ( v13 >= v7 )
            break;
          v12 = 0;
          v14 = v13++;
          v15 = v23 + 1;
          *v8++ = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14);
          v23 = v15;
        }
        while ( v15 < a3 );
      }
      else
      {
        do
        {
          if ( v13 >= v7 )
            break;
          v12 = 0;
          v16 = v13;
          ++v5;
          ++v13;
          *v8++ = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v16);
        }
        while ( v5 < a3 );
      }
    }
  }
  if ( v21 )
  {
    v17 = v21 + 1;
    if ( LODWORD(v21->Ptr) == 1 )
      --LODWORD(v17->Ptr);
    else
      ReleaseSRWLockShared(v17);
  }
  if ( v12 >= 0 )
  {
    if ( v23 )
    {
      for ( i = 0; i < a3; ++i )
      {
        if ( i + a2 >= v7 )
          break;
        v12 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete(Block);
  return (unsigned int)v12;
}
