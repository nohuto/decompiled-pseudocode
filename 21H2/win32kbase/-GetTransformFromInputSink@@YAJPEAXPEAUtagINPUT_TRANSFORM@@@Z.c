/*
 * XREFs of ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0144DE8
 * Callers:
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01451D4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0095DA0 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall GetTransformFromInputSink(void *a1, struct tagINPUT_TRANSFORM *a2, __int64 a3)
{
  int Transform; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  LOBYTE(a3) = 1;
  Transform = CompositionInputObject::ResolveHandle(a1, 1LL, a3, (struct CompositionInputObject **)&Object);
  if ( Transform >= 0 )
  {
    Transform = CompositionInputObject::QueryTransform((CompositionInputObject *)Object, a2);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)Transform;
}
