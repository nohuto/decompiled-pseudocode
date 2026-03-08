/*
 * XREFs of GetNameSpaceObject @ 0x1C004F728
 * Callers:
 *     Simulator_EvaluateNode @ 0x1C00491A0 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0049478 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C00498D0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00499F8 (AMLICreateNativeNamespaceObject.c)
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C004A6B0 (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004A71C (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C004AAB0 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C004C718 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C004D830 (DebugExpr.c)
 *     DebugNotify @ 0x1C004DB10 (DebugNotify.c)
 *     BankField @ 0x1C004FEB0 (BankField.c)
 *     Field @ 0x1C00505B0 (Field.c)
 *     IndexField @ 0x1C0050740 (IndexField.c)
 *     Alias @ 0x1C0055300 (Alias.c)
 *     Scope @ 0x1C0055440 (Scope.c)
 *     Load @ 0x1C00556C0 (Load.c)
 *     LoadTable @ 0x1C0056E80 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 *     ParseAndGetNameSpaceObject @ 0x1C005A3B4 (ParseAndGetNameSpaceObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F840 (GetNameSpaceObjectNoLock.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NameSpaceObjectNoLock;
}
