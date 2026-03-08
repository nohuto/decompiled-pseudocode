/*
 * XREFs of ?vStripSolidVerticalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FC9D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidVerticalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r14
  unsigned int v5; // r9d
  __int64 v6; // rbp
  int v7; // r12d
  char *v8; // r13
  unsigned int v9; // r8d
  unsigned int v10; // ett
  void (__fastcall *v11)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v12; // edi
  int v13; // esi
  int v14; // ebx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-68h]
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // [rsp+28h] [rbp-60h]
  unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+34h] [rbp-54h]
  unsigned int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+3Ch] [rbp-4Ch]

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v18 = v5;
  v7 = -4 * *((_DWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v7 = 4 * *((_DWORD *)a1 + 2);
  v9 = abs32(v7);
  v10 = v6 - *((_DWORD *)a1 + 110);
  v11 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v12 = (v10 % v9) >> 2;
  v13 = v10 / v9;
  v19 = v11;
  if ( v7 <= 0 )
  {
    do
    {
      v16 = *(_DWORD *)v3;
      v17 = *((_QWORD *)a1 + 54);
      v20 = v12;
      v21 = v13 - v16 + 1;
      v22 = ++v12;
      v23 = v13 + 1;
      v11(v17, v5, &v20);
      v5 = v18;
      v11 = v19;
      v6 += v16 * v7 + 4;
      v3 += 4;
      v13 -= v16;
    }
    while ( v3 < v8 );
  }
  else
  {
    do
    {
      v14 = *(_DWORD *)v3;
      v15 = *((_QWORD *)a1 + 54);
      v20 = v12++;
      v21 = v13;
      v22 = v12;
      v23 = v14 + v13;
      v11(v15, v5, &v20);
      v5 = v18;
      v11 = v19;
      v6 += v14 * v7 + 4;
      v3 += 4;
      v13 += v14;
    }
    while ( v3 < v8 );
  }
  *((_QWORD *)a1 + 2) = v6;
}
