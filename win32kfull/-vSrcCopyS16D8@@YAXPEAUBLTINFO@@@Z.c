void __fastcall vSrcCopyS16D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, __int16); // r13
  unsigned int v2; // ebp
  struct BLTINFO *v3; // r14
  _BYTE *v4; // rbx
  struct _XLATEOBJ *v5; // rsi
  unsigned __int16 *v6; // rdi
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // edx
  _BYTE *v12; // r12
  unsigned __int16 *v13; // r15
  int v14; // ebx
  __int64 v15; // r8
  unsigned int v16; // ebp
  int v17; // esi
  int v18; // edi
  int v19; // ebx
  unsigned __int8 v20; // al
  int v21; // edx
  int v22; // edi
  __int64 v23; // r8
  unsigned int v24; // [rsp+20h] [rbp-78h]
  int v25; // [rsp+24h] [rbp-74h]
  struct _XLATEOBJ *v26; // [rsp+28h] [rbp-70h]
  unsigned __int16 *v27; // [rsp+30h] [rbp-68h]
  _BYTE *v28; // [rsp+38h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+A8h] [rbp+10h]
  int v32; // [rsp+B0h] [rbp+18h]

  v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, __int16))XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v5 = *(struct _XLATEOBJ **)a1;
  v31 = *((_DWORD *)a1 + 8);
  v26 = *(struct _XLATEOBJ **)a1;
  v6 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v27 = v6;
  v28 = v4;
  v7 = v2;
  if ( (-(int)v4 & 3u) <= v2 )
    v7 = -(int)v4 & 3;
  v8 = v2 - v7;
  v32 = v7;
  v9 = v8 >> 2;
  v10 = v8 & 3;
  v24 = v9;
  v25 = v10;
  Xlate555 = XLATEOBJ_pGetXlate555(v5);
  if ( Xlate555 )
  {
    v11 = v5[1].pulXlate[6];
    if ( (v11 & 0x200000) != 0 )
    {
      v1 = XLATEOBJ_RGB16_555ToPalSurf;
    }
    else if ( (v11 & 0x400000) != 0 )
    {
      v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, __int16))XLATEOBJ_RGB16_565ToPalSurf;
    }
    while ( 1 )
    {
      v12 = v4;
      v13 = v6;
      if ( v32 )
      {
        v14 = v32;
        do
        {
          v15 = *v13++;
          *v12++ = v1(v5, Xlate555, v15);
          --v14;
        }
        while ( v14 );
        v4 = v28;
        v6 = v27;
      }
      if ( v24 )
      {
        v16 = v24;
        do
        {
          v17 = v1(v5, Xlate555, v13[3]);
          v18 = v1(v26, Xlate555, v13[2]);
          v19 = v1(v26, Xlate555, v13[1]);
          v20 = v1(v26, Xlate555, *v13);
          v21 = v17;
          v5 = v26;
          v13 += 4;
          *(_DWORD *)v12 = ((v19 | ((v18 | (v21 << 8)) << 8)) << 8) | v20;
          v12 += 4;
          --v16;
        }
        while ( v16 );
        v3 = a1;
        v10 = v25;
        v4 = v28;
        v6 = v27;
      }
      if ( v10 )
      {
        v22 = v10;
        do
        {
          v23 = *v13++;
          *v12++ = v1(v5, Xlate555, v23);
          --v22;
        }
        while ( v22 );
        v4 = v28;
        v6 = v27;
      }
      if ( !--v31 )
        break;
      v6 = (unsigned __int16 *)((char *)v6 + *((int *)v3 + 10));
      v4 += *((int *)v3 + 11);
      v27 = v6;
      v28 = v4;
    }
  }
}
