/*
 * XREFs of Simulator_EvaluateNode @ 0x1C00491C0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FD0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6C8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F748 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi
  __int64 v2; // rdx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  DereferenceObjectEx(0LL, v2);
  return NameSpaceObject;
}
