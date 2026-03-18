/*
 * XREFs of ResetWindowTransform @ 0x1C00BB224
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall ResetWindowTransform(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 216);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
}
