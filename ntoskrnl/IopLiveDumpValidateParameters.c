/*
 * XREFs of IopLiveDumpValidateParameters @ 0x14094C310
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopLiveDumpValidateCancelObject @ 0x14094C244 (IopLiveDumpValidateCancelObject.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14094C2AC (IopLiveDumpValidateDumpFileHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

int __fastcall IopLiveDumpValidateParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int result; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdx
  void *Pool2; // rax
  __int64 i; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx

  v2 = 0LL;
  if ( !a2 )
    return -1073741811;
  if ( *(_DWORD *)a2 != 2 )
    return -1073741811;
  if ( *(_DWORD *)(a2 + 4) < 0x38u )
    return -1073741811;
  v6 = *(_DWORD *)(a2 + 28);
  if ( v6 >= 4 )
    return -1073741811;
  if ( (*(_DWORD *)(a2 + 24) & 0x20) == 0 )
    goto LABEL_15;
  v7 = *(_QWORD *)(a2 + 48);
  if ( !v7 )
    return -1073741811;
  if ( *(_DWORD *)v7 != 1 )
    return -1073741811;
  v8 = *(unsigned int *)(v7 + 4);
  if ( (_DWORD)v8 != 48 || *(_QWORD *)(v7 + 8) >= 2uLL || v6 )
    return -1073741811;
  Pool2 = (void *)ExAllocatePool2(64LL, v8, 1886217292LL);
  *(_QWORD *)(a1 + 1168) = Pool2;
  if ( !Pool2 )
    return -1073741801;
  memmove(Pool2, *(const void **)(a2 + 48), *(unsigned int *)(*(_QWORD *)(a2 + 48) + 4LL));
LABEL_15:
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a2 + 36) || *(_DWORD *)(a2 + 32) )
    return -1073741811;
  for ( i = *(_QWORD *)(a2 + 40); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 28) || !*(_QWORD *)(i + 16) || !*(_DWORD *)(i + 24) )
      return -1073741811;
  }
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 >= 0x40 )
    return -1073741811;
  if ( (v11 & 3) != 0 )
    return -1073741822;
  *(_DWORD *)(a1 + 40) = v11;
  result = IopLiveDumpValidateDumpFileHandle(*(void **)(a2 + 8));
  if ( result < 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 8);
    result = IopLiveDumpValidateCancelObject(*(_QWORD *)(a2 + 16));
    if ( result >= 0 )
      v2 = v12;
    *(_QWORD *)(a1 + 72) = v2;
  }
  return result;
}
