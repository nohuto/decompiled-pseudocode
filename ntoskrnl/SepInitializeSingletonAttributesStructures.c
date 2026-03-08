/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x140B49204
 * Callers:
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x1402B8550 (RtlpCreateHashTable.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  unsigned int v1; // ebx
  ULONG_PTR v2; // rax
  _QWORD *Pool2; // rdi
  void *v4; // rax
  void *v5; // rsi
  _QWORD *v6; // rax
  PEX_SPIN_LOCK v7; // rcx
  ULONG_PTR v8; // rcx
  void *v10; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  *((_DWORD *)SepSingletonGlobal + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  *v0 = 0;
  v2 = SeLuidToIndexMapping;
  *(_QWORD *)SeLuidToIndexMapping = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8uLL, 0x74446553u);
    if ( Pool2 )
    {
      v4 = (void *)ExAllocatePool2(64LL, 0x600uLL, 0x74446553u);
      v5 = v4;
      if ( v4 )
      {
        memset(v4, 0, 0x600uLL);
        v6 = (_QWORD *)ExAllocatePool2(64LL, 8uLL, 0x74446553u);
        v7 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v6;
        if ( v6 )
        {
          *v6 = v5;
          ++*((_DWORD *)v7 + 1);
          if ( RtlpCreateHashTable((__int64 *)(SeLuidToIndexMapping + 8), 0x80u, 0, 0) )
          {
            v8 = SeLuidToIndexMapping;
            *(_DWORD *)(SeLuidToIndexMapping + 16) = 64;
            *(_QWORD *)(v8 + 24) = Pool2;
            *Pool2 = 0LL;
            return v1;
          }
        }
        v1 = -1073741801;
        ExFreePoolWithTag(v5, 0x74446553u);
      }
      else
      {
        v1 = -1073741801;
      }
      ExFreePoolWithTag(Pool2, 0x74446553u);
    }
    else
    {
      v1 = -1073741801;
    }
    v10 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x74446553u);
  }
  return v1;
}
