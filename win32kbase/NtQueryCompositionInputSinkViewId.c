/*
 * XREFs of NtQueryCompositionInputSinkViewId @ 0x1C000AE70
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkViewId(void *a1, _DWORD *a2)
{
  int v3; // ebx
  int v4; // esi
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    v4 = *((_DWORD *)Object + 44);
    ObfDereferenceObject(Object);
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v4;
  }
  return (unsigned int)v3;
}
