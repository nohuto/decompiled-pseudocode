/*
 * XREFs of Simulator_EvaluateNode @ 0x1C00491A0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi
  __int64 v2; // rdx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  DereferenceObjectEx(0LL, v2);
  return NameSpaceObject;
}
