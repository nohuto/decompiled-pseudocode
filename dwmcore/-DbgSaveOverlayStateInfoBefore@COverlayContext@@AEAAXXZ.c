void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // r8d
  _QWORD *v3; // rsi
  __int64 v4; // rax
  unsigned int i; // ebp
  __int64 v6; // r9
  __int64 v7; // xmm1_8
  __int64 v8; // rbx
  __int64 v9; // r8
  _OWORD *v10; // rdx
  __int128 v11; // xmm1
  __int64 v12; // rcx

  v2 = (*((_DWORD *)this + 4490) + 1) % 6u;
  *((_DWORD *)this + 4490) = v2;
  v3 = (_QWORD *)((char *)this + 1104 * (int)v2 + 11336);
  memset_0(v3, 0, 0x450uLL);
  v4 = 0LL;
  if ( g_pComposition )
    v4 = *((_QWORD *)g_pComposition + 62);
  *v3 = v4;
  for ( i = 0; ; ++i )
  {
    v6 = *((_QWORD *)this + 913);
    if ( i >= -1227133513 * (unsigned int)((*((_QWORD *)this + 914) - v6) >> 5) || i >= 2 )
      break;
    v8 = 60LL * i;
    v9 = 224LL * i;
    v10 = &v3[v8 + 1];
    *v10 = *(_OWORD *)(v9 + v6);
    v10[1] = *(_OWORD *)(v9 + v6 + 16);
    v10[2] = *(_OWORD *)(v9 + v6 + 32);
    v10[3] = *(_OWORD *)(v9 + v6 + 48);
    v10[4] = *(_OWORD *)(v9 + v6 + 64);
    v10[5] = *(_OWORD *)(v9 + v6 + 80);
    v10[6] = *(_OWORD *)(v9 + v6 + 96);
    v10[7] = *(_OWORD *)(v9 + v6 + 112);
    v10[8] = *(_OWORD *)(v9 + v6 + 128);
    v10[9] = *(_OWORD *)(v9 + v6 + 144);
    v10[10] = *(_OWORD *)(v9 + v6 + 160);
    v10[11] = *(_OWORD *)(v9 + v6 + 176);
    v10[12] = *(_OWORD *)(v9 + v6 + 192);
    v11 = *(_OWORD *)(v9 + v6 + 208);
    v3[v8 + 57] = v10;
    v10[13] = v11;
    v12 = *(_QWORD *)(*((_QWORD *)this + 913) + v9 + 16);
    LODWORD(v3[v8 + 59]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 336LL))(v12);
    ++*((_DWORD *)v3 + 242);
  }
  if ( *((_BYTE *)this + 11024) )
  {
    *((_OWORD *)v3 + 61) = *((_OWORD *)this + 682);
    *((_OWORD *)v3 + 62) = *((_OWORD *)this + 683);
    *((_OWORD *)v3 + 63) = *((_OWORD *)this + 684);
    *((_OWORD *)v3 + 64) = *((_OWORD *)this + 685);
    *((_OWORD *)v3 + 65) = *((_OWORD *)this + 686);
    *((_OWORD *)v3 + 66) = *((_OWORD *)this + 687);
    *((_OWORD *)v3 + 67) = *((_OWORD *)this + 688);
    v7 = *((_QWORD *)this + 1378);
    ++*((_DWORD *)v3 + 274);
    v3[136] = v7;
  }
}
