/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180037A30
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x180037338 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180038118 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180038278 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(LPVOID *this)
{
  int RedirectedPathIfNeeded; // eax
  void *v3; // rbx
  void *v4; // rsi
  char v5; // di
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  RedirectedPathIfNeeded = Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
                             L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration",
                             L"AssignedAccessConfiguration",
                             &v7);
  v3 = v7;
  if ( RedirectedPathIfNeeded >= 0 && v7 )
  {
    v4 = v7;
    v3 = 0LL;
    if ( *this )
      CoTaskMemFree(*this);
    *this = v4;
    this[2] = (LPVOID)-1LL;
    this[1] = (LPVOID)-1LL;
    *((_DWORD *)this + 6) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)this);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return v5;
}
