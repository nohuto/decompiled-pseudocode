/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0067A28
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C0069320 (NtFlipObjectConsumerPostMessage.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C006A6B0 (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x1C0068250 (--0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipConsumerMessage>(
        unsigned int a1,
        char *a2,
        char a3,
        CFlipConsumerMessage **a4)
{
  signed int v5; // ebx
  unsigned int v6; // r13d
  char *v7; // r14
  char *PoolWithQuotaTag; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r12
  unsigned int i; // r8d
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // edi
  char *v18; // r12
  unsigned int v19; // r15d
  unsigned int v20; // r13d
  char *v21; // rbx
  char *v22; // rdx
  size_t v23; // r8
  __int64 v24; // rcx
  CFlipConsumerMessage *v25; // rax
  CFlipConsumerMessage *v26; // rcx
  char v29; // [rsp+C0h] [rbp+18h]

  v29 = a3;
  v5 = 0;
  if ( a1 )
  {
    v6 = 0;
    v7 = 0LL;
    PoolWithQuotaTag = 0LL;
    if ( a2 )
    {
      v9 = 32LL * a1;
      v10 = 0xFFFFFFFFLL;
      if ( v9 <= 0xFFFFFFFF )
        v10 = (unsigned int)v9;
      v5 = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v9 <= 0xFFFFFFFF )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)v10, 0x69704346u);
        if ( !PoolWithQuotaTag )
          v5 = -1073741801;
        a3 = v29;
      }
      if ( v5 >= 0 )
      {
        if ( a3 && (&a2[v10] < a2 || (unsigned __int64)&a2[v10] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithQuotaTag, a2, (unsigned int)v10);
      }
    }
    else
    {
      v5 = -1073741811;
    }
    for ( i = 0; v5 >= 0 && i < a1; ++i )
    {
      v12 = 32LL * i;
      v13 = *(_DWORD *)&PoolWithQuotaTag[v12 + 16];
      if ( v13 && *(_QWORD *)&PoolWithQuotaTag[v12 + 24] )
      {
        v14 = v6;
        v15 = v6 + v13;
        v16 = -1;
        if ( v15 >= v6 )
          v16 = v15;
        v6 = v16;
        v5 = v15 < v14 ? 0xC0000095 : 0;
      }
      else
      {
        v5 = -1073741811;
      }
    }
    v17 = 0;
    if ( v5 < 0 )
      goto LABEL_50;
    v7 = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6, 0x62704346u);
    if ( !v7 )
      v5 = -1073741801;
    if ( v5 < 0 )
    {
LABEL_50:
      v20 = a1;
    }
    else
    {
      v18 = v7;
      v19 = 0;
      v20 = a1;
      while ( v5 >= 0 && v19 < a1 )
      {
        v21 = &PoolWithQuotaTag[32 * v19];
        v22 = (char *)*((_QWORD *)v21 + 3);
        v23 = *((unsigned int *)v21 + 4);
        if ( v29 && (&v22[v23] < v22 || (unsigned __int64)&v22[v23] > MmUserProbeAddress) )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, v22, v23);
        *((_QWORD *)v21 + 3) = v18;
        v24 = *((unsigned int *)v21 + 4);
        v18 += v24;
        if ( v17 + 16 < v17 )
        {
          v17 = -1;
          v5 = -1073741675;
        }
        else
        {
          v17 += 16;
          v5 = 0;
        }
        if ( v5 >= 0 )
        {
          if ( v17 + 4 < v17 )
          {
            v17 = -1;
            v5 = -1073741675;
          }
          else
          {
            v17 += 4;
            v5 = 0;
          }
          if ( v5 >= 0 )
          {
            if ( (unsigned int)v24 + v17 < v17 )
            {
              v17 = -1;
              v5 = -1073741675;
            }
            else
            {
              v17 += v24;
              v5 = 0;
            }
          }
        }
        ++v19;
      }
    }
    if ( v5 >= 0 )
    {
      v25 = (CFlipConsumerMessage *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x40uLL, 0x6D634346u);
      if ( v25 )
        v26 = CFlipConsumerMessage::CFlipConsumerMessage(v25, v20, (struct FlipPropertyItem *)PoolWithQuotaTag, v7, v17);
      else
        v26 = 0LL;
      *a4 = v26;
      if ( v26 )
      {
        v7 = 0LL;
        PoolWithQuotaTag = 0LL;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( PoolWithQuotaTag )
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return (unsigned int)v5;
}
