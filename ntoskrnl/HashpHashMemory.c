/*
 * XREFs of HashpHashMemory @ 0x140A7438C
 * Callers:
 *     MinCryptHashMemory @ 0x140674E0C (MinCryptHashMemory.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     SymCryptSha256Result @ 0x1403EF390 (SymCryptSha256Result.c)
 *     SymCryptSha384Result @ 0x1403F49DC (SymCryptSha384Result.c)
 *     SymCryptSha512Result @ 0x1403F61C8 (SymCryptSha512Result.c)
 *     SymCryptSha1Result @ 0x1403F7550 (SymCryptSha1Result.c)
 *     SymCryptMd5Result @ 0x1403F7F80 (SymCryptMd5Result.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HashpHashBytes @ 0x140A74954 (HashpHashBytes.c)
 *     HashpInitHash @ 0x140A749CC (HashpInitHash.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HashpHashMemory(unsigned int a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5)
{
  char v5; // r12
  __int64 v7; // rsi
  unsigned int *Pool2; // rax
  unsigned int *v11; // rbx
  int inited; // r14d
  size_t v13; // rsi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  __int64 v18; // rdi

  v5 = byte_140D1C0B0;
  v7 = a2;
  if ( byte_140D1C0B0 )
    Pool2 = (unsigned int *)ExAllocateFromNPagedLookasideList(&stru_140D1B780);
  else
    Pool2 = (unsigned int *)ExAllocatePool2(258LL, 240LL, 1919109443LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = a1;
    inited = HashpInitHash(Pool2, a5);
    if ( inited >= 0 )
    {
      if ( (_DWORD)v7 )
      {
        v18 = v7;
        do
        {
          if ( *(_DWORD *)a3 )
            HashpHashBytes(v11, *(_QWORD *)(a3 + 8));
          a3 += 16LL;
          --v18;
        }
        while ( v18 );
      }
      switch ( *v11 )
      {
        case 0x8003u:
          SymCryptMd5Result((__int64)(v11 + 4), a4);
          break;
        case 0x8004u:
          SymCryptSha1Result(v11 + 4, a4);
          break;
        case 0x800Cu:
          SymCryptSha256Result(v11 + 4, a4);
          break;
        case 0x800Du:
          SymCryptSha384Result((__int64)(v11 + 4), a4);
          break;
        case 0x800Eu:
          SymCryptSha512Result(v11 + 4, a4);
          break;
      }
      goto LABEL_33;
    }
  }
  else
  {
    inited = -1073741801;
  }
  v13 = 0LL;
  v14 = a1 - 32771;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 8;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            v13 = 64LL;
        }
        else
        {
          v13 = 48LL;
        }
      }
      else
      {
        v13 = 32LL;
      }
    }
    else
    {
      v13 = 20LL;
    }
  }
  else
  {
    v13 = 16LL;
  }
  memset(a4, 0, v13);
  if ( v11 )
  {
LABEL_33:
    if ( v5 )
      ExFreeToNPagedLookasideList(&stru_140D1B780, v11);
    else
      ExFreePoolWithTag(v11, 0x72634943u);
  }
  return (unsigned int)inited;
}
