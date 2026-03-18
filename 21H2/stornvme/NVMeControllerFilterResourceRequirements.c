/*
 * XREFs of NVMeControllerFilterResourceRequirements @ 0x1C000D2BC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0005860 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     IsPci3MsiInterrupt @ 0x1C000D550 (IsPci3MsiInterrupt.c)
 *     GetProcessorGroupInformation @ 0x1C000D57C (GetProcessorGroupInformation.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 */

void *__fastcall NVMeControllerFilterResourceRequirements(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebp
  int v5; // r15d
  __int64 v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rdx
  _BYTE *v10; // r8
  _BYTE *v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r9
  unsigned int v19; // r10d
  int v20; // r11d
  __int64 v21; // rdx
  int v22; // r8d
  unsigned int v23; // r9d
  __int64 v24; // r10
  __int64 v25; // rdx
  unsigned int v26; // r8d
  _OWORD *v27; // rcx
  int v28; // r8d
  unsigned int v29; // r9d
  void *result; // rax
  __int64 v31; // rax
  unsigned int i; // ecx
  __int64 v33; // rdx
  __int64 v34; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)GetProcessorGroupInformation() )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_DWORD *)(v7 + 36);
    v9 = v8;
    if ( v8 )
    {
      v10 = (_BYTE *)(v7 + 41);
      do
      {
        if ( (unsigned __int8)IsPci3MsiInterrupt(v10 - 1, v9) )
        {
          ++v4;
        }
        else if ( *v11 == 1 && (v11[3] & 1) != 0 )
        {
          ++v5;
        }
        v10 = v11 + 32;
      }
      while ( v12 != 1 );
    }
    v13 = *(unsigned __int16 *)(a1 + 234);
    if ( v4 > v13 + 1 )
    {
      v8 += v13 - v4 + 1;
      v14 = 0;
      v15 = v9;
      if ( (_DWORD)v9 )
      {
        while ( 1 )
        {
          if ( (unsigned __int8)IsPci3MsiInterrupt(32LL * v14 + v7 + 40, 32LL * v14) )
          {
            if ( v18 )
            {
              while ( !_bittest64(&v18, v19) )
                ++v19;
            }
            *(_DWORD *)(v16 + v7 + 48) = -2;
            *(_WORD *)(v16 + v7 + 44) |= 4u;
            *(_WORD *)(v16 + v7 + 56) = 4;
            *(_QWORD *)(v16 + v7 + 64) = 1LL << v19;
            *(_DWORD *)(v16 + v7 + 52) = -2;
            *(_WORD *)(v16 + v7 + 58) = v20;
            *(_DWORD *)(v16 + v7 + 60) = 3;
            if ( (v18 & ~(1LL << v19)) == 0 && v20 == *(unsigned __int16 *)(a1 + 232) - 1 )
              break;
          }
          v15 = *(_DWORD *)(v7 + 36);
          v14 = v17 + 1;
          if ( v14 >= v15 )
            goto LABEL_20;
        }
        v15 = *(_DWORD *)(v7 + 36);
        v14 = v17 + 1;
      }
LABEL_20:
      v9 = v15;
      if ( v14 >= v15 )
        goto LABEL_25;
      while ( !(unsigned __int8)IsPci3MsiInterrupt(32LL * v14 + v7 + 40, v14) )
      {
        LODWORD(v9) = *(_DWORD *)(v7 + 36);
        v14 = v22 + 1;
        if ( v14 >= (unsigned int)v9 )
          goto LABEL_30;
      }
      if ( v24 )
      {
        while ( !_bittest64(&v24, v23) )
          ++v23;
      }
      v25 = 32 * v21;
      *(_WORD *)(v25 + v7 + 44) |= 4u;
      *(_DWORD *)(v25 + v7 + 56) = 4;
      *(_QWORD *)(v25 + v7 + 64) = 1LL << v23;
      v14 = v22 + 1;
      *(_DWORD *)(v25 + v7 + 48) = -2;
      *(_DWORD *)(v25 + v7 + 52) = -2;
      *(_DWORD *)(v25 + v7 + 60) = 3;
      v9 = *(unsigned int *)(v7 + 36);
LABEL_25:
      while ( v14 < (unsigned int)v9 )
      {
        if ( (unsigned __int8)IsPci3MsiInterrupt(32LL * v14 + v7 + 40, v9) )
        {
          while ( v26 < (unsigned int)v9 )
          {
            if ( !(unsigned __int8)IsPci3MsiInterrupt(32LL * v26 + v7 + 40, v9) && v28 != v29 )
            {
              v31 = 32LL * v29;
              *(_OWORD *)(v31 + v7 + 40) = *v27;
              *(_OWORD *)(v31 + v7 + 56) = v27[1];
            }
            v9 = *(unsigned int *)(v7 + 36);
            v26 = v28 + 1;
          }
          break;
        }
        v9 = *(unsigned int *)(v7 + 36);
        v14 = v26 + 1;
      }
    }
LABEL_30:
    if ( v5 )
    {
      for ( i = 0; i < (unsigned int)v9; ++i )
      {
        v33 = 32LL * i;
        if ( *(_BYTE *)(v33 + v7 + 41) != 1 || (*(_BYTE *)(v33 + v7 + 44) & 1) == 0 )
        {
          if ( i != v2 )
          {
            v34 = 32LL * v2;
            *(_OWORD *)(v34 + v7 + 40) = *(_OWORD *)(v33 + v7 + 40);
            *(_OWORD *)(v34 + v7 + 56) = *(_OWORD *)(v33 + v7 + 56);
          }
          ++v2;
        }
        LODWORD(v9) = *(_DWORD *)(v7 + 36);
      }
      v8 += v2 - i;
    }
    memmove(
      (void *)(32LL * v8 + v7 + 40),
      (const void *)(32LL * (unsigned int)v9 + v7 + 40),
      (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (32 * (_DWORD)v9 + (_DWORD)v7 + 40));
    result = NVMeZeroMemory(
               (void *)(*(_QWORD *)(a2 + 8) + **(unsigned int **)(a2 + 8) - 32LL * (*(_DWORD *)(v7 + 36) - v8)),
               32 * (*(_DWORD *)(v7 + 36) - v8));
    *(_DWORD *)(v7 + 36) = v8;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  return result;
}
