/*
 * XREFs of ?GetDesktopApplicationId@TaskbarLayoutItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180212A40
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180039990 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskbarLayoutItem::GetDesktopApplicationId(TaskbarLayoutItem *this, HSTRING *a2)
{
  _QWORD *v2; // rcx
  __int64 v4; // rcx
  HSTRING *v5; // r9
  HRESULT String; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (_QWORD *)((char *)this + 88);
  if ( !*v2 )
    return 2147647529LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v2);
  String = WindowsCreateString(*(PCNZWCH *)v4, *(_DWORD *)(v4 + 8), v5);
  v7 = String;
  if ( String >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x44,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutitem.cpp",
    (const char *)(unsigned int)String);
  return v7;
}
