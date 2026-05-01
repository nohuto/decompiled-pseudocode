/*
 * XREFs of ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x18020BBC4
 * Callers:
 *     ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x18020BCF0 (--_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1801AD274 (-_com_issue_error@@YAXJ@Z.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1801B6D34 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 */

void __fastcall TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(TaskbarLayoutPolicyManager *this)
{
  OLECHAR *v2; // rcx
  OLECHAR *v3; // rcx
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  HRESULT v6; // eax

  *(_QWORD *)this = &TaskbarLayoutPolicyManager::`vftable';
  v2 = (OLECHAR *)*((_QWORD *)this + 19);
  if ( v2 )
    SysFreeString(v2);
  v3 = (OLECHAR *)*((_QWORD *)this + 18);
  if ( v3 )
    SysFreeString(v3);
  v4 = (OLECHAR *)*((_QWORD *)this + 17);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 16);
  if ( v5 )
    SysFreeString(v5);
  v6 = VariantClear((VARIANTARG *)((char *)this + 104));
  if ( v6 < 0 )
    _com_issue_error((char *)(unsigned int)v6);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)this + 80);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)this + 56);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)this + 32);
  *((_DWORD *)this + 7) = -1073741823;
}
