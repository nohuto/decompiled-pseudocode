/*
 * XREFs of PpmHeteroInitializeFeedbackClass @ 0x14059C420
 * Callers:
 *     PpmHeteroHgsProcessorInit @ 0x14037DF70 (PpmHeteroHgsProcessorInit.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmHeteroInitializeFeedbackClass(_QWORD *a1)
{
  _DWORD *Pool2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  void *v7; // rcx
  unsigned int v8; // ebx
  void *v9; // rcx
  void *v10; // rcx

  if ( a1[4266] )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * *((_DWORD *)PpmHeteroCapability + 1) + 4), 1884115024LL);
  a1[4266] = Pool2;
  if ( Pool2 )
  {
    v3 = PpmHeteroCapability;
    *Pool2 = *((_DWORD *)PpmHeteroCapability + 1);
    v4 = (unsigned int)(8 * v3[1] + 8);
    v5 = (_DWORD *)ExAllocatePool2(64LL, v4, 1884115024LL);
    a1[4267] = v5;
    if ( v5 )
    {
      *v5 = *((_DWORD *)PpmHeteroCapability + 1);
      v6 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v4, 1884115024LL);
      a1[4268] = v6;
      if ( v6 )
      {
        *v6 = *((_DWORD *)PpmHeteroCapability + 1);
        return 0;
      }
    }
  }
  v7 = (void *)a1[4266];
  v8 = -1073741670;
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x704D5050u);
    a1[4266] = 0LL;
  }
  v9 = (void *)a1[4267];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x704D5050u);
    a1[4267] = 0LL;
  }
  v10 = (void *)a1[4268];
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x704D5050u);
    a1[4268] = 0LL;
  }
  return v8;
}
