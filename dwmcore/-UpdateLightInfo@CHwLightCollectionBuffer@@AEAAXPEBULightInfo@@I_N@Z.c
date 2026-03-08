/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180017894
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1800177A0 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180006324 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(
        CHwLightCollectionBuffer *this,
        const struct LightInfo *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r10d
  int v7; // xmm0_4
  char *v8; // r9
  char v9; // r15
  char *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // r11d
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int128 v23; // [rsp+48h] [rbp-9h] BYREF
  __int128 v24; // [rsp+58h] [rbp+7h]
  __int128 v25; // [rsp+68h] [rbp+17h]
  __int128 v26; // [rsp+78h] [rbp+27h]
  int v27; // [rsp+88h] [rbp+37h]

  v4 = a3;
  if ( a3 )
    v7 = (int)FLOAT_1_0;
  else
    v7 = 0;
  *((_DWORD *)this + 69) = v7;
  v8 = (char *)a2 + 12;
  v9 = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  if ( a3 )
  {
    v10 = (char *)a2 + 12;
    v11 = a3;
    do
    {
      if ( !*((_DWORD *)v10 - 3) )
      {
        v9 = 1;
        *(__m128 *)((char *)this + 504) = _mm_add_ps(*(__m128 *)(v10 - 8), *(__m128 *)((char *)this + 504));
      }
      v10 += 240;
      --v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 4) = -1;
  v12 = 0;
  v13 = 0;
  if ( a3 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= 8 )
        break;
      if ( *((_DWORD *)v8 - 3) )
      {
        v15 = *(_OWORD *)(v8 + 92);
        v16 = *(_OWORD *)(v8 + 108);
        v27 = *((_DWORD *)v8 + 39);
        v23 = v15;
        v17 = *(_OWORD *)(v8 + 124);
        v24 = v16;
        v18 = *(_OWORD *)(v8 + 140);
        v25 = v17;
        v26 = v18;
        CMILMatrix::Transpose((CMILMatrix *)&v23);
        v19 = v24;
        v20 = (unsigned __int64)v12 << 7;
        v21 = v12++;
        v22 = 112 * v21;
        *(_OWORD *)((char *)this + v20 + 20) = v23;
        *(_OWORD *)((char *)this + v20 + 36) = v19;
        *(_OWORD *)((char *)this + v20 + 52) = v25;
        *(_OWORD *)((char *)this + v20 + 68) = v26;
        *(_OWORD *)((char *)this + v20 + 84) = *((_OWORD *)v8 + 10);
        *(_OWORD *)((char *)this + v20 + 100) = *((_OWORD *)v8 + 11);
        *(_OWORD *)((char *)this + v20 + 116) = *((_OWORD *)v8 + 12);
        *(_OWORD *)((char *)this + v20 + 132) = *((_OWORD *)v8 + 13);
        *(_OWORD *)((char *)this + v22 + 280) = *(_OWORD *)(v8 - 8);
        *(_QWORD *)((char *)this + v22 + 296) = *((_QWORD *)v8 + 3);
        *(_DWORD *)((char *)this + v22 + 304) = *((_DWORD *)v8 + 8);
        *(_DWORD *)((char *)this + v22 + 308) = *((_DWORD *)v8 + 15);
        *(_OWORD *)((char *)this + v22 + 312) = *(_OWORD *)(v8 + 8);
        *(_QWORD *)((char *)this + v22 + 328) = *(_QWORD *)(v8 + 36);
        *(_DWORD *)((char *)this + v22 + 336) = *((_DWORD *)v8 + 11);
        *(_DWORD *)((char *)this + v22 + 340) = *((_DWORD *)v8 + 16);
        *(_QWORD *)((char *)this + v22 + 344) = *((_QWORD *)v8 + 6);
        *(_DWORD *)((char *)this + v22 + 352) = *((_DWORD *)v8 + 14);
        *(_DWORD *)((char *)this + v22 + 356) = *((_DWORD *)v8 + 21);
        *(_OWORD *)((char *)this + v22 + 360) = *(_OWORD *)(v8 + 68);
        *(_DWORD *)((char *)this + v22 + 376) = *((_DWORD *)v8 + 22);
        *((_DWORD *)this + 4) = (*((_DWORD *)v8 - 3) << v14) | *((_DWORD *)this + 4) & ~(15 << v14);
        v14 += 4;
      }
      ++v13;
      v8 += 240;
    }
    while ( v13 < v4 );
  }
  memset_0((char *)this + 128 * (unsigned __int64)v12 + 20, 0, 256 - ((unsigned __int64)v12 << 7));
  memset_0((char *)this + 112 * v12 + 280, 0, 224 - 112LL * v12);
  if ( v9 || !a4 )
    *((_DWORD *)this + 4) &= ~(15 << (4 * v12));
}
