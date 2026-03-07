__int64 __fastcall PsCreateCpuPartition(__int64 a1, __int64 a2, __int64 a3, PVOID *a4)
{
  void *v4; // rdi
  int v6; // eax
  _QWORD *v7; // rbx
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  int inserted; // eax
  __int64 v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp-10h] BYREF

  Object = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v6 = ObCreateObjectEx(0, (_DWORD *)PsCpuPartitionType, a1, 0, v13, 344, 0, 0, &Object, 0LL);
  v7 = Object;
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_11:
    if ( v7 )
      ObfDereferenceObject(v7);
    return v8;
  }
  KeInitializeCpuPartition((__int64)Object, 1);
  if ( a4 == &PspSystemCpuPartition
    || (inserted = ObInsertObjectEx((char *)v7, 0LL, 0xF0007u, 0, 0, 0LL, &v14),
        v4 = (void *)v14,
        v8 = inserted,
        inserted >= 0) )
  {
    v9 = (_QWORD *)qword_140D0EF48;
    v10 = v7 + 41;
    if ( *(__int64 **)qword_140D0EF48 != &PspCpuPartitionListHead )
      __fastfail(3u);
    *v10 = &PspCpuPartitionListHead;
    v7[42] = v9;
    *v9 = v10;
    qword_140D0EF48 = (__int64)(v7 + 41);
    *a4 = v7;
  }
  v7 = 0LL;
  if ( v4 )
  {
    ZwClose(v4);
    goto LABEL_11;
  }
  return v8;
}
