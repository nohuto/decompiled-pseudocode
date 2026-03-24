/*
 * XREFs of NtDCompositionSetChildRootVisual @ 0x1C01D2930
 * Callers:
 *     <none>
 * Callees:
 *     GreLockDwmState @ 0x1C0048DD0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C004AAF0 (UserReferenceDwmApiPort.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C004B1A0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0083A34 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChildRootVisual(__int64 a1, void *a2, __int64 a3)
{
  CompositionObject *v3; // rbx
  int v4; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID v8; // rsi
  int v9; // eax
  PVOID v10; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2 )
    goto LABEL_6;
  LOBYTE(a3) = 1;
  v4 = DirectComposition::ResourceObject::ResolveHandle(
         a2,
         1LL,
         a3,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v3 = (CompositionObject *)Object;
  if ( Object && *((_DWORD *)Object + 9) != 195 )
  {
    v4 = -1073741811;
  }
  else
  {
LABEL_6:
    GreLockDwmState();
    v8 = 0LL;
    Object = 0LL;
    if ( v3 )
    {
      v9 = CompositionObject::OpenDwmHandle(v3, &Object, v6, v7);
      v8 = Object;
      v4 = v9;
    }
    if ( v4 >= 0 )
    {
      v10 = UserReferenceDwmApiPort();
      if ( qword_1C0255AF0 )
        v4 = qword_1C0255AF0(v10, a1, v8);
      else
        v4 = -1073741637;
    }
    GreUnlockDwmState();
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
