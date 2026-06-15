/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18003785C
 * Callers:
 *     ?DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NPEBG@Z @ 0x180037AE0 (-DoesTargetProfileExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NP.c)
 *     ?DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180037CF8 (-DoesGroupConfigExist@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ.c)
 *     ?IsGlobalProfileConfigured@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA_NXZ @ 0x180037F08 (-IsGlobalProfileConfigured@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@QEAA.c)
 * Callees:
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180038A60 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 */

_QWORD *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  void *v6; // rcx
  HANDLE v7; // rax
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    v3[3] = 0LL;
    *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4
    || (v5 = v4,
        !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *)v4)) )
  {
    v5 = 0LL;
    if ( v4 )
    {
      v6 = (void *)v4[1];
      if ( v6 )
      {
        CoTaskMemFree(v6);
        v4[1] = 0LL;
      }
      v4[2] = 0LL;
      v4[3] = 0LL;
      v7 = GetProcessHeap();
      HeapFree(v7, 0, v4);
    }
  }
  result = a1;
  *a1 = v5;
  return result;
}
