/*
 * XREFs of ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00C05C8
 * Callers:
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C008169C (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00C0524 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::Runtime::AllocUninitialized(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(258LL, a1, a2);
  *a3 = Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
