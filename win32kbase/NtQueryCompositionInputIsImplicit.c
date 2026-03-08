/*
 * XREFs of NtQueryCompositionInputIsImplicit @ 0x1C00BC9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputIsImplicit(void *a1, int *a2, __int64 a3)
{
  int v4; // esi
  int v5; // edi
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a3) = 1;
  v4 = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)Object + 46) & 1;
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v5;
  }
  return (unsigned int)v4;
}
