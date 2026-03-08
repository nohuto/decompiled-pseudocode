/*
 * XREFs of ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C0341944
 * Callers:
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0376E60 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void __fastcall DXGPROCESSVM::SetVmProcessName(DXGPROCESSVM *this, unsigned __int16 *a2)
{
  __int64 v3; // rbx
  int v5; // ebp
  unsigned __int64 v6; // rax
  void *v7; // rax
  size_t v8; // rbx

  a2[260] = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( !*((_QWORD *)this + 80) )
  {
    v5 = v3 + 1;
    v6 = 2LL * (unsigned int)(v3 + 1);
    if ( !is_mul_ok((unsigned int)(v3 + 1), 2uLL) )
      v6 = -1LL;
    v7 = (void *)operator new[](v6, 0x4B677844u, 256LL);
    *((_QWORD *)this + 80) = v7;
    if ( v7 )
    {
      v8 = 2LL * (unsigned int)v3;
      memmove(v7, a2, v8);
      *(_WORD *)(v8 + *((_QWORD *)this + 80)) = 0;
      *((_DWORD *)this + 162) = v5;
    }
  }
}
