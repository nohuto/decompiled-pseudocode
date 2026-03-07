void __fastcall DDCCICleanUpWrap(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  void *v3; // rbx

  if ( *(_QWORD *)(SGDGetSessionState(a1) + 32) )
  {
    v2 = *(_QWORD *)(SGDGetSessionState(v1) + 32);
    v3 = *(void **)(v2 + 8728);
    if ( v3 )
    {
      CMonitorAPI::~CMonitorAPI(*(CMonitorAPI **)(v2 + 8728));
      ExFreePoolWithTag(v3, 0x63326947u);
    }
    *(_QWORD *)(v2 + 8728) = 0LL;
  }
}
