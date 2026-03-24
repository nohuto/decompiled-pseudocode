/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C0131D20
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerParentNotify @ 0x1C006B32C (IsPointerParentNotify.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     NtUserfnPOINTERINPUT @ 0x1C0206950 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, int a2, __int16 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r8d
  int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // r11

  if ( IsPointerParentNotify(a2, a3) )
    return NtUserfnPOINTERINPUT(v9, v8, v6, v7, a5, a6);
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(v9, v8);
}
