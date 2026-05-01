/*
 * XREFs of ?EnumerateAppViews@UwpAppPackageInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C8E54
 * Callers:
 *     ?EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C8DC0 (-EnumerateAppStateData@UwpAppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UwpAppPackageInfo::EnumerateAppViews(
        UwpAppPackageInfo *this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  UwpAppPackageInfo *v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *j; // rbx
  __int64 **v8; // rax
  __int64 i; // rax
  __int64 *v10; // rcx

  v3 = *(_QWORD *)a2;
  v5 = this;
  if ( *((_QWORD *)this + 3) >= 8uLL )
    v5 = *(UwpAppPackageInfo **)this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, UwpAppPackageInfo *))(v3 + 24))(
    a2,
    v5);
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  j = (_QWORD *)*v6;
  while ( j != v6 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, _QWORD))(*(_QWORD *)a2 + 48LL))(
      a2,
      j[4]);
    v8 = (__int64 **)j[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v10 = *v8;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
        j = v10;
    }
  }
}
