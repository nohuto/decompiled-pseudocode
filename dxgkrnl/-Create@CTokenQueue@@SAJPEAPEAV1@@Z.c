/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C0077758
 * Callers:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0076CB0 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  __int64 v2; // rax

  v2 = operator new[](0x20uLL, 0x71744D54u, 256LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_DWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
  }
  *a1 = (struct CTokenQueue *)v2;
  return v2 == 0 ? 0xC0000017 : 0;
}
