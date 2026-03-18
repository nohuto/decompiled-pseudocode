/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1C001E860
 * Callers:
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001E8AC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsProcessImmersiveAppContainer(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  int v3; // edx

  result = PsGetProcessWin32Process(a1);
  v2 = 0;
  if ( result )
  {
    if ( *(_DWORD *)(result + 884) )
    {
      v3 = *(_DWORD *)(result + 820);
      if ( (v3 & 0x30) == 0x10 )
        return (v3 & 0x200) == 0;
    }
    return v2;
  }
  return result;
}
