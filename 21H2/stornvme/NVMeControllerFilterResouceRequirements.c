/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C000D8AC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0006080 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     GetProcessorGroupInformation @ 0x1C000B924 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000D1AC (IsPci3MsiInterrupt.c)
 */

void *__fastcall NVMeControllerFilterResouceRequirements(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  int v7; // r15d
  void *result; // rax
  __int64 v10; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // edx
  _BYTE *v13; // r8
  _BYTE *v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // rdx
  int v20; // r8d
  __int64 v21; // r9
  unsigned int v22; // r10d
  int v23; // r11d
  __int64 v24; // rdx
  int v25; // r8d
  unsigned int v26; // r9d
  __int64 v27; // r10
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // rax
  unsigned int i; // ecx
  __int64 v34; // rdx
  __int64 v35; // rax

  v4 = 0;
  v6 = 0;
  v7 = 0;
  if ( GetProcessorGroupInformation(a1, a2, a3, a4) )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = *(_DWORD *)(v10 + 36);
    v12 = v11;
    if ( v11 )
    {
      v13 = (_BYTE *)(v10 + 41);
      do
      {
        if ( IsPci3MsiInterrupt((__int64)(v13 - 1)) )
        {
          ++v6;
        }
        else if ( *v14 == 1 && (v14[3] & 1) != 0 )
        {
          ++v7;
        }
        v13 = v14 + 32;
      }
      while ( v15 != 1 );
    }
    v16 = *(unsigned __int16 *)(a1 + 218);
    if ( v6 > v16 + 1 )
    {
      v11 += v16 - v6 + 1;
      v17 = 0;
      v18 = v12;
      if ( v12 )
      {
        while ( 1 )
        {
          if ( IsPci3MsiInterrupt(32LL * v17 + v10 + 40) )
          {
            if ( v21 )
            {
              while ( !_bittest64(&v21, v22) )
                ++v22;
            }
            *(_DWORD *)(v19 + v10 + 48) = -2;
            *(_WORD *)(v19 + v10 + 44) |= 4u;
            *(_WORD *)(v19 + v10 + 56) = 4;
            *(_QWORD *)(v19 + v10 + 64) = 1LL << v22;
            *(_DWORD *)(v19 + v10 + 52) = -2;
            *(_WORD *)(v19 + v10 + 58) = v23;
            *(_DWORD *)(v19 + v10 + 60) = 3;
            if ( (v21 & ~(1LL << v22)) == 0 && v23 == *(unsigned __int16 *)(a1 + 216) - 1 )
              break;
          }
          v18 = *(_DWORD *)(v10 + 36);
          v17 = v20 + 1;
          if ( v17 >= v18 )
            goto LABEL_22;
        }
        v18 = *(_DWORD *)(v10 + 36);
        v17 = v20 + 1;
      }
LABEL_22:
      v12 = v18;
      if ( v17 < v18 )
      {
        while ( !IsPci3MsiInterrupt(32LL * v17 + v10 + 40) )
        {
          v12 = *(_DWORD *)(v10 + 36);
          v17 = v25 + 1;
          if ( v17 >= v12 )
            goto LABEL_33;
        }
        if ( v27 )
        {
          while ( !_bittest64(&v27, v26) )
            ++v26;
        }
        v28 = 32 * v24;
        *(_WORD *)(v28 + v10 + 44) |= 4u;
        *(_DWORD *)(v28 + v10 + 56) = 4;
        *(_QWORD *)(v28 + v10 + 64) = 1LL << v26;
        v17 = v25 + 1;
        *(_DWORD *)(v28 + v10 + 48) = -2;
        *(_DWORD *)(v28 + v10 + 52) = -2;
        *(_DWORD *)(v28 + v10 + 60) = 3;
        v12 = *(_DWORD *)(v10 + 36);
      }
LABEL_33:
      while ( v17 < v12 && !IsPci3MsiInterrupt(32LL * v17 + v10 + 40) )
      {
        v12 = *(_DWORD *)(v10 + 36);
        ++v17;
      }
      while ( v17 < v12 )
      {
        if ( !IsPci3MsiInterrupt(32LL * v17 + v10 + 40) && v30 != v31 )
        {
          v32 = 32LL * v31;
          *(_OWORD *)(v32 + v10 + 40) = *v29;
          *(_OWORD *)(v32 + v10 + 56) = v29[1];
        }
        v12 = *(_DWORD *)(v10 + 36);
        v17 = v30 + 1;
      }
    }
    if ( v7 )
    {
      for ( i = 0; i < v12; ++i )
      {
        v34 = 32LL * i;
        if ( *(_BYTE *)(v34 + v10 + 41) != 1 || (*(_BYTE *)(v34 + v10 + 44) & 1) == 0 )
        {
          if ( i != v4 )
          {
            v35 = 32LL * v4;
            *(_OWORD *)(v35 + v10 + 40) = *(_OWORD *)(v34 + v10 + 40);
            *(_OWORD *)(v35 + v10 + 56) = *(_OWORD *)(v34 + v10 + 56);
          }
          ++v4;
        }
        v12 = *(_DWORD *)(v10 + 36);
      }
      v11 += v4 - i;
    }
    memmove(
      (void *)(32LL * v11 + v10 + 40),
      (const void *)(32LL * v12 + v10 + 40),
      (unsigned int)*(_QWORD *)(a2 + 8) + **(_DWORD **)(a2 + 8) - (32 * v12 + (_DWORD)v10 + 40));
    result = NVMeZeroMemory(
               (void *)(*(_QWORD *)(a2 + 8) + **(unsigned int **)(a2 + 8) - 32LL * (*(_DWORD *)(v10 + 36) - v11)),
               32 * (*(_DWORD *)(v10 + 36) - v11));
    *(_DWORD *)(v10 + 36) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 9;
    return (void *)StorPortExtendedFunction(98LL, a1, 0LL, 10LL);
  }
  return result;
}
