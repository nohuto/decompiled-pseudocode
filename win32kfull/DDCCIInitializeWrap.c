/*
 * XREFs of DDCCIInitializeWrap @ 0x1C00F3830
 * Callers:
 *     <none>
 * Callees:
 *     ??0CMonitorAPI@@QEAA@PEAJ@Z @ 0x1C00F38B4 (--0CMonitorAPI@@QEAA@PEAJ@Z.c)
 */

__int64 __fastcall DDCCIInitializeWrap(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  CMonitorAPI *Pool2; // rax
  CMonitorAPI *v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v6 = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  Pool2 = (CMonitorAPI *)ExAllocatePool2(258LL, 40LL, 1664248135LL);
  if ( Pool2 )
    v4 = CMonitorAPI::CMonitorAPI(Pool2, &v6);
  else
    v4 = 0LL;
  *(_QWORD *)(v2 + 8728) = v4;
  if ( v4 )
  {
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v1;
}
