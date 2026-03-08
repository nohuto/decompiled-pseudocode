/*
 * XREFs of ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02ED170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C02DE1EC (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

void __fastcall vSrcCopyS32D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // r13
  unsigned int v2; // ebp
  struct BLTINFO *v3; // r14
  struct _XLATEOBJ *v4; // rsi
  _BYTE *v5; // rbx
  int v6; // eax
  unsigned int *v7; // rdi
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // ecx
  _BYTE *v12; // r12
  unsigned int *v13; // r15
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
  unsigned int *v27; // [rsp+30h] [rbp-68h]
  _BYTE *v28; // [rsp+38h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+A8h] [rbp+10h]
  int v32; // [rsp+B0h] [rbp+18h]

  v1 = XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = *(struct _XLATEOBJ **)a1;
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v6 = *((_DWORD *)a1 + 8);
  v7 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v8 = v2;
  v31 = v6;
  v27 = v7;
  v28 = v5;
  v26 = v4;
  if ( (-(int)v5 & 3u) <= v2 )
    v8 = -(int)v5 & 3;
  v32 = v8;
  v9 = v2 - v8;
  v10 = (v2 - v8) & 3;
  v24 = v9 >> 2;
  v25 = v10;
  v11 = v4[1].pulXlate[6];
  if ( (v11 & 4) != 0 )
  {
    v1 = XLATEOBJ_RGB32ToPalSurf;
  }
  else if ( (v11 & 8) != 0 )
  {
    v1 = XLATEOBJ_BGR32ToPalSurf;
  }
  Xlate555 = XLATEOBJ_pGetXlate555(v4);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v12 = v5;
      v13 = v7;
      if ( v32 )
      {
        v14 = v32;
        do
        {
          v15 = *v13++;
          *v12++ = v1(v4, Xlate555, v15);
          --v14;
        }
        while ( v14 );
        v5 = v28;
        v7 = v27;
      }
      if ( v24 )
      {
        v16 = v24;
        do
        {
          v17 = v1(v4, Xlate555, v13[3]);
          v18 = v1(v26, Xlate555, v13[2]);
          v19 = v1(v26, Xlate555, v13[1]);
          v20 = v1(v26, Xlate555, *v13);
          v21 = v17;
          v4 = v26;
          v13 += 4;
          *(_DWORD *)v12 = ((v19 | ((v18 | (v21 << 8)) << 8)) << 8) | v20;
          v12 += 4;
          --v16;
        }
        while ( v16 );
        v3 = a1;
        v10 = v25;
        v5 = v28;
        v7 = v27;
      }
      if ( v10 )
      {
        v22 = v10;
        do
        {
          v23 = *v13++;
          *v12++ = v1(v4, Xlate555, v23);
          --v22;
        }
        while ( v22 );
        v5 = v28;
        v7 = v27;
      }
      if ( !--v31 )
        break;
      v7 = (unsigned int *)((char *)v7 + *((int *)v3 + 10));
      v5 += *((int *)v3 + 11);
      v27 = v7;
      v28 = v5;
    }
  }
}
