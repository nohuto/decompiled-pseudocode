/*
 * XREFs of ?ContainsView@ViewGroup@@UEAA_NPEAUIApplicationView@@@Z @ 0x180306760
 * Callers:
 *     <none>
 * Callees:
 *     ??$distance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@std@@@std@@YA_JV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@0@0@Z @ 0x1802D811C (--$distance@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@UIShel.c)
 */

bool __fastcall ViewGroup::ContainsView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 Ptr; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // bl

  v4 = this + 21;
  AcquireSRWLockShared(this + 21);
  Ptr = (__int64)this[22].Ptr;
  v6 = *(_QWORD *)(Ptr + 8);
  v7 = v6;
  v8 = Ptr;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)a2 )
    {
      if ( *(_BYTE *)(v8 + 25) && (unsigned __int64)a2 < *(_QWORD *)(v7 + 32) )
        v8 = v7;
      Ptr = v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( !*(_BYTE *)(v8 + 25) )
    v6 = *(_QWORD *)v8;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( (unsigned __int64)a2 >= *(_QWORD *)(v6 + 32) )
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v8 = v6;
      v6 = *(_QWORD *)v6;
    }
  }
  v9 = std::distance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy> const,wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>>>>(
         Ptr,
         v8) != 0;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v9;
}
