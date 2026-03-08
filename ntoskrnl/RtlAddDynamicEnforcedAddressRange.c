/*
 * XREFs of RtlAddDynamicEnforcedAddressRange @ 0x1409BF688
 * Callers:
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AC050 (PspProcessDynamicEnforcedAddressRanges.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x1409BFAA8 (RtlpDynamicEnforcedAddressRangesTreeCompare.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlAddDynamicEnforcedAddressRange(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  bool v7; // bl
  void *v8; // rsi
  _QWORD *v10; // rdi
  int v11; // eax
  _QWORD *v12; // rax

  Pool2 = ExAllocatePool2(257LL, 40LL, 1380009284LL);
  v7 = 0;
  v8 = (void *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 32) = a3;
  v10 = (_QWORD *)*a1;
  if ( !*a1 )
  {
LABEL_7:
    RtlAvlInsertNodeEx(a1, (unsigned __int64)v10, v7, (unsigned __int64)v8);
    return 0LL;
  }
  while ( 1 )
  {
    v11 = RtlpDynamicEnforcedAddressRangesTreeCompare(v8, v10);
    if ( v11 <= 0 )
      break;
    v12 = (_QWORD *)v10[1];
    if ( !v12 )
    {
      v7 = 1;
      goto LABEL_7;
    }
LABEL_10:
    v10 = v12;
  }
  if ( v11 < 0 )
  {
    v12 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_7;
    goto LABEL_10;
  }
  ExFreePoolWithTag(v8, 0);
  return 3221225496LL;
}
