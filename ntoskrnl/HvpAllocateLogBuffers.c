/*
 * XREFs of HvpAllocateLogBuffers @ 0x1402B23E0
 * Callers:
 *     HvpGenerateLogEntry @ 0x14072DD08 (HvpGenerateLogEntry.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvpAllocateLogBuffers(__int64 *a1, _DWORD *a2, unsigned int a3)
{
  void *Pool2; // r14
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  void *v17; // r15
  __int64 v18; // rdx
  __int64 i; // rbp
  unsigned int v20; // ecx
  __int64 v21; // rax
  PVOID *v22; // rsi
  __int64 v23; // r13
  unsigned int v24; // [rsp+20h] [rbp-48h]
  unsigned int v27; // [rsp+88h] [rbp+20h]

  Pool2 = (void *)ExAllocatePool2(264LL, a3, 1867074883LL);
  if ( Pool2 )
  {
    v7 = ExAllocatePool2(256LL, 24LL, 1867074883LL);
    if ( v7 )
    {
      *(_DWORD *)v7 = 0;
      *a2 = 1;
      v8 = 0;
      *(_QWORD *)(v7 + 8) = Pool2;
      *(_DWORD *)(v7 + 16) = a3;
      *a1 = v7;
      return v8;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  v10 = 0LL;
  do
  {
    v11 = *((_DWORD *)LogEntryChunkSizes + v10) << 12;
    v12 = a3 / v11;
    v27 = v11;
    v13 = a3 % v11 == 0;
    v14 = a3 / v11 + 1;
    if ( v13 )
      v14 = v12;
    v15 = (unsigned int)v14;
    v16 = ExAllocatePool2(256LL, 24 * v14, 1867074883LL);
    v17 = (void *)v16;
    if ( !v16 )
      break;
    v18 = a3;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= (unsigned int)v15 )
      {
        *a1 = v16;
        v8 = 0;
        *a2 = v15;
        return v8;
      }
      v20 = 0;
      *(_DWORD *)(v16 + 24 * i) = 0;
      if ( (unsigned int)v18 >= v27 )
      {
        v20 = v18 - v27;
        v18 = v27;
      }
      v24 = v20;
      *(_DWORD *)(v16 + 24 * i + 16) = v18;
      v21 = ExAllocatePool2(264LL, v18, 1867074883LL);
      *(_QWORD *)(v16 + 24 * i + 8) = v21;
      if ( !v21 )
        break;
      v18 = v24;
    }
    if ( (_DWORD)v15 )
    {
      v22 = (PVOID *)(v16 + 8);
      v23 = v15;
      do
      {
        if ( *v22 )
        {
          ExFreePoolWithTag(*v22, 0);
          *v22 = 0LL;
        }
        v22 += 3;
        --v23;
      }
      while ( v23 );
    }
    ExFreePoolWithTag(v17, 0);
    v10 = (unsigned int)(v10 + 1);
  }
  while ( (_DWORD)v10 != 9 );
  return (unsigned int)-1073741801;
}
