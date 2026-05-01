/*
 * XREFs of ?IsAppActive@Win32AppInfo@@QEAA_NXZ @ 0x1804CC67C
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD444 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?IsProcessActive@Win32ProcessInfo@@QEAA_NXZ @ 0x1804CC7A8 (-IsProcessActive@Win32ProcessInfo@@QEAA_NXZ.c)
 */

char __fastcall Win32AppInfo::IsAppActive(Win32AppInfo *this)
{
  __int64 **v1; // r11
  __int64 **j; // r10
  __int64 *v3; // r10
  __int64 **v4; // rax
  __int64 *i; // rax
  __int64 *v6; // rcx

  v1 = (__int64 **)*((_QWORD *)this + 4);
  j = (__int64 **)*v1;
  while ( j != v1 )
  {
    if ( Win32ProcessInfo::IsProcessActive((Win32ProcessInfo *)j[5]) )
      return 1;
    v4 = (__int64 **)v3[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v3 = i;
      j = (__int64 **)i;
    }
    else
    {
      v6 = *v4;
      for ( j = (__int64 **)v3[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
        j = (__int64 **)v6;
    }
  }
  return 0;
}
