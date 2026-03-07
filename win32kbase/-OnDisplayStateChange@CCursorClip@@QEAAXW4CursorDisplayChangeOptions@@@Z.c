void __fastcall CCursorClip::OnDisplayStateChange(__int64 a1, char a2)
{
  __int64 v2; // rbp
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  struct tagRECT v14; // xmm0
  char v15; // si
  _DWORD *v16; // r15
  char *v17; // rax
  _QWORD **v18; // rdi
  _QWORD *i; // rcx
  _DWORD *v20; // r14
  int v21; // eax
  _DWORD *v22; // rsi
  int v23; // edi
  _DWORD *v24; // rsi
  int v25; // edi
  struct tagRECT v26; // [rsp+20h] [rbp-2F8h] BYREF
  _OWORD v27[45]; // [rsp+30h] [rbp-2E8h] BYREF

  v2 = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  CPushLock::AcquireLockExclusive((CPushLock *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 32LL));
  if ( (a2 & 1) != 0 )
  {
    v15 = 0;
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v26);
    v16 = 0LL;
    v17 = (char *)*((_QWORD *)gpInputConfig + 3);
    if ( !v17 )
      v17 = (char *)gpInputConfig + 32;
    v18 = (_QWORD **)(v17 + 1456);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    for ( i = *v18; ; i = (_QWORD *)*i )
    {
      v20 = 0LL;
      if ( i != v18 )
        v20 = i + 2;
      if ( !v20 )
        break;
      v21 = v20[4];
      if ( (v21 & 1) != 0 )
        v16 = v20;
      if ( (*(_BYTE *)(v2 + 64) & (unsigned __int8)v21 & 2) != 0
        && v20[6] == *(_DWORD *)(v2 + 72)
        && v20[7] == *(_DWORD *)(v2 + 76)
        && v20[8] == *(_DWORD *)(v2 + 80) )
      {
        v22 = gpsi;
        v23 = *v20;
        v22[1240] = v23
                  + EngMulDiv(
                      *((_DWORD *)gpsi + 1240) - *(_DWORD *)(v2 + 48),
                      v20[2] - *v20,
                      *(_DWORD *)(v2 + 56) - *(_DWORD *)(v2 + 48));
        v24 = gpsi;
        v25 = v20[1];
        v24[1241] = v25
                  + EngMulDiv(
                      *((_DWORD *)gpsi + 1241) - *(_DWORD *)(v2 + 52),
                      v20[3] - v25,
                      *(_DWORD *)(v2 + 60) - *(_DWORD *)(v2 + 52));
        v15 = 1;
        break;
      }
    }
    ExReleaseResourceLite(CInputConfig::slock);
    KeLeaveCriticalRegion();
    if ( !v15 )
    {
      if ( v16 )
      {
        *((_DWORD *)gpsi + 1240) = *v16 + (v16[2] - *v16) / 2;
        *((_DWORD *)gpsi + 1241) = v16[1] + (v16[3] - v16[1]) / 2;
      }
      else
      {
        *((_QWORD *)gpsi + 620) = 0LL;
      }
    }
    ExReleaseResourceLite(**(PERESOURCE **)&v26.right);
    KeLeaveCriticalRegion();
  }
  memset(v27, 0, 0xC8uLL);
  v4 = v27[1];
  *(_OWORD *)(v2 + 48) = v27[0];
  v5 = v27[2];
  *(_OWORD *)(v2 + 64) = v4;
  v6 = v27[3];
  *(_OWORD *)(v2 + 80) = v5;
  v7 = v27[4];
  *(_OWORD *)(v2 + 96) = v6;
  v8 = v27[5];
  *(_OWORD *)(v2 + 112) = v7;
  v9 = v27[6];
  *(_OWORD *)(v2 + 128) = v8;
  *(_OWORD *)(v2 + 144) = v9;
  *(_OWORD *)(v2 + 160) = v27[7];
  v10 = v27[9];
  *(_OWORD *)(v2 + 176) = v27[8];
  v11 = v27[10];
  *(_OWORD *)(v2 + 192) = v10;
  v12 = v27[11];
  v13 = *(_QWORD *)&v27[12];
  *(_OWORD *)(v2 + 208) = v11;
  *(_OWORD *)(v2 + 224) = v12;
  *(_QWORD *)(v2 + 240) = v13;
  v14 = *(struct tagRECT *)InputConfig::Mouse::GetUnionRegion(v27);
  *(struct tagRECT *)v2 = v14;
  v26 = v14;
  CCursorClip::UpdateClipRect((CCursorClip *)v2, &v26);
  *(_BYTE *)(v2 + 276) = **(_DWORD **)gpDispInfo > 1u;
  CCursorClip::DeadzoneJumping::RefreshRegions((CCursorClip::DeadzoneJumping *)(v2 + 280));
  CPushLock::ReleaseLock((CPushLock *)(v2 + 32));
}
