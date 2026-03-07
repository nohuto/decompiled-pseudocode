__int64 __fastcall CreateFlipPropertySetWorker<CFlipPropertySet>(
        unsigned int a1,
        char *Src,
        __int64 a3,
        CFlipPropertySet **a4)
{
  __int64 v5; // r12
  signed int v6; // ebx
  unsigned int v7; // r13d
  char *v8; // r14
  char *Pool2; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  unsigned int v12; // ecx
  size_t v13; // r8
  char *v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  char *v21; // r9
  unsigned int i; // r15d
  char *v23; // rbx
  size_t v24; // r8
  char *v25; // rdx
  __int64 v26; // rcx
  CFlipPropertySet *v27; // rax
  CFlipPropertySet *v28; // rcx
  char *v30; // [rsp+50h] [rbp-48h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]

  v5 = a1;
  v6 = 0;
  if ( a1 )
  {
    v7 = 0;
    v8 = 0LL;
    Pool2 = 0LL;
    v10 = 0;
    if ( Src )
    {
      v11 = 32LL * a1;
      v12 = -1;
      if ( (unsigned __int64)(32 * v5) <= 0xFFFFFFFF )
        v12 = v11;
      v31 = v12;
      v6 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v11 <= 0xFFFFFFFF )
      {
        Pool2 = (char *)ExAllocatePool2(257LL, v12, 1768964934LL);
        if ( !Pool2 )
          v6 = -1073741801;
        v12 = v31;
      }
      if ( v6 >= 0 )
      {
        v13 = v12;
        v14 = &Src[v12];
        if ( v14 < Src || (unsigned __int64)v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(Pool2, Src, v13);
      }
    }
    else
    {
      v6 = -1073741811;
    }
    v15 = 0;
    while ( v6 >= 0 )
    {
      if ( v15 >= (unsigned int)v5 )
      {
        v8 = (char *)ExAllocatePool2(257LL, v7, 1651524422LL);
        if ( !v8 )
          v6 = -1073741801;
        if ( v6 >= 0 )
        {
          v21 = v8;
          v30 = v8;
          for ( i = 0; v6 >= 0 && i < (unsigned int)v5; ++i )
          {
            v23 = &Pool2[32 * i];
            v24 = *((unsigned int *)v23 + 4);
            v25 = (char *)*((_QWORD *)v23 + 3);
            if ( &v25[v24] < v25 || (unsigned __int64)&v25[v24] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v21, v25, v24);
            *((_QWORD *)v23 + 3) = v30;
            v26 = *((unsigned int *)v23 + 4);
            v21 = &v30[v26];
            v30 += v26;
            if ( v10 + 16 < v10 )
            {
              v10 = -1;
              v6 = -1073741675;
            }
            else
            {
              v10 += 16;
              v6 = 0;
            }
            if ( v6 >= 0 )
            {
              if ( v10 + 4 < v10 )
              {
                v10 = -1;
                v6 = -1073741675;
              }
              else
              {
                v10 += 4;
                v6 = 0;
              }
              if ( v6 >= 0 )
              {
                if ( (unsigned int)v26 + v10 < v10 )
                {
                  v10 = -1;
                  v6 = -1073741675;
                }
                else
                {
                  v10 += v26;
                  v6 = 0;
                }
              }
            }
          }
        }
        break;
      }
      v16 = 32LL * v15;
      v17 = *(_DWORD *)&Pool2[v16 + 16];
      if ( v17 && *(_QWORD *)&Pool2[v16 + 24] )
      {
        v18 = v7;
        v19 = v7 + v17;
        v20 = -1;
        if ( v19 >= v7 )
          v20 = v19;
        v7 = v20;
        v6 = v19 < v18 ? 0xC0000095 : 0;
      }
      else
      {
        v6 = -1073741811;
      }
      ++v15;
    }
    if ( v6 >= 0 )
    {
      v27 = (CFlipPropertySet *)ExAllocatePool2(257LL, 40LL, 1936737094LL);
      if ( v27 )
        v28 = CFlipPropertySet::CFlipPropertySet(v27, v5, (struct FlipPropertyItem *)Pool2, v8, v10);
      else
        v28 = 0LL;
      *a4 = v28;
      if ( v28 )
      {
        v8 = 0LL;
        Pool2 = 0LL;
      }
      else
      {
        v6 = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v6;
}
