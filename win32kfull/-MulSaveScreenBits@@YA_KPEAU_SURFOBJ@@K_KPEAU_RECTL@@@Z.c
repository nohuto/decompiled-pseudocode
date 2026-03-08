/*
 * XREFs of ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02B2A30
 * Callers:
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02B2A30 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02B2A30 (-MulSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C02B53C0 (-ulSimulateSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 */

unsigned __int64 __fastcall MulSaveScreenBits(struct _SURFOBJ *a1, unsigned int a2, _QWORD *a3, struct _RECTL *a4)
{
  DHPDEV dhpdev; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 (*v6)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *); // r12
  __int64 *v7; // rdi
  unsigned int v8; // r13d
  unsigned int v9; // r14d
  PVOID v10; // rax
  _DWORD *v11; // r13
  __int64 v12; // rbx
  __int64 v14; // rbx
  _DWORD *v15; // r12
  unsigned __int64 (*v16)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *); // rax
  __int64 v17; // rax
  struct _RECTL *v18; // [rsp+30h] [rbp-48h]
  int v20; // [rsp+38h] [rbp-40h]
  _QWORD *v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h]
  struct _RECTL v23; // [rsp+50h] [rbp-28h] BYREF

  dhpdev = a1->dhpdev;
  v5 = 0LL;
  v18 = a4;
  v23 = 0LL;
  v6 = 0LL;
  v21 = a3;
  v7 = *(__int64 **)dhpdev;
  v8 = a2;
  v9 = *((_DWORD *)dhpdev + 4);
  if ( a2 )
  {
    v5 = 1LL;
    do
    {
      v22 = a3[2 * *((unsigned int *)v7 + 4) + 1];
      v20 = a3[2 * *((unsigned int *)v7 + 4)];
      if ( v22 )
      {
        v14 = v7[6];
        v15 = (_DWORD *)v7 + 7;
        if ( bIntersect(a4, (const struct _RECTL *)((char *)v7 + 28), &v23) )
        {
          v23.left -= *v15;
          v23.right -= *v15;
          v23.top -= *((_DWORD *)v7 + 8);
          v23.bottom -= *((_DWORD *)v7 + 8);
        }
        else
        {
          v23 = stru_1C032A890;
        }
        if ( v20 != 2
          || (v16 = *(unsigned __int64 (**)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *))(v14 + 2984)) == 0LL )
        {
          v16 = ulSimulateSaveScreenBits;
        }
        v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, struct _RECTL *))v16)(v7[8], v8, v22, &v23);
        a3 = v21;
        if ( v17 || v8 != 1 )
        {
          a4 = v18;
        }
        else
        {
          a4 = (struct _RECTL *)&stru_1C032A890;
          v5 = 0LL;
          v18 = (struct _RECTL *)&stru_1C032A890;
          v8 = 2;
        }
      }
      v7 = (__int64 *)*v7;
      --v9;
    }
    while ( v9 );
    EngFreeMem(a3);
    return v5;
  }
  if ( v9 <= 0xFFFFFFF )
  {
    v10 = EngAllocMem(1u, 16 * v9, 0x736D5647u);
    a4 = v18;
    v5 = (unsigned __int64)v10;
  }
  if ( !v5 )
    return v5;
  while ( 1 )
  {
    v11 = (_DWORD *)v7 + 7;
    v12 = 0LL;
    if ( bIntersect(a4, (const struct _RECTL *)((char *)v7 + 28), &v23) )
    {
      v23.left -= *v11;
      v6 = ulSimulateSaveScreenBits;
      v23.right -= *v11;
      v23.top -= *((_DWORD *)v7 + 8);
      v23.bottom -= *((_DWORD *)v7 + 8);
      if ( *(_QWORD *)(v7[6] + 2984) )
        v6 = *(unsigned __int64 (**)(struct _SURFOBJ *, unsigned int, unsigned __int64, struct _RECTL *))(v7[6] + 2984);
      v12 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, struct _RECTL *))v6)(v7[8], 0LL, 0LL, &v23);
      if ( !v12 )
      {
        if ( v6 == ulSimulateSaveScreenBits )
          break;
        v6 = ulSimulateSaveScreenBits;
        v12 = ulSimulateSaveScreenBits((struct _SURFOBJ *)v7[8], 0, 0LL, &v23);
        if ( !v12 )
          break;
      }
    }
    *(_QWORD *)(v5 + 16LL * *((unsigned int *)v7 + 4) + 8) = v12;
    if ( v12 )
      *(_DWORD *)(v5 + 16LL * *((unsigned int *)v7 + 4)) = (v6 != ulSimulateSaveScreenBits) + 1;
    v7 = (__int64 *)*v7;
    if ( !--v9 )
      return v5;
    a4 = v18;
  }
  MulSaveScreenBits(a1, 2u, v5, (struct _RECTL *)&stru_1C032A890);
  return 0LL;
}
