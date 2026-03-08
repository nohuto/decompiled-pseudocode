/*
 * XREFs of EtwpApplyScopeFilters @ 0x140695404
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x14069059C (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpAddRegEntryToGroup @ 0x140693640 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMProvider @ 0x140694950 (EtwpRegisterUMProvider.c)
 * Callees:
 *     EtwpApplyContainerFilter @ 0x1409F1F18 (EtwpApplyContainerFilter.c)
 *     EtwpApplyExeFilter @ 0x1409F2064 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F2138 (EtwpApplyPackageIdFilter.c)
 */

__int64 __fastcall EtwpApplyScopeFilters(__int64 a1, char a2, char a3, char a4, _BYTE *a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // cl
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  unsigned int v19; // r9d
  _DWORD *v20; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( (*(_BYTE *)(a1 + 98) & 1) == 0 )
  {
    *a5 = 0;
    if ( a3 )
      v9 = *(_QWORD *)(a1 + 40);
    else
      v9 = *(_QWORD *)(a1 + 32);
    if ( a4 )
      v9 = *(_QWORD *)(v9 + 400);
    v10 = 0LL;
    do
    {
      result = 32 * (v10 + 4);
      if ( !*(_DWORD *)(result + v9) )
        goto LABEL_8;
      v11 = 32LL * (unsigned int)v10;
      if ( a4 )
      {
        if ( (*(_DWORD *)(v11 + v9 + 136) & 0x400) == 0 )
          goto LABEL_8;
      }
      if ( a2 )
      {
        result = *(unsigned __int16 *)(v9 + 88);
        if ( *(_WORD *)(v11 + v9 + 134) != (_WORD)result )
          goto LABEL_8;
      }
      v12 = *(_QWORD *)(v9 + 384);
      v13 = 1;
      if ( !v12 )
      {
LABEL_13:
        result = (unsigned __int8)v10;
        *a5 |= 1 << v10;
        goto LABEL_14;
      }
      v14 = 104LL * (unsigned int)v10;
      v15 = *(_DWORD *)(v14 + v12);
      result = v15 & 0x80000004;
      if ( (_DWORD)result == -2147483644 )
      {
        v18 = *(unsigned int **)(v14 + v12 + 8);
        if ( v18 )
        {
          v19 = *v18;
          result = 0LL;
          if ( !*v18 )
            goto LABEL_14;
          v20 = v18 + 1;
          while ( *v20 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 1088LL) )
          {
            result = (unsigned int)(result + 1);
            ++v20;
            if ( (unsigned int)result >= v19 )
              goto LABEL_14;
          }
        }
        v13 = 1;
      }
      if ( (v15 & 0x80000008) == 0x80000008 )
      {
        result = EtwpApplyExeFilter(a1, *(_QWORD *)(v14 + v12 + 16));
        v13 = result;
      }
      if ( v13 )
      {
        if ( (v16 = *(_QWORD *)(v9 + 384), (*(_DWORD *)(v16 + 104LL * (unsigned int)v10) & 0x80000010) != 0x80000010)
          && (*(_DWORD *)(v16 + 104LL * (unsigned int)v10) & 0x80000020) != 0x80000020
          || (result = EtwpApplyPackageIdFilter(a1, *(_QWORD *)(v16 + v14 + 24), *(_QWORD *)(v16 + v14 + 32)),
              (_BYTE)result) )
        {
          v17 = *(_QWORD *)(v9 + 384);
          if ( (*(_DWORD *)(v17 + 104LL * (unsigned int)v10) & 0x80008000) != 0x80008000 )
            goto LABEL_13;
          result = EtwpApplyContainerFilter(a1, *(_QWORD *)(v17 + v14 + 40));
          if ( (_BYTE)result )
            goto LABEL_13;
        }
      }
LABEL_14:
      if ( a2 )
        return result;
LABEL_8:
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < 8 );
  }
  return result;
}
