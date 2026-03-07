__int64 __fastcall HalpGenericErrorSourceRecovery(__int64 a1, _DWORD *a2)
{
  unsigned int *v2; // rbp
  unsigned int v5; // ebx
  int v6; // r14d
  _DWORD *v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx

  v2 = (unsigned int *)(a1 + 128);
  v5 = -1073741637;
  v6 = 0;
  if ( *(_WORD *)(a1 + 10) )
  {
    v7 = (_DWORD *)(a1 + 144);
    while ( 1 )
    {
      if ( (unsigned int)(v7[8] - 2) <= 1 )
        goto LABEL_18;
      if ( RtlCompareMemory(v7, &MEMORY_ERROR_SECTION_GUID, 0x10uLL) == 16 )
        break;
      if ( RtlCompareMemory(v7, PMEM_ERROR_SECTION_GUID, 0x10uLL) == 16 )
      {
        v13 = *v2;
        v14 = v13 + (unsigned int)*(v7 - 3);
        v15 = (_DWORD *)(v13 + a1);
        v16 = 0LL;
        if ( *(unsigned int *)(a1 + 20) >= v14 )
          v16 = v15;
        if ( !v16 || !v16[21] )
        {
          v5 = -1073741637;
          goto LABEL_16;
        }
        v12 = HalpPmemErrorDeferredRecovery(v16);
        goto LABEL_14;
      }
LABEL_16:
      if ( (v5 & 0x80000000) == 0 )
      {
        *a2 = 2;
        return v5;
      }
      v2 += 18;
      v7 += 18;
LABEL_18:
      if ( ++v6 >= (unsigned int)*(unsigned __int16 *)(a1 + 10) )
        return v5;
    }
    v8 = *v2;
    v9 = v8 + (unsigned int)*(v7 - 3);
    v10 = v8 + a1;
    v11 = 0LL;
    if ( *(unsigned int *)(a1 + 20) >= v9 )
      v11 = v10;
    v12 = HalpGhesMemoryErrorHandler(v11);
LABEL_14:
    v5 = v12;
    goto LABEL_16;
  }
  return v5;
}
