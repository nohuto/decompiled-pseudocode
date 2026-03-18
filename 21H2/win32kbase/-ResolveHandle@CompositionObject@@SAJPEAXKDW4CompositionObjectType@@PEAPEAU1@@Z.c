/*
 * XREFs of ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0093FC8
 * Callers:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C02115B0 (NtDCompositionDuplicateHandleToProcess.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C02137A4 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::ResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, int a4, PVOID Object)
{
  _QWORD *v5; // rsi
  NTSTATUS v7; // ebx
  _QWORD **v8; // rdi

  v5 = Object;
  Object = 0LL;
  *v5 = 0LL;
  v7 = ObReferenceObjectByHandle(a1, a2, ExCompositionObjectType, a3, &Object, 0LL);
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = (_QWORD **)Object;
  if ( !(***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v7 = -1073741816;
LABEL_9:
    ObfDereferenceObject(v8);
    return (unsigned int)v7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v8[1] + 16LL))(v8[1]) == a4 )
    *v5 = v8;
  else
    v7 = -1073741788;
  if ( v7 < 0 )
    goto LABEL_9;
  return (unsigned int)v7;
}
