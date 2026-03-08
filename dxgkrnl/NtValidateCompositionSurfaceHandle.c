/*
 * XREFs of NtValidateCompositionSurfaceHandle @ 0x1C000D770
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C000D828 (-ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall NtValidateCompositionSurfaceHandle(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+60h] [rbp+18h]
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  Object = 0LL;
  LOBYTE(a3) = 1;
  v4 = DxgkCompositionObject::ResolveHandle(a1, 1LL, a3, 1LL, &Object);
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)Object + 3);
    ObfDereferenceObject(Object);
  }
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
