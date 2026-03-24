/*
 * XREFs of DDCCIInitializeWrap @ 0x1C0135730
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMonitorAPI@@QEAA@PEAJ@Z @ 0x1C0135798 (--0CMonitorAPI@@QEAA@PEAJ@Z.c)
 */

__int64 DDCCIInitializeWrap()
{
  unsigned int v0; // ebx
  CMonitorAPI *PoolWithTag; // rax
  CMonitorAPI *v2; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v4 = 0;
  PoolWithTag = (CMonitorAPI *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x63326947u);
  if ( PoolWithTag )
    v2 = CMonitorAPI::CMonitorAPI(PoolWithTag, &v4);
  else
    v2 = 0LL;
  qword_1C033B068 = v2;
  if ( v2 )
  {
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v0;
}
