/*
 * XREFs of StEtaStart @ 0x14035A354
 * Callers:
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x14035A46C (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall StEtaStart(__int64 a1, int **a2, _QWORD *a3)
{
  unsigned int v4; // edi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12
  int *v9; // r14
  int *v10; // rax
  unsigned int v11; // ebp
  __int64 Pool2; // rax
  int *v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  int v17; // eax
  LARGE_INTEGER v20; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v20.QuadPart = 0LL;
  KeQueryPerformanceCounter(&v20);
  v6 = v20;
  if ( v20.QuadPart )
  {
    v7 = 0LL;
    v8 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 )
      {
        v10 = *a2;
        v11 = 1;
        if ( *v9 != -1 )
        {
          do
          {
            v10 += 2;
            ++v11;
          }
          while ( *v10 != -1 );
        }
        Pool2 = ExAllocatePool2(64LL, 32 * v11, 1950969203LL);
        v13 = (int *)Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        if ( v11 )
        {
          v14 = Pool2;
          v15 = v11;
          do
          {
            v16 = (unsigned int)v9[1];
            v17 = *v9;
            v9 += 2;
            *(_DWORD *)(v14 + 4) = 0;
            *(_QWORD *)(v14 + 16) = 0LL;
            *(_QWORD *)(v14 + 24) = 0LL;
            *(_DWORD *)v14 = v17;
            v14 += 32LL;
            *(_QWORD *)(v14 - 24) = v6.QuadPart * v16 / 1000000;
            --v15;
          }
          while ( v15 );
        }
        *(int **)((char *)a2 + v8 + 16) = v13;
      }
      ++v7;
      ++a2;
      if ( v7 >= 2 )
      {
        *(_QWORD *)(a1 + 32) = *a3;
        return v4;
      }
    }
  }
  return (unsigned int)-1073741637;
}
