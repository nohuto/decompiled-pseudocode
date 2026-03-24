/*
 * XREFs of ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0169FEC
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C0169F80 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
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
      bDeleteDCInternalEx(v2, 0LL);
  }
}
