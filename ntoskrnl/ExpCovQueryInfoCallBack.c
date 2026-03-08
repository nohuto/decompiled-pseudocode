/*
 * XREFs of ExpCovQueryInfoCallBack @ 0x140A03AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCovIsLoadedModulePresent @ 0x140A037F4 (ExpCovIsLoadedModulePresent.c)
 *     ExpCovQueryLoadedModule @ 0x140A04090 (ExpCovQueryLoadedModule.c)
 */

__int64 __fastcall ExpCovQueryInfoCallBack(__int64 a1, __int64 a2)
{
  int v3; // esi
  unsigned int v4; // edi
  int v5; // edx
  unsigned int LoadedModule; // eax
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  v3 = a1;
  v4 = 0;
  if ( ExpCovIsLoadedModulePresent(a1, *(_DWORD *)(a2 + 48), a2 + 16, a2 + 32) == 1 )
  {
    LOBYTE(v5) = *(_BYTE *)(a2 + 12);
    LoadedModule = ExpCovQueryLoadedModule(v3, v5, *(_DWORD *)(a2 + 8), *(_QWORD *)a2, a2 + 56, (__int64)&v8);
    v4 = LoadedModule;
    if ( !LoadedModule || LoadedModule == -1073741820 )
    {
      ++*(_DWORD *)(a2 + 52);
      if ( !LoadedModule )
        *(_QWORD *)a2 += v8;
      return 0;
    }
  }
  return v4;
}
