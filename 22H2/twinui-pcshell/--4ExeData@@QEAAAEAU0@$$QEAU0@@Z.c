/*
 * XREFs of ??4ExeData@@QEAAAEAU0@$$QEAU0@@Z @ 0x1804CB814
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD0B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall ExeData::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _OWORD *v3; // rbp
  _OWORD *v6; // rbx

  v2 = a2 + 8;
  v3 = (_OWORD *)(a1 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  if ( a1 + 8 != a2 + 8 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 8));
    *v3 = *(_OWORD *)v2;
    v3[1] = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 7LL;
    *(_WORD *)v2 = 0;
  }
  v6 = (_OWORD *)(a2 + 40);
  if ( a1 + 40 != a2 + 40 )
  {
    std::wstring::_Tidy_deallocate((_QWORD *)(a1 + 40));
    *(_OWORD *)(a1 + 40) = *v6;
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 56);
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_QWORD *)(a2 + 64) = 7LL;
    *(_WORD *)v6 = 0;
  }
  return a1;
}
