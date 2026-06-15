/*
 * XREFs of sub_1801236F8 @ 0x1801236F8
 * Callers:
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     sub_18000E6E0 @ 0x18000E6E0 (sub_18000E6E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801330A8 @ 0x1801330A8 (sub_1801330A8.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1801236F8(__int64 a1, int a2, __int64 a3, _DWORD *a4)
{
  char v7; // si
  __int64 v8; // r14
  int v9; // edx
  int v10; // eax
  int v11; // r9d
  void *v12; // rbx
  unsigned __int16 *v13; // rdx
  int v14; // edi
  int v16; // [rsp+40h] [rbp-19h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+60h] [rbp+7h] BYREF
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v20; // [rsp+80h] [rbp+27h]
  unsigned __int16 v21; // [rsp+D0h] [rbp+77h] BYREF

  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v7 = 0;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a3 + 40LL))(a3, &unk_180173930, pvar) < 0 )
    return 0;
  if ( LOWORD(pvar[0]) != 4113 )
    return 0;
  v8 = v20;
  if ( !v20 || LODWORD(pvar[1]) < 0x1E )
    return 0;
  pv[1] = 0LL;
  a4[7] = 0;
  v16 = 8;
  pv[0] = 0LL;
  v18 = xmmword_18015B798;
  v9 = 0;
  if ( a2 != 3 )
    v9 = a2;
  v10 = sub_18000E6E0(a1, v9, &v18, pv);
  v12 = pv[0];
  if ( v10 < 0 )
  {
    LODWORD(v13) = 0;
  }
  else
  {
    v21 = *((_WORD *)pv[0] + 1);
    a4[6] = v21;
    v13 = &v21;
  }
  v14 = sub_1801330A8(v8, (_DWORD)v13, (unsigned int)&v16, v11, (__int64)(a4 + 7));
  a4[8] = *(unsigned __int16 *)(v8 + 16);
  PropVariantClear(pvar);
  if ( v14 >= 0 && !a4[7] )
    v7 = 1;
  CoTaskMemFree(v12);
  CoTaskMemFree(0LL);
  return v7;
}
