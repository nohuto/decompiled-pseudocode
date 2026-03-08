/*
 * XREFs of CmpGetOrCreateContextForSiloNoRef @ 0x1407361AC
 * Callers:
 *     CmInitSiloNamespace @ 0x1407388F8 (CmInitSiloNamespace.c)
 *     CmInitServerSiloState @ 0x140816884 (CmInitServerSiloState.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1402B6120 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     CmpAllocateSiloContext @ 0x1407384A4 (CmpAllocateSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 */

__int64 __fastcall CmpGetOrCreateContextForSiloNoRef(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  PVOID v5; // rdi
  unsigned int v6; // ebx
  int inserted; // eax
  unsigned __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v9 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v9);
  if ( v9 )
  {
    v6 = 0;
    *a2 = v9;
    return v6;
  }
  v4 = CmpAllocateSiloContext(a1, &Object);
  v5 = Object;
  v6 = v4;
  if ( v4 >= 0 )
  {
    inserted = PsInsertPermanentSiloContextEx(a1, (unsigned int)CmpSiloContextSlot, Object, 0LL);
    v6 = inserted;
    if ( inserted >= 0 )
    {
      *a2 = v5;
LABEL_5:
      v6 = 0;
      goto LABEL_7;
    }
    if ( inserted == -1073741637 )
    {
      v9 = 0LL;
      PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v9);
      *a2 = v9;
      goto LABEL_5;
    }
  }
LABEL_7:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x20314D43u);
  return v6;
}
