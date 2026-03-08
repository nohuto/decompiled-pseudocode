/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00F1E3C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E8C04 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0011974 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 **v10; // r12
  __int64 *i; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v17; // rax
  _BYTE v19[8]; // [rsp+60h] [rbp-48h] BYREF
  DXGPUSHLOCK *v20; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+70h] [rbp-38h]
  char v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v10 = (__int64 **)((char *)a2 + 24 * v9 + 96);
  v21 = 2;
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    v12 = i[11];
    if ( a7 <= v12 )
      break;
    v13 = i[12];
    if ( a6 < v13 )
    {
      if ( a6 > v12 )
        v12 = a6;
      if ( a7 < v13 )
        v13 = a7;
      v14 = operator new(136LL, 0x39346956u, 256LL);
      if ( !v14
        || (v15 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                    v14,
                    (__int64)a3,
                    v12 + a8 - a6,
                    v13 + a8 - a6,
                    v23,
                    i[6],
                    v12 + i[8] - i[11],
                    (int)(*((_DWORD *)i + 14) << 28) >> 28,
                    i[10],
                    i[9],
                    i[14],
                    i[13])) == 0 )
      {
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
        return 3221225495LL;
      }
      Blink = a5->Blink;
      v17 = (struct _LIST_ENTRY *)(v15 + 8);
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v17->Flink = a5;
      v17->Blink = Blink;
      Blink->Flink = v17;
      a5->Blink = v17;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return 0LL;
}
