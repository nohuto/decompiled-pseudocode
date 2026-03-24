/*
 * XREFs of AdminQueuesFreeResources @ 0x1C000B248
 * Callers:
 *     NVMeControllerRemove @ 0x1C000E434 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E85C (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0008040 (memset.c)
 */

void *__fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  void *result; // rax
  __int64 v7; // r8
  void *v8; // rcx
  void **v9; // rbx
  __int64 v10; // rdi

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v5 = *(_QWORD *)(a1 + 320);
    if ( v5 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 320) = 0LL;
    v7 = *(_QWORD *)(a1 + 328);
    if ( v7 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v7, a4);
    *(_QWORD *)(a1 + 328) = 0LL;
    *(_DWORD *)(a1 + 840) = 0;
    v8 = *(void **)(a1 + 936);
    if ( v8 )
      result = memset(v8, 0, 0x10A0uLL);
    v9 = (void **)(a1 + 1048);
    v10 = 6LL;
    do
    {
      *((_DWORD *)v9 - 24) = 0;
      if ( *v9 )
        result = memset(*v9, 0, 0x10A0uLL);
      v9 += 14;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
