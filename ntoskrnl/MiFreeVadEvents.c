/*
 * XREFs of MiFreeVadEvents @ 0x140631910
 * Callers:
 *     MiAllocateChildVads @ 0x140A4571C (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x140A461CC (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEvents(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = (_QWORD *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
