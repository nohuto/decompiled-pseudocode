/*
 * XREFs of ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@I_N@Z @ 0x1801DB0B8
 * Callers:
 *     ?SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z @ 0x1801E4BB0 (-SyncLock@CLegacyRenderTarget@@UEAAX_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LegacyPresentRequired@COverlayContext@@AEBA_NXZ @ 0x1800C92B0 (-LegacyPresentRequired@COverlayContext@@AEBA_NXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::SyncLock(COverlayContext *this, struct IOverlaySwapChain *a2, int a3, char a4)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int128 v21; // [rsp+40h] [rbp-79h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h]
  _BYTE v23[4]; // [rsp+60h] [rbp-59h] BYREF
  int v24; // [rsp+64h] [rbp-55h]
  __int128 v25; // [rsp+78h] [rbp-41h]
  __int128 v26; // [rsp+88h] [rbp-31h]
  __int128 v27; // [rsp+98h] [rbp-21h]
  __int128 v28; // [rsp+A8h] [rbp-11h]
  __int128 v29; // [rsp+B8h] [rbp-1h]
  __int128 v30; // [rsp+C8h] [rbp+Fh]
  __int128 v31; // [rsp+D8h] [rbp+1Fh]

  if ( *((_BYTE *)this + 11024) && *((_BYTE *)this + 11296) )
  {
    if ( a4 || COverlayContext::LegacyPresentRequired(this) )
    {
      v22 = 0LL;
      v17 = *(_QWORD *)a2;
      v21 = 0LL;
      v18 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, __int128 *, int))(v17 + 192))(
              a2,
              1LL,
              2LL,
              &v21,
              a3);
      v16 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x9ECu, 0LL);
      if ( (_QWORD)v21 )
        std::_Deallocate<16,0>((void *)v21, (v22 - v21) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      memset_0(v23, 0, 0x88uLL);
      v6 = *((_OWORD *)this + 682);
      v7 = *(_QWORD *)a2;
      v8 = *((_OWORD *)this + 683);
      v24 = 1;
      v25 = v6;
      v9 = *((_OWORD *)this + 684);
      v26 = v8;
      v10 = *((_OWORD *)this + 685);
      v27 = v9;
      v11 = *((_OWORD *)this + 686);
      v28 = v10;
      v12 = *((_OWORD *)this + 687);
      v29 = v11;
      v13 = *((_OWORD *)this + 688);
      v30 = v12;
      v31 = v13;
      v14 = (*(__int64 (__fastcall **)(struct IOverlaySwapChain *, __int64, __int64, _QWORD, _QWORD, _BYTE *, int))(v7 + 208))(
              a2,
              1LL,
              2LL,
              *((unsigned int *)this + 3),
              0LL,
              v23,
              1);
      v16 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x9E3u, 0LL);
    }
  }
  else
  {
    v16 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304309, 0x9F3u, 0LL);
  }
  return v16;
}
