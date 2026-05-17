/*
 * XREFs of LdrDisableThreadCalloutsForDll @ 0x18000EF70
 * Callers:
 *     <none>
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrDisableThreadCalloutsForDll(__int64 a1)
{
  int LoadedDllByHandle; // ebx
  char v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  LoadedDllByHandle = 0;
  if ( !byte_18016C508 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v4, &v3);
    if ( LoadedDllByHandle >= 0 )
    {
      if ( !*(_WORD *)(v4 + 110) )
        *(_BYTE *)(v4 + 106) |= 4u;
      LdrpDereferenceModule();
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
