/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C013E6D4
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0006FD0 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C013E610 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vAltUnlockNoNullSet(__int64 **this)
{
  __int64 *v1; // rcx
  __int64 v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  if ( v1 )
  {
    v3 = 0;
    v2 = *v1;
    HmgDecrementShareReferenceCountEx(v1, &v3);
    if ( v3 )
      GrepDeleteDC(v2, 0x2000000LL);
  }
}
