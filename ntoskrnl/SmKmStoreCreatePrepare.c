/*
 * XREFs of SmKmStoreCreatePrepare @ 0x1407DD9A8
 * Callers:
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 * Callees:
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall SmKmStoreCreatePrepare(unsigned int *a1, char a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // eax
  const void **v5; // rdi
  unsigned int v6; // ebx
  void *NonPaged; // rbp
  size_t v10; // rsi
  const void *v11; // rax

  v4 = *a1;
  v5 = (const void **)(a1 + 2);
  v6 = 0;
  NonPaged = 0LL;
  if ( (unsigned __int8)*a1 != 6 || v4 >= 0x400 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    if ( (v4 & 0x300) != 0 || *(_BYTE *)v5 )
      return (unsigned int)-1073741790;
  }
  else if ( *(_BYTE *)v5 )
  {
    v10 = a1[12];
    if ( (_DWORD)v10 )
    {
      NonPaged = (void *)SSHSupportAllocateNonPaged((unsigned int)v10, 0x4B456D73u);
      if ( !NonPaged )
        return (unsigned int)-1073741670;
    }
    memmove(NonPaged, v5[4], v10);
    v11 = v5[7];
    goto LABEL_6;
  }
  LODWORD(v10) = 0;
  v11 = 0LL;
LABEL_6:
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = NonPaged;
  *(_DWORD *)(a4 + 16) = v10;
  *(_QWORD *)(a4 + 24) = v11;
  *a3 = NonPaged;
  return v6;
}
