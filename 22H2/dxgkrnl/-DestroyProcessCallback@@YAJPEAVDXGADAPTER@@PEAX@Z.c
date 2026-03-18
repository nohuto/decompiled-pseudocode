/*
 * XREFs of ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0343840
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0368B70 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DestroyProcessCallback(ADAPTER_RENDER **a1, struct DXGPROCESS *a2)
{
  ADAPTER_RENDER *v4; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+30h] [rbp-18h]

  v7 = (struct DXGADAPTER *)a1;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v4 = a1[366];
    if ( v4 )
      ADAPTER_RENDER::NotifyDxgProcessDestroyed(v4, a2);
  }
  if ( v8 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
  return 0LL;
}
