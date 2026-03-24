/*
 * XREFs of ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C0025AD8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0100EC0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C01309C0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C014DA60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

DXGPAIREDADAPTERSTOPRESETLOCKSHARED *__fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  DXGADAPTERSTOPRESETLOCKSHARED *v4; // rcx
  struct DXGADAPTER *v5; // rax
  char v6; // al
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  v4 = (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)((char *)this + 24);
  v5 = a2;
  if ( a3 )
    v5 = a3;
  *((_BYTE *)this + 40) = 0;
  *((_QWORD *)this + 4) = v5;
  if ( !a3 || (v6 = 0, a3 == a2) )
    v6 = 1;
  *((_BYTE *)this + 48) = v6;
  *((_BYTE *)this + 49) = 0;
  if ( !v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v4);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  result = this;
  *((_BYTE *)this + 49) = 1;
  return result;
}
