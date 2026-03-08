/*
 * XREFs of BiConvertQualifiedPartitionToBootEnvironment @ 0x140A59C10
 * Callers:
 *     BiConvertElementToRegistryData @ 0x14082F9BC (BiConvertElementToRegistryData.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertQualifiedPartitionToBootEnvironment(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v7; // rdi
  int v8; // eax

  if ( a2 >= 0x3C )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, 72LL, 1262764866LL);
    v5 = 0;
    v7 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x48uLL);
      *v7 = 6;
      v7[2] = 72;
      v8 = *(_DWORD *)(a1 + 20);
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v5 = -1073741811;
          ExFreePoolWithTag(v7, 0x4B444342u);
          return v5;
        }
        v7[9] = 0;
        *(_OWORD *)(v7 + 10) = *(_OWORD *)(a1 + 28);
        *((_OWORD *)v7 + 1) = *(_OWORD *)(a1 + 44);
      }
      else
      {
        v7[9] = 1;
        v7[10] = *(_DWORD *)(a1 + 28);
        *((_QWORD *)v7 + 2) = *(_QWORD *)(a1 + 32);
      }
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
