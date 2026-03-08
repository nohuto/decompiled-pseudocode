/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C008984C
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C00896C4 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C007D630 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  int v2; // eax
  int v4; // esi
  char v6; // cl
  int v7; // eax
  unsigned int v8; // edx
  unsigned __int8 *v9; // rdi
  __int64 v10; // rax
  BOOL v11; // ecx
  unsigned int v12; // eax
  BOOL v13; // edx
  int v14; // r8d
  int v15; // eax
  float *v16; // rax
  __int64 v17; // r8
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  int v23; // r8d
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // xmm0_8
  __int64 v31; // rax
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  __int128 v34; // xmm5
  __int64 v35; // xmm0_8

  v2 = *((_DWORD *)a2 + 30);
  v4 = 0;
  v6 = 0;
  if ( *((_DWORD *)this + 21) != v2 )
  {
    *((_DWORD *)this + 21) = v2;
    v6 = 1;
  }
  v7 = *((_DWORD *)a2 + 31);
  if ( *((_DWORD *)this + 22) == v7 )
  {
    v8 = *((_DWORD *)this + 46);
  }
  else
  {
    v6 = 1;
    v8 = *((_DWORD *)this + 46) & 0xFFFFDFFF | (v7 != 0 ? 0x2000 : 0);
    *((_DWORD *)this + 46) = v8;
    *((_DWORD *)this + 22) = *((_DWORD *)a2 + 31);
  }
  v9 = (unsigned __int8 *)a2 + 136;
  v10 = *((int *)a2 + 47);
  if ( *((_QWORD *)this + 7) != v10 )
  {
    *((_QWORD *)this + 7) = v10;
    v11 = v10 != 0;
    v12 = v8 & 0xFFFFFFFE;
    v13 = v11;
    v6 = 1;
    v8 = v12 | v13;
    *((_DWORD *)this + 46) = v8;
  }
  v14 = *((_BYTE *)a2 + 137) & 1;
  if ( ((v8 >> 1) & 1) != v14 )
  {
    v6 = 1;
    *((_DWORD *)this + 46) = v8 & 0xFFFFFFFD | (2 * v14);
  }
  v15 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 24) != v15 )
  {
    *((_DWORD *)this + 24) = v15;
    v6 = 1;
  }
  if ( *((_DWORD *)this + 25) != *((_DWORD *)a2 + 35)
    || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 36)
    || *((_DWORD *)this + 27) != *((_DWORD *)a2 + 37)
    || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 38) )
  {
    v6 = 1;
    *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a2 + 140);
  }
  v16 = (float *)((char *)this + 120);
  v17 = 6LL;
  do
  {
    v18 = *(float *)((char *)v16 + v9 - (unsigned __int8 *)this - 96);
    if ( *v16 != v18 )
    {
      *v16 = v18;
      v6 = 1;
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  v19 = *((float *)a2 + 49);
  if ( *((float *)this + 36) != v19 )
  {
    *((float *)this + 36) = v19;
    v6 = 1;
  }
  v20 = *((float *)a2 + 50);
  if ( *((float *)this + 37) != v20 )
  {
    *((float *)this + 37) = v20;
    v6 = 1;
  }
  v21 = *((float *)a2 + 51);
  if ( *((float *)this + 38) != v21 )
  {
    *((float *)this + 38) = v21;
    v6 = 1;
  }
  v22 = *((float *)a2 + 52);
  if ( *((float *)this + 39) != v22 )
  {
    *((float *)this + 39) = v22;
    v6 = 1;
  }
  if ( *((float *)a2 + 49) != 0.0
    || *((float *)a2 + 50) != 0.0
    || *((float *)a2 + 51) != 0.0
    || (v23 = 0, *((float *)a2 + 52) != 0.0) )
  {
    v23 = 1;
  }
  v24 = *((_DWORD *)this + 46);
  if ( ((v24 >> 15) & 1) != v23 )
  {
    v24 = (v23 << 15) | v24 & 0xFFFF7FFF;
    v6 = 1;
    *((_DWORD *)this + 46) = v24;
  }
  if ( !*((_DWORD *)this + 68) || (v25 = 3, *(_DWORD *)(*((_QWORD *)this + 32) + 16LL) != 4) )
    v25 = *((_DWORD *)a2 + 39);
  if ( *((_DWORD *)this + 12) != v25 )
  {
    *((_DWORD *)this + 12) = v25;
    v6 = 1;
  }
  v26 = v24 ^ (v24 ^ (*v9 << 10)) & 0x400;
  *((_DWORD *)this + 46) = v26;
  if ( (v26 & 0x400) != 0 )
  {
    if ( *((_DWORD *)a2 + 48) && (int)CFlipExBuffer::EnsureHDR10MetaData(this) >= 0 )
    {
      v27 = *((_DWORD *)a2 + 48);
      if ( v27 == 1 )
      {
        v28 = *((_QWORD *)this + 46);
        v29 = *((_DWORD *)a2 + 60);
        v30 = *((_QWORD *)a2 + 29);
        *(_OWORD *)v28 = *(_OWORD *)((char *)a2 + 216);
        *(_QWORD *)(v28 + 16) = v30;
        *(_DWORD *)(v28 + 24) = v29;
      }
      else if ( v27 == 2 )
      {
        v31 = *((_QWORD *)this + 46);
        v32 = *(_OWORD *)((char *)a2 + 232);
        v33 = *(_OWORD *)((char *)a2 + 248);
        v34 = *(_OWORD *)((char *)a2 + 264);
        v35 = *((_QWORD *)a2 + 35);
        *(_OWORD *)v31 = *(_OWORD *)((char *)a2 + 216);
        *(_OWORD *)(v31 + 16) = v32;
        *(_OWORD *)(v31 + 32) = v33;
        *(_OWORD *)(v31 + 48) = v34;
        *(_QWORD *)(v31 + 64) = v35;
      }
      v4 = *((_DWORD *)a2 + 48);
    }
    *((_DWORD *)this + 94) = v4;
    return 1;
  }
  return v6;
}
