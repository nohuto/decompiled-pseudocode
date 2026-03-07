__int64 __fastcall KseSetCompletionHook(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 NonPaged; // rax
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 result; // rax

  NonPaged = KsepPoolAllocateNonPaged(0x30uLL);
  v9 = NonPaged;
  if ( !NonPaged )
    return 3221225626LL;
  v10 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)NonPaged = a1;
  *(_QWORD *)(NonPaged + 8) = a3;
  *(_QWORD *)(NonPaged + 16) = a4;
  *(_QWORD *)(NonPaged + 24) = *(_QWORD *)(v10 + 56);
  *(_QWORD *)(NonPaged + 32) = *(_QWORD *)(v10 + 64);
  *(_DWORD *)(NonPaged + 40) = *(unsigned __int8 *)(v10 + 3);
  *(_QWORD *)(v10 + 56) = &KsepCompletionSafeWrapper;
  result = 0LL;
  *(_QWORD *)(v10 + 64) = v9;
  *(_BYTE *)(v10 + 3) = -32;
  return result;
}
