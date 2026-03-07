__int64 __fastcall CreateFlipPropertySetWorker<CFlipConsumerMessage>(
        unsigned int a1,
        char *a2,
        char a3,
        CFlipConsumerMessage **a4)
{
  signed int v5; // ebx
  unsigned int v6; // r13d
  char *v7; // r14
  char *Pool2; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  unsigned int i; // r8d
  bool v12; // sf
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  char *v19; // r12
  unsigned int v20; // r15d
  unsigned int v21; // r13d
  char *v22; // rbx
  char *v23; // rdx
  size_t v24; // r8
  __int64 v25; // rcx
  CFlipConsumerMessage *v26; // rax
  CFlipConsumerMessage *v27; // rcx
  char v30; // [rsp+B0h] [rbp+18h]

  v30 = a3;
  v5 = 0;
  if ( a1 )
  {
    v6 = 0;
    v7 = 0LL;
    Pool2 = 0LL;
    if ( a2 )
    {
      v9 = 32LL * a1;
      v10 = 0xFFFFFFFFLL;
      if ( v9 <= 0xFFFFFFFF )
        v10 = (unsigned int)v9;
      v5 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v9 <= 0xFFFFFFFF )
      {
        Pool2 = (char *)ExAllocatePool2(257LL, (unsigned int)v10, 1768964934LL);
        if ( !Pool2 )
          v5 = -1073741801;
        a3 = v30;
      }
      if ( v5 >= 0 )
      {
        if ( a3 && (&a2[v10] < a2 || (unsigned __int64)&a2[v10] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, a2, (unsigned int)v10);
      }
    }
    else
    {
      v5 = -1073741811;
    }
    for ( i = 0; ; ++i )
    {
      v12 = v5 < 0;
      if ( v5 < 0 )
        break;
      if ( i >= a1 )
      {
        v12 = v5 < 0;
        break;
      }
      v13 = 32LL * i;
      v14 = *(_DWORD *)&Pool2[v13 + 16];
      if ( v14 && *(_QWORD *)&Pool2[v13 + 24] )
      {
        v15 = v6;
        v16 = v6 + v14;
        v17 = -1;
        if ( v16 >= v6 )
          v17 = v16;
        v6 = v17;
        v5 = v16 < v15 ? 0xC0000095 : 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    v18 = 0;
    if ( !v12 )
    {
      v7 = (char *)ExAllocatePool2(257LL, v6, 1651524422LL);
      if ( !v7 )
        v5 = -1073741801;
    }
    if ( v5 < 0 )
    {
      v21 = a1;
    }
    else
    {
      v19 = v7;
      v20 = 0;
      v21 = a1;
      while ( v5 >= 0 && v20 < a1 )
      {
        v22 = &Pool2[32 * v20];
        v23 = (char *)*((_QWORD *)v22 + 3);
        v24 = *((unsigned int *)v22 + 4);
        if ( v30 && (&v23[v24] < v23 || (unsigned __int64)&v23[v24] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v19, v23, v24);
        *((_QWORD *)v22 + 3) = v19;
        v25 = *((unsigned int *)v22 + 4);
        v19 += v25;
        if ( v18 + 16 < v18 )
        {
          v18 = -1;
          v5 = -1073741675;
        }
        else
        {
          v18 += 16;
          v5 = 0;
        }
        if ( v5 >= 0 )
        {
          if ( v18 + 4 < v18 )
          {
            v18 = -1;
            v5 = -1073741675;
          }
          else
          {
            v18 += 4;
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            if ( (unsigned int)v25 + v18 < v18 )
            {
              v18 = -1;
              v5 = -1073741675;
            }
            else
            {
              v18 += v25;
              v5 = 0;
            }
          }
        }
        ++v20;
      }
    }
    if ( v5 >= 0 )
    {
      v26 = (CFlipConsumerMessage *)ExAllocatePool2(257LL, 64LL, 1835221830LL);
      if ( v26 )
        v27 = CFlipConsumerMessage::CFlipConsumerMessage(v26, v21, (struct FlipPropertyItem *)Pool2, v7, v18);
      else
        v27 = 0LL;
      *a4 = v27;
      if ( v27 )
      {
        v7 = 0LL;
        Pool2 = 0LL;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v5;
}
