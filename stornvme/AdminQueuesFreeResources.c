/*
 * XREFs of AdminQueuesFreeResources @ 0x1C000941C
 * Callers:
 *     NVMeControllerRemove @ 0x1C000E18C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000EBA8 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void **v9; // rbx
  __int64 v10; // rdi
  void *v11; // rcx

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v5 = *(_QWORD *)(a1 + 368);
    if ( v5 )
      result = StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 368) = 0LL;
    v7 = *(_QWORD *)(a1 + 376);
    if ( v7 )
      result = StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 376) = 0LL;
    v8 = *(void **)(a1 + 1040);
    *(_BYTE *)(a1 + 944) = 0;
    if ( v8 )
      result = (__int64)memset(v8, 0, 0x10A0uLL);
    v9 = (void **)(a1 + 1168);
    v10 = 6LL;
    do
    {
      v11 = *v9;
      *((_BYTE *)v9 - 96) = 0;
      if ( v11 )
        result = (__int64)memset(v11, 0, 0x10A0uLL);
      v9 += 16;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
