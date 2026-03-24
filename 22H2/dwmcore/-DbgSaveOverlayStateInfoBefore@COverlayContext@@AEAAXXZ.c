/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x18017B620
 * Callers:
 *     ?PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800EBD50 (-PresentMPO@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18008F604 (-GetCurrentFrameId@@YA_KXZ.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  _QWORD *v3; // rsi
  unsigned int i; // ebp
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r8
  _OWORD *v8; // rdx
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // xmm1_8

  v2 = (*((_DWORD *)this + 4520) + 1) % 6u;
  *((_DWORD *)this + 4520) = v2;
  v3 = (_QWORD *)((char *)this + 1104 * (int)v2 + 11456);
  memset_0(v3, 0, 0x450uLL);
  *v3 = GetCurrentFrameId();
  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)this + 914);
    if ( i >= (unsigned int)((*((_QWORD *)this + 915) - v5) / 224) || i >= 2 )
      break;
    v6 = 60LL * i;
    v7 = 224LL * i;
    v8 = &v3[v6 + 1];
    *v8 = *(_OWORD *)(v7 + v5);
    v8[1] = *(_OWORD *)(v7 + v5 + 16);
    v8[2] = *(_OWORD *)(v7 + v5 + 32);
    v8[3] = *(_OWORD *)(v7 + v5 + 48);
    v8[4] = *(_OWORD *)(v7 + v5 + 64);
    v8[5] = *(_OWORD *)(v7 + v5 + 80);
    v8[6] = *(_OWORD *)(v7 + v5 + 96);
    v8[7] = *(_OWORD *)(v7 + v5 + 112);
    v8[8] = *(_OWORD *)(v7 + v5 + 128);
    v8[9] = *(_OWORD *)(v7 + v5 + 144);
    v8[10] = *(_OWORD *)(v7 + v5 + 160);
    v8[11] = *(_OWORD *)(v7 + v5 + 176);
    v8[12] = *(_OWORD *)(v7 + v5 + 192);
    v9 = *(_OWORD *)(v7 + v5 + 208);
    v3[v6 + 57] = v8;
    v8[13] = v9;
    v10 = *(_QWORD *)(v7 + *((_QWORD *)this + 914) + 16);
    LODWORD(v3[v6 + 59]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10);
    ++*((_DWORD *)v3 + 242);
  }
  if ( *((_BYTE *)this + 11032) )
  {
    *((_OWORD *)v3 + 61) = *(_OWORD *)((char *)this + 10920);
    *((_OWORD *)v3 + 62) = *(_OWORD *)((char *)this + 10936);
    *((_OWORD *)v3 + 63) = *(_OWORD *)((char *)this + 10952);
    *((_OWORD *)v3 + 64) = *(_OWORD *)((char *)this + 10968);
    *((_OWORD *)v3 + 65) = *(_OWORD *)((char *)this + 10984);
    *((_OWORD *)v3 + 66) = *(_OWORD *)((char *)this + 11000);
    *((_OWORD *)v3 + 67) = *(_OWORD *)((char *)this + 11016);
    v11 = *((_QWORD *)this + 1379);
    ++*((_DWORD *)v3 + 274);
    v3[136] = v11;
  }
}
