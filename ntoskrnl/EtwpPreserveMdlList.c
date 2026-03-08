/*
 * XREFs of EtwpPreserveMdlList @ 0x1409EAA6C
 * Callers:
 *     EtwpPreserveLogger @ 0x1409EA82C (EtwpPreserveLogger.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveMdlList(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 Pool2; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  v5 = 0;
  v8 = a1;
  v9 = a1;
  do
  {
    KsrMdlToMemoryRuns(v9, 0LL, 0LL, &v16);
    v5 += v16;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  Pool2 = ExAllocatePool2(256LL, 8LL * v5, 1266119749LL);
  v11 = (void *)Pool2;
  if ( Pool2 )
  {
    v13 = Pool2;
    v14 = v5;
    while ( v8 )
    {
      KsrMdlToMemoryRuns(v8, v13, v14, &v16);
      v14 -= v16;
      v8 = (_QWORD *)*v8;
      v13 += 8LL * v16;
    }
    v12 = KsrPersistMemoryWithMetadata(EtwpKsrGuid, v11, v5, a2, a3, a4);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
