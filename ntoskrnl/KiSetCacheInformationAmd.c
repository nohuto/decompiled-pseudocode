/*
 * XREFs of KiSetCacheInformationAmd @ 0x140A9C858
 * Callers:
 *     KiSetCacheInformation @ 0x140A898B0 (KiSetCacheInformation.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeGetProcessorNode @ 0x140302AD0 (KeGetProcessorNode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x140A8A138 (KiSetStandardizedCacheInformation.c)
 *     KiGetL2L3AssociativityAmd @ 0x140A9C814 (KiGetL2L3AssociativityAmd.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // rsi
  char result; // al
  unsigned int v7; // r14d
  _CACHE_DESCRIPTOR *Cache; // r15
  int v9; // r9d
  unsigned int v15; // r12d
  unsigned int v16; // edi
  unsigned int v17; // r12d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 ProcessorNode; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  char L2L3AssociativityAmd; // al
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 GroupSetMember; // r8
  __int64 Group; // rbx
  unsigned int v43; // edi
  char *v44; // rdx
  char v45; // [rsp+20h] [rbp-30h]
  int v46; // [rsp+24h] [rbp-2Ch]
  unsigned __int16 v47; // [rsp+28h] [rbp-28h]
  unsigned int v48; // [rsp+2Ch] [rbp-24h]
  _CACHE_DESCRIPTOR *v49; // [rsp+30h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) == 0 )
  {
    v7 = 0;
    Cache = CurrentPrcb->Cache;
    v49 = CurrentPrcb->Cache;
    v48 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v7 < 2 )
      {
        GroupSetMember = CurrentPrcb->GroupSetMember;
        v45 = v9;
        _RAX = 2147483653LL;
        __asm { cpuid }
        Group = CurrentPrcb->Group;
        v43 = _RDX;
        if ( !v7 )
          v43 = _RCX;
        v17 = HIBYTE(v43) << 10;
        v46 = 2 - (v7 != 0);
        v47 = (unsigned __int8)v43;
        v16 = HIWORD(v43);
        v44 = (char *)CurrentPrcb + 264 * v7;
        if ( *((_WORD *)v44 + 20316) > (unsigned __int16)Group )
          goto LABEL_34;
        if ( *((_WORD *)v44 + 20317) > (unsigned __int16)Group )
        {
          *((_WORD *)v44 + 20316) = v9 + Group;
LABEL_34:
          *(_QWORD *)&v44[8 * Group + 40640] |= GroupSetMember;
        }
      }
      else
      {
        if ( v7 != 2 )
        {
          v46 = 0;
          _RAX = 2147483654LL;
          v45 = 3;
          __asm { cpuid }
          v15 = _RDX;
          v47 = (unsigned __int8)_RDX;
          result = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
          LOBYTE(v16) = result;
          v17 = v15 >> 18 << 19;
          if ( !v17 )
            return result;
          v18 = CurrentPrcb->Group;
          v19 = CurrentPrcb->GroupSetMember;
          if ( CurrentPrcb->CacheProcessorSet[3].Count > (unsigned __int16)v18 )
          {
LABEL_10:
            CurrentPrcb->CacheProcessorSet[3].Bitmap[v18] |= v19;
          }
          else if ( CurrentPrcb->CacheProcessorSet[3].Size > (unsigned __int16)v18 )
          {
            CurrentPrcb->CacheProcessorSet[3].Count = v9 + v18;
            goto LABEL_10;
          }
          if ( CurrentPrcb->CpuType <= 21 )
          {
            v20 = 0LL;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              while ( 1 )
              {
                v21 = KiProcessorBlock[v20];
                if ( !(unsigned int)KeCheckProcessorAffinityEx(&CurrentPrcb->PackageProcessorSet.Count, v20) )
                  goto LABEL_23;
                KeGetProcessorNode((__int64)CurrentPrcb);
                ProcessorNode = KeGetProcessorNode(v21);
                if ( v23 != ProcessorNode )
                  goto LABEL_23;
                v24 = *(unsigned __int8 *)(v21 + 208);
                v25 = *(_QWORD *)(v21 + 200);
                if ( CurrentPrcb->CacheProcessorSet[3].Count <= (unsigned __int16)v24 )
                {
                  if ( CurrentPrcb->CacheProcessorSet[3].Size <= (unsigned __int16)v24 )
                    goto LABEL_19;
                  CurrentPrcb->CacheProcessorSet[3].Count = v24 + 1;
                }
                CurrentPrcb->CacheProcessorSet[3].Bitmap[v24] |= v25;
LABEL_19:
                v26 = CurrentPrcb->Group;
                v27 = CurrentPrcb->GroupSetMember;
                if ( *(_WORD *)(v21 + 41424) > (unsigned __int16)v26 )
                  goto LABEL_22;
                if ( *(_WORD *)(v21 + 41426) > (unsigned __int16)v26 )
                {
                  *(_WORD *)(v21 + 41424) = v26 + 1;
LABEL_22:
                  *(_QWORD *)(v21 + 8 * v26 + 41432) |= v27;
                }
LABEL_23:
                v20 = (unsigned int)(v20 + 1);
                if ( (unsigned int)v20 >= (unsigned int)KeNumberProcessors_0 )
                {
                  v7 = v48;
                  v9 = 1;
                  Cache = v49;
                  goto LABEL_35;
                }
              }
            }
          }
          goto LABEL_35;
        }
        v46 = 0;
        _RAX = 2147483654LL;
        v45 = 2;
        __asm { cpuid }
        v17 = WORD1(_RCX) << 10;
        v47 = (unsigned __int8)_RCX;
        L2L3AssociativityAmd = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
        v34 = CurrentPrcb->Group;
        LOBYTE(v16) = L2L3AssociativityAmd;
        v35 = CurrentPrcb->GroupSetMember;
        if ( CurrentPrcb->CacheProcessorSet[2].Count > (unsigned __int16)v34 )
          goto LABEL_28;
        if ( CurrentPrcb->CacheProcessorSet[2].Size > (unsigned __int16)v34 )
        {
          CurrentPrcb->CacheProcessorSet[2].Count = v9 + v34;
LABEL_28:
          CurrentPrcb->CacheProcessorSet[2].Bitmap[v34] |= v35;
        }
      }
LABEL_35:
      Cache->Type = v46;
      Cache->Level = v45;
      Cache->LineSize = v47;
      Cache->Associativity = v16;
      Cache->Size = v17;
      ++Cache;
      CurrentPrcb->CacheCount += v9;
      v49 = Cache;
      result = v9;
      v7 += v9;
      v48 = v7;
      if ( v7 >= 4 )
        return result;
    }
  }
  return KiSetStandardizedCacheInformation((__int64)CurrentPrcb, 0x8000001D);
}
