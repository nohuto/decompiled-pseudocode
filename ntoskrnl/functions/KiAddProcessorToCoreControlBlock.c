void __fastcall KiAddProcessorToCoreControlBlock(unsigned __int8 *a1, ULONG_PTR a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a2 + 34904) = a1;
  v2 = *a1;
  if ( (unsigned __int8)v2 >= 8u )
    KeBugCheckEx(0x3Eu, a2, v2 + 1, 8uLL, 1uLL);
  *(_QWORD *)&a1[8 * v2 + 8] = a2;
  qsort(a1 + 8, ++*a1, 8uLL, HalpNodeCostSort);
}
