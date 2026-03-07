__int64 __fastcall MmManagePartitionNodeInformation(__int64 *a1, unsigned int *a2, char a3)
{
  void *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  SIZE_T v9; // r14
  PVOID Pool; // rax
  _QWORD *v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // r12
  unsigned int v14; // ebx
  __int64 v15; // r14
  __int64 v17; // [rsp+20h] [rbp-38h]

  v6 = 0LL;
  if ( a2[1] || (v8 = *a2, (_DWORD)v8 != (unsigned __int16)KeNumberNodes) )
  {
    v7 = -1073741811;
    goto LABEL_16;
  }
  v9 = 72 * v8;
  v17 = 72 * v8;
  if ( a3 )
  {
    Pool = MiAllocatePool(64, 72 * v8, 0x694E694Du);
    v6 = Pool;
    if ( !Pool )
    {
      v7 = -1073741670;
      goto LABEL_16;
    }
    v11 = Pool;
  }
  else
  {
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
  }
  v12 = *a1;
  v13 = v11;
  v14 = 0;
  if ( *a2 )
  {
    v15 = v12;
    do
    {
      MiGetPartitionNodeInformation(v15, v14, v13);
      v13 += 9;
      ++v14;
    }
    while ( v14 < *a2 );
    v9 = v17;
  }
  if ( a3 )
  {
    ProbeForWrite(*((volatile void **)a2 + 1), v9, 8u);
    memmove(*((void **)a2 + 1), v11, v9);
  }
  v7 = 0;
LABEL_16:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
