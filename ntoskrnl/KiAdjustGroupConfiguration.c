void __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int16 *v6; // rdx
  __int64 v7; // r8
  unsigned __int16 v8; // cx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // eax
  unsigned __int16 v13; // r10
  unsigned int v14; // r9d
  __int16 v15; // cx
  __int64 v16; // rcx
  int *v17; // rdi
  int v18; // eax
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  char v21; // al
  _QWORD *Pool2; // rbx
  unsigned __int16 v23; // di
  __int64 v24; // r8
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  char v31; // r15
  unsigned __int16 v32; // bp
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned __int16 i; // cx
  __int64 v36; // r9
  unsigned __int16 v37; // r10
  unsigned __int16 v38; // dx
  unsigned int v39; // r11d
  unsigned int *v40; // rax
  unsigned int v41; // r8d
  __int64 *v42; // rdi
  __int64 v43; // rdx
  _DWORD v44[32]; // [rsp+20h] [rbp-138h] BYREF
  _DWORD Src[32]; // [rsp+A0h] [rbp-B8h] BYREF

  memset(v44, 0, sizeof(v44));
  if ( (*(_BYTE *)(a1 + 5) & 4) == 0 )
  {
    if ( KiMaximumGroups )
    {
      v2 = (unsigned __int16)KiMaximumGroups;
      v3 = v44;
      v4 = KiMaximumGroupSize;
      while ( v2 )
      {
        *v3++ = v4;
        --v2;
      }
    }
    if ( KiSubNodeCount )
    {
      v5 = (unsigned __int16)KiSubNodeCount;
      v6 = (unsigned __int16 *)(KiSubNodeConfigBlock + 6);
      do
      {
        if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
          v44[*v6] -= *((unsigned __int8 *)v6 - 2);
        v6 += 12;
        --v5;
      }
      while ( v5 );
    }
    v7 = (unsigned __int16)KiSubNodeCount;
    v8 = 0;
    if ( KiSubNodeCount )
    {
      while ( 1 )
      {
        v9 = KiSubNodeConfigBlock;
        v10 = 3LL * v8;
        if ( (*(_BYTE *)(KiSubNodeConfigBlock + 24LL * v8 + 5) & 7) == 3
          && !*(_QWORD *)(KiSubNodeConfigBlock + 24LL * v8 + 16) )
        {
          v11 = *(unsigned __int8 *)(KiSubNodeConfigBlock + 24LL * v8 + 4);
          v12 = *(unsigned __int8 *)(a1 + 4);
          if ( (unsigned __int8)v11 <= (unsigned __int8)v12 )
          {
            v13 = *(_WORD *)(KiSubNodeConfigBlock + 24LL * v8 + 6);
            v14 = v12 - v11;
          }
          else
          {
            v13 = *(_WORD *)(a1 + 6);
            v14 = v11 - v12;
          }
          if ( v44[v13] >= v14 )
            break;
        }
        if ( ++v8 >= (unsigned __int16)KiSubNodeCount )
          goto LABEL_21;
      }
      v15 = *(_WORD *)(KiSubNodeConfigBlock + 24LL * v8 + 6);
      *(_WORD *)(KiSubNodeConfigBlock + 8 * v10 + 6) = *(_WORD *)(a1 + 6);
      *(_BYTE *)(a1 + 5) |= 2u;
      *(_WORD *)(a1 + 6) = v15;
      *(_BYTE *)(v9 + 8 * v10 + 5) &= ~2u;
    }
    else
    {
LABEL_21:
      if ( KiMaximumGroups )
      {
        v16 = (unsigned __int16)KiMaximumGroups;
        v17 = Src;
        v18 = KiMaximumGroupSize;
        while ( v16 )
        {
          *v17++ = v18;
          --v16;
        }
      }
      if ( (_WORD)v7 )
      {
        v19 = v7;
        v20 = (_QWORD *)(KiSubNodeConfigBlock + 16);
        do
        {
          v21 = *((_BYTE *)v20 - 11);
          if ( (v21 & 1) != 0 && ((v21 & 4) != 0 || *v20) )
            Src[*((unsigned __int16 *)v20 - 5)] -= *((unsigned __int8 *)v20 - 12);
          v20 += 3;
          --v19;
        }
        while ( v19 );
      }
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 8LL * (unsigned __int16)KiSubNodeCount, 1128743243LL);
      if ( Pool2 )
      {
        v23 = 0;
        if ( KiSubNodeCount )
        {
          v24 = (unsigned __int16)KiSubNodeCount;
          v25 = (_QWORD *)(KiSubNodeConfigBlock + 16);
          do
          {
            if ( (*((_BYTE *)v25 - 11) & 5) == 1 && !*v25 )
            {
              v26 = v23++;
              Pool2[v26] = v25 - 2;
            }
            v25 += 3;
            --v24;
          }
          while ( v24 );
        }
        v27 = v23;
        qsort(Pool2, v23, 8uLL, KiCompareSubNodeConfigurationCapacity);
        if ( v23 )
        {
          v28 = Pool2;
          v29 = v23;
          do
          {
            v30 = *v28++;
            *(_WORD *)(v30 + 8) = *(_WORD *)(v30 + 6);
            --v29;
          }
          while ( v29 );
        }
        v31 = 0;
        v32 = 0;
        if ( KiActiveGroups )
        {
          while ( 1 )
          {
            if ( KiMaximumGroups )
              memmove(v44, Src, 4LL * (unsigned __int16)KiMaximumGroups);
            v33 = *(unsigned __int8 *)(a1 + 4);
            v34 = v44[v32];
            if ( v34 >= v33 )
            {
              *(_WORD *)(a1 + 6) = v32;
              v44[v32] = v34 - v33;
              for ( i = 0; i < v23; ++i )
              {
                v36 = Pool2[i];
                if ( v36 != a1 )
                {
                  v37 = KiMaximumGroups;
                  v38 = 0;
                  if ( KiMaximumGroups )
                  {
                    v39 = *(unsigned __int8 *)(v36 + 4);
                    v40 = v44;
                    do
                    {
                      v41 = *v40;
                      if ( *v40 >= v39 )
                      {
                        *(_WORD *)(v36 + 6) = v38;
                        *v40 = v41 - v39;
                      }
                      ++v38;
                      ++v40;
                    }
                    while ( v38 < v37 );
                  }
                  if ( v38 == v37 )
                    break;
                }
              }
              if ( i == v23 )
                break;
            }
            if ( ++v32 >= (unsigned __int16)KiActiveGroups )
              goto LABEL_58;
          }
          v31 = 1;
        }
LABEL_58:
        if ( v23 )
        {
          v42 = Pool2;
          do
          {
            v43 = *v42;
            if ( v31 )
              *(_BYTE *)(v43 + 5) = (*(_WORD *)(v43 + 6) < (unsigned __int16)KiActiveGroups ? 2 : 0) | *(_BYTE *)(v43 + 5) & 0xFD;
            else
              *(_WORD *)(v43 + 6) = *(_WORD *)(v43 + 8);
            ++v42;
            *(_WORD *)(v43 + 8) = 0;
            --v27;
          }
          while ( v27 );
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
}
