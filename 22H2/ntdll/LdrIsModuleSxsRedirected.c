/*
 * XREFs of LdrIsModuleSxsRedirected @ 0x1800CDE70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

bool __fastcall LdrIsModuleSxsRedirected(unsigned __int64 a1)
{
  char v1; // bl
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  int v5; // ebx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( (int)LdrpFindLoadedDllByHandle(a1, &v7, 0LL) >= 0 )
  {
    v5 = *(_DWORD *)(v7 + 104);
    LdrpDereferenceModule(v7, v2, v3, v4);
    return (v5 & 0x10000000) != 0;
  }
  return v1;
}
