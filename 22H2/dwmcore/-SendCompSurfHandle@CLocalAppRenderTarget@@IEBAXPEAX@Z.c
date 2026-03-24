/*
 * XREFs of ?SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z @ 0x18018AC2C
 * Callers:
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018A58C (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CLocalAppRenderTarget::SendCompSurfHandle(CLocalAppRenderTarget *this, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned int v5; // ecx
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 6);
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1080LL) + 48LL);
  v4 = *((unsigned int *)this + 14);
  if ( v2 )
    v5 = *(_DWORD *)(v2 + 68);
  else
    v5 = 0;
  v6[0] = v5;
  v6[1] = v4;
  CoreUICallSend(v3, v6, 2LL, 9LL, 0, &unk_1802CE761);
}
