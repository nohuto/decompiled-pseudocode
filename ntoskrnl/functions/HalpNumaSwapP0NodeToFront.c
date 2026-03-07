void HalpNumaSwapP0NodeToFront()
{
  __int64 v0; // rbx
  unsigned int v1; // ecx
  unsigned int v2; // eax
  __int64 v3; // rdi
  int v4; // r11d
  int v5; // r8d
  unsigned int v6; // eax
  _DWORD *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  int v11; // edx
  _DWORD *v12; // rcx
  int v13; // edx
  __int64 v14; // r10
  __int64 v15; // r9
  __int16 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int16 v24; // r8
  int v25; // [rsp+50h] [rbp+28h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+30h] BYREF
  int v27; // [rsp+60h] [rbp+38h] BYREF
  int v28; // [rsp+68h] [rbp+40h] BYREF

  v25 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  if ( HalpAcpiSrat )
  {
    v0 = HalpNumaConfig;
    if ( HalpNumaConfig )
    {
      if ( (unsigned __int8)HalpGetNumaProcMemoryCount(&v28, &v27, &v26, &v25)
        && (v25 = 0, (int)HalpInterruptGetIdentifiers(0, &v25, 0LL) >= 0) )
      {
        v1 = *(_DWORD *)(v0 + 60);
        v2 = 0;
        if ( v1 )
        {
          while ( *(_DWORD *)(*(_QWORD *)v0 + 4LL * v2) != v25 )
          {
            if ( ++v2 >= v1 )
              return;
          }
          v3 = HalpNumaConfig;
          v4 = 0;
          v5 = *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 16) + 4LL * v2);
          v6 = *(_DWORD *)(HalpNumaConfig + 56);
          if ( v6 )
          {
            v7 = *(_DWORD **)(HalpNumaConfig + 24);
            while ( v7[v4] != v5 )
            {
              if ( ++v4 >= v6 )
                return;
            }
            if ( v4 )
            {
              v8 = 1;
              v7[v4] = *v7;
              **(_DWORD **)(v3 + 24) = v5;
              v9 = HalpNumaConfig;
              v10 = *(_DWORD **)(HalpNumaConfig + 32);
              v11 = v10[v4];
              v10[v4] = *v10;
              **(_DWORD **)(v9 + 32) = v11;
              v12 = *(_DWORD **)(v9 + 40);
              v13 = v12[v4];
              v12[v4] = *v12;
              for ( **(_DWORD **)(v9 + 40) = v13; v8 < *(_DWORD *)(v3 + 56); ++v8 )
              {
                if ( v8 != v4 )
                {
                  v14 = HalpNumaConfig;
                  v15 = *(_QWORD *)(HalpNumaConfig + 48);
                  v16 = *(_WORD *)(v15 + 2LL * (v8 + *(_DWORD *)(HalpNumaConfig + 64) * v4));
                  *(_WORD *)(v15 + 2LL * (v8 + *(_DWORD *)(HalpNumaConfig + 64) * v4)) = *(_WORD *)(v15 + 2LL * v8);
                  *(_WORD *)(*(_QWORD *)(v14 + 48) + 2LL * v8) = v16;
                  v17 = *(_QWORD *)(v14 + 48);
                  v18 = *(_DWORD *)(v14 + 64) * v8;
                  LOWORD(v15) = *(_WORD *)(v17 + 2LL * (unsigned int)(v4 + v18));
                  *(_WORD *)(v17 + 2LL * (unsigned int)(v4 + v18)) = *(_WORD *)(v17 + 2 * v18);
                  *(_WORD *)(*(_QWORD *)(v14 + 48) + 2LL * *(_DWORD *)(v14 + 64) * v8) = v15;
                }
              }
              if ( v26 )
              {
                v19 = 0LL;
                v20 = v26;
                do
                {
                  v21 = *(_DWORD *)((char *)HalpNumaMemoryRanges + v19 + 8);
                  if ( v21 )
                  {
                    if ( v21 == v4 )
                      *(_DWORD *)((char *)HalpNumaMemoryRanges + v19 + 8) = 0;
                  }
                  else
                  {
                    *(_DWORD *)((char *)HalpNumaMemoryRanges + v19 + 8) = v4;
                  }
                  v19 += 16LL;
                  --v20;
                }
                while ( v20 );
              }
              if ( HalpChannelMemoryRangeCount )
              {
                v22 = 0LL;
                v23 = (unsigned int)HalpChannelMemoryRangeCount;
                do
                {
                  v24 = *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 10);
                  if ( v24 )
                  {
                    if ( v24 == (_WORD)v4 )
                      *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 10) = 0;
                  }
                  else
                  {
                    *(_WORD *)((char *)HalpChannelMemoryRanges + v22 + 10) = v4;
                  }
                  v22 += 16LL;
                  --v23;
                }
                while ( v23 );
              }
            }
          }
        }
      }
      else
      {
        HalpNumaConfig = 0LL;
      }
    }
  }
}
