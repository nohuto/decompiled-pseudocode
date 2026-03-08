/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x1406BB6D4
 * Callers:
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpCopySaclToVirtualKey @ 0x140A186EC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x140A20124 (CmpSyncKeyValues.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140243994 (CmpDereferenceSecurityNode.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  bool v2; // zf
  __int64 result; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]
  int v9; // [rsp+40h] [rbp+18h]
  int v10; // [rsp+44h] [rbp+1Ch]

  v7 = -1;
  v9 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v8 = 0;
  v10 = 0;
  if ( v2 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2);
  v5 = result;
  if ( result )
  {
    v6 = *(unsigned int *)(result + 44);
    if ( (_DWORD)v6 != -1 )
    {
      CmpDereferenceSecurityNode(BugCheckParameter3, v6);
      *(_DWORD *)(v5 + 44) = -1;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  return result;
}
