/*
 * XREFs of NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01D27F0
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

__int64 __fastcall NtDCompositionRegisterVirtualDesktopVisual(__int64 a1, __int64 *a2, void *a3)
{
  ULONG64 v5; // r8
  __int64 v6; // rbx
  int v7; // edi
  CompositionObject *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID v11; // rdi
  PVOID v12; // rcx
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v5 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v5 > MmUserProbeAddress )
    a2 = (__int64 *)MmUserProbeAddress;
  v6 = *a2;
  Object = 0LL;
  LOBYTE(v5) = 1;
  v7 = DirectComposition::ResourceObject::ResolveHandle(
         a3,
         1LL,
         v5,
         (struct DirectComposition::ResourceObject **)&Object);
  if ( v7 >= 0 )
  {
    v8 = (CompositionObject *)Object;
    if ( *((_DWORD *)Object + 9) == 195 )
    {
      GreLockDwmState();
      Object = 0LL;
      v7 = CompositionObject::OpenDwmHandle(v8, &Object, v9, v10);
      if ( v7 >= 0 )
      {
        v11 = Object;
        v12 = UserReferenceDwmApiPort();
        if ( qword_1C0255AD8 )
          v7 = qword_1C0255AD8(v12, a1, v6, v11);
        else
          v7 = -1073741637;
      }
      GreUnlockDwmState();
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
