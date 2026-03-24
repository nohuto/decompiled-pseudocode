/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00AD100
 * Callers:
 *     EngAlphaBlend @ 0x1C00ACA60 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v15; // ebx
  unsigned int v16; // r12d
  int v17; // r9d
  int v18; // r13d
  char *v19; // r14
  unsigned int v20; // r8d
  int v21; // ecx
  int v22; // r9d
  int v23; // ecx
  char *v24; // rbx
  int v25; // eax
  int v26; // eax
  char *v27; // rdi
  char *v28; // rcx
  char *v30; // rdi
  char *v31; // rsi
  int v33; // [rsp+40h] [rbp-78h]
  unsigned int v34; // [rsp+48h] [rbp-70h]
  char *v35; // [rsp+58h] [rbp-60h]
  char *i; // [rsp+60h] [rbp-58h]
  char *v37; // [rsp+68h] [rbp-50h]
  __int64 v38; // [rsp+80h] [rbp-38h]
  int Size; // [rsp+C8h] [rbp+10h]

  v15 = *a2;
  v16 = a2[2] - *a2;
  v17 = a2[1];
  v33 = a2[3] - v17;
  v18 = 4 * v16;
  v19 = 0LL;
  Size = 0;
  v34 = *(_DWORD *)(a12 + 4);
  v20 = v34 >> 3;
  v21 = *(_DWORD *)a12 >> 3;
  v35 = 0LL;
  v37 = 0LL;
  if ( !a9 )
    return 0LL;
  v38 = *(_QWORD *)(a9 + 56);
  if ( v18 < (int)v16 )
    return 0LL;
  v22 = a3 * v17;
  if ( v21 )
  {
    v23 = v15 * v21;
  }
  else if ( *(_DWORD *)a12 == 1 )
  {
    v23 = v15 / 8;
  }
  else
  {
    v23 = v15 / 2;
  }
  v24 = (char *)(a1 + v22 + (__int64)v23);
  v25 = *a6;
  if ( v20 )
  {
    v26 = v20 * v25;
  }
  else if ( v34 == 1 )
  {
    v26 = v25 / 8;
  }
  else
  {
    v26 = v25 / 2;
  }
  v27 = (char *)(a5 * a6[1] + (__int64)v26 + a4);
  if ( *(_QWORD *)(a12 + 16) )
    Size = 4 * v16;
  if ( *(_QWORD *)(a12 + 8) )
  {
    Size += v18;
    if ( Size < v18 )
      return 0LL;
  }
  if ( Size )
  {
    v37 = (char *)PALLOCMEM2((unsigned int)Size, 1886150983LL, 1);
    if ( !v37 )
      return 0LL;
  }
  v28 = v37;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v35 = v37;
    v28 = &v37[v18];
  }
  if ( *(_QWORD *)(a12 + 16) )
    v19 = v28;
  for ( i = v27; v33--; i += a5 )
  {
    v30 = i;
    v31 = v24;
    if ( v35 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 8))(v35, i, 0LL, v16, a7);
      v30 = v35;
    }
    if ( v19 )
    {
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 16))(v19, v24, 0LL, v16, a8);
      v31 = v19;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v31, v30, v16, *(unsigned int *)(a12 + 40));
    if ( v19 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v24,
        v19,
        v16,
        0LL,
        a9,
        a10,
        v38);
    v24 += a3;
  }
  if ( Size )
    Win32FreePool(v37);
  return 1LL;
}
