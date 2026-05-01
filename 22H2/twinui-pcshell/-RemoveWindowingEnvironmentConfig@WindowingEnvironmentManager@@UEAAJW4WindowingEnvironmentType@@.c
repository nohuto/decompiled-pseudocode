/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1803549E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800A1998 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___ @ 0x180353418 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 Ptr; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v18; // [rsp+50h] [rbp+18h]

  v17 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  v18 = v3;
  Ptr = (__int64)a1[4].Ptr;
  v5 = *(_QWORD *)(Ptr + 8);
  v6 = v5;
  v7 = Ptr;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_DWORD *)(v6 + 32) >= v17 )
    {
      if ( *(_BYTE *)(v7 + 25) && v17 < *(_DWORD *)(v6 + 32) )
        v7 = v6;
      Ptr = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( !*(_BYTE *)(v7 + 25) )
    v5 = *(_QWORD *)v7;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( v17 >= *(_DWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v7 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  v16 = Ptr;
  v8 = 0LL;
  while ( Ptr != v7 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v16);
    Ptr = v16;
  }
  try
  {
    if ( !v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x80070057LL);
    *(_QWORD *)v14 = a1 - 17;
    *(_QWORD *)&v14[2] = &v17;
    CurrentThreadId = GetCurrentThreadId();
    v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___(
            v10,
            CurrentThreadId,
            (__int128 *)v14);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        211LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v11);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v12);
  }
  return result;
}
