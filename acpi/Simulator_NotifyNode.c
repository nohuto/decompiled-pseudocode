/*
 * XREFs of Simulator_NotifyNode @ 0x1C0049478
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  __int64 v2; // rdx
  int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      NameSpaceObject = ghNotify(2LL, *(unsigned int *)(a1 + 24), 120LL, qword_1C00702B0, 0LL, *(_QWORD *)(a1 + 16));
    else
      NameSpaceObject = -1073741224;
  }
  DereferenceObjectEx(0LL, v2);
  return (unsigned int)NameSpaceObject;
}
