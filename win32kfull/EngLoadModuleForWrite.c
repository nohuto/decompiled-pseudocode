/*
 * XREFs of EngLoadModuleForWrite @ 0x1C028DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028D170 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 */

HANDLE __stdcall EngLoadModuleForWrite(LPWSTR pwsz, ULONG cjSizeOfModule)
{
  if ( !cjSizeOfModule )
    cjSizeOfModule = -1;
  return (HANDLE)LoadModuleWorkHorse((char *)pwsz, cjSizeOfModule);
}
