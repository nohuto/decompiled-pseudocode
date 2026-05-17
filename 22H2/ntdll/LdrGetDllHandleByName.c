/*
 * XREFs of LdrGetDllHandleByName @ 0x1800780B0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x18001F544 (LdrpIncrementModuleLoadCount.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpFatalExceptionFilter @ 0x1800D5340 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // rdx
  int LoadedDllByName; // ebx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (__int64)&v10, &v11);
  if ( LoadedDllByName >= 0 )
  {
    if ( v11 < 7 )
    {
      LoadedDllByName = -1073741515;
      v8 = v10;
    }
    else
    {
      v8 = v10;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v10);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v8 + 48);
    }
    LdrpDereferenceModule(v8, v4, v6, v7);
  }
  return (unsigned int)LoadedDllByName;
}
