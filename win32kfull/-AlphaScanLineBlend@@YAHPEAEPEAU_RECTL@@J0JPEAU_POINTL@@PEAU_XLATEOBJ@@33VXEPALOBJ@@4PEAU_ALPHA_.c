/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1C00B4EC0
 * Callers:
 *     EngAlphaBlend @ 0x1C00B4820 (EngAlphaBlend.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v14; // r11d
  unsigned int v15; // r12d
  int v16; // r9d
  int v17; // esi
  char *v18; // r14
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // r9d
  __int64 v22; // r8
  char *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  char *v26; // rdi
  char *v27; // rcx
  char *v29; // rdi
  char *v30; // rsi
  int v32; // eax
  __int64 v33; // r8
  int v34; // eax
  int v35; // [rsp+40h] [rbp-88h]
  unsigned int v36; // [rsp+48h] [rbp-80h]
  char *v37; // [rsp+58h] [rbp-70h]
  char *i; // [rsp+60h] [rbp-68h]
  char *v39; // [rsp+68h] [rbp-60h]
  _QWORD *v40; // [rsp+70h] [rbp-58h]
  _QWORD *v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+90h] [rbp-38h]
  int v43; // [rsp+D8h] [rbp+10h]

  v14 = *a2;
  v15 = a2[2] - *a2;
  v16 = a2[1];
  v35 = a2[3] - v16;
  v17 = 4 * v15;
  v18 = 0LL;
  v43 = 0;
  v36 = *(_DWORD *)(a12 + 4);
  v19 = v36 >> 3;
  v20 = *(_DWORD *)a12 >> 3;
  v37 = 0LL;
  v39 = 0LL;
  if ( !a9 )
    return 0LL;
  v42 = *(_QWORD *)(a9 + 56);
  if ( v17 < (int)v15 )
    return 0LL;
  v21 = a3 * v16;
  if ( v20 )
  {
    v22 = v21 + (__int64)(v14 * v20);
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v32 = v14 / 8;
    else
      v32 = v14 / 2;
    v22 = v21 + (__int64)v32;
  }
  v23 = (char *)(v22 + a1);
  v24 = a5 * a6[1];
  if ( v19 )
  {
    v25 = v24 + (__int64)(int)(*a6 * v19);
  }
  else
  {
    v33 = v24;
    if ( v36 == 1 )
      v34 = *a6 / 8;
    else
      v34 = *a6 / 2;
    v25 = v33 + v34;
  }
  v26 = (char *)(v25 + a4);
  v41 = (_QWORD *)(a12 + 16);
  if ( *(_QWORD *)(a12 + 16) )
    v43 = 4 * v15;
  v40 = (_QWORD *)(a12 + 8);
  if ( *(_QWORD *)(a12 + 8) )
  {
    v43 += v17;
    if ( v43 < v17 )
      return 0LL;
  }
  if ( v43 )
  {
    v39 = (char *)Win32AllocPoolZInit((unsigned int)v43, 1886150983LL);
    if ( !v39 )
      return 0LL;
  }
  v27 = v39;
  if ( *v40 )
  {
    v37 = v39;
    v27 = &v39[v17];
  }
  if ( *v41 )
    v18 = v27;
  for ( i = v26; v35--; i += a5 )
  {
    v29 = i;
    v30 = v23;
    if ( v37 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v40)(v37, i, 0LL, v15, a7);
      v29 = v37;
    }
    if ( v18 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v41)(v18, v23, 0LL, v15, a8);
      v30 = v18;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v30, v29, v15, *(unsigned int *)(a12 + 40));
    if ( v18 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v23,
        v18,
        v15,
        0LL,
        a9,
        a10,
        v42);
    v23 += a3;
  }
  if ( v43 )
    Win32FreePool(v39);
  return 1LL;
}
