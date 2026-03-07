__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v6; // esi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = MiDecrementCloneBlock(
         *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL),
         a3 + 1664,
         BugCheckParameter3,
         *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 344LL) > *(_QWORD *)(BugCheckParameter2 + 96),
         &v8);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v6;
}
