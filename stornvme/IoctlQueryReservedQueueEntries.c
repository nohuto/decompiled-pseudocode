/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x1C0013C14
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 * Callees:
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned __int16 *v7; // rdx
  __int64 SrbDataBuffer; // r15
  unsigned __int64 v9; // rcx
  int v11; // ecx
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  unsigned __int16 i; // r10
  __int64 v15; // r9
  unsigned __int16 v16; // r11
  __int16 v17; // cx
  _WORD *v18; // r12
  __int16 v19; // cx
  __int64 v20; // rdx
  unsigned int *v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = (_QWORD *)(a1 + 904);
  v21 = 0LL;
  v5 = 16;
  if ( *(_WORD *)(a1 + 918) )
  {
    v6 = *(unsigned __int16 *)(a1 + 918);
    v7 = (unsigned __int16 *)(*v2 + 34LL);
    do
    {
      if ( *(v7 - 5) )
        v5 += 48 * *v7 + 48;
      v7 += 24;
      --v6;
    }
    while ( v6 );
  }
  SrbDataBuffer = GetSrbDataBuffer(a2, &v21);
  if ( *(_WORD *)(a1 + 890) )
  {
    v9 = *v21;
    if ( v9 >= (unsigned __int64)v5 + 28 )
    {
      NVMeZeroMemory((void *)(SrbDataBuffer + 28), v9 - 28);
      v12 = *(_WORD *)(a1 + 918);
      v13 = SrbDataBuffer + 44;
      for ( i = 0; i < v12; ++i )
      {
        v15 = *v2 + 48LL * i;
        if ( *(_WORD *)(v15 + 24) )
        {
          v16 = 0;
          v17 = *(_WORD *)(v13 + 32);
          *(_QWORD *)v13 = *(_QWORD *)v15;
          *(_QWORD *)(v13 + 16) = *(_QWORD *)(v15 + 16);
          *(_WORD *)(v13 + 24) = *(_WORD *)(v15 + 24);
          *(_WORD *)(v13 + 26) = *(_WORD *)(v15 + 26);
          v18 = (_WORD *)(v13 + 34);
          v19 = *(_WORD *)(v13 + 32) ^ (*(_WORD *)(v15 + 32) ^ v17) & 1;
          *(_WORD *)(v13 + 32) = v19;
          *(_WORD *)(v13 + 32) = v19 ^ (*(_WORD *)(v15 + 32) ^ v19) & 2;
          *(_DWORD *)(v13 + 28) = *(_DWORD *)(v15 + 28);
          v13 += 48LL;
          *v18 = 0;
          v12 = *(_WORD *)(a1 + 918);
          if ( v12 )
          {
            do
            {
              v20 = *(_QWORD *)(a1 + 896) + 48LL * v16;
              if ( *(_WORD *)(v20 + 28) == *(_WORD *)(v15 + 24) )
              {
                *(_QWORD *)v13 = *(_QWORD *)v20;
                *(_QWORD *)(v13 + 16) = *(_QWORD *)(v20 + 16);
                *(_WORD *)(v13 + 24) = *(_WORD *)(v20 + 24);
                *(_WORD *)(v13 + 26) = *(_WORD *)(v20 + 26);
                *(_WORD *)(v13 + 30) ^= (*(_WORD *)(v13 + 30) ^ *(_WORD *)(v20 + 30)) & 1;
                *(_WORD *)(v13 + 28) = *(_WORD *)(v20 + 28);
                *(_WORD *)(v13 + 32) = *(_WORD *)(v20 + 32);
                ++*v18;
                v13 += 48LL;
              }
              v12 = *(_WORD *)(a1 + 918);
              ++v16;
            }
            while ( v16 < v12 );
          }
        }
      }
      v11 = v5;
      *(_WORD *)(SrbDataBuffer + 36) = *(_WORD *)(a1 + 890);
    }
    else
    {
      if ( (unsigned int)v9 < 0x24 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
      v11 = 8;
    }
    *(_BYTE *)(a2 + 3) = 1;
    *(_DWORD *)(SrbDataBuffer + 32) = v5;
    *(_DWORD *)(SrbDataBuffer + 28) = v5;
    *(_DWORD *)(SrbDataBuffer + 24) = v11;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 1;
  }
  return 0LL;
}
