/*
 * XREFs of ?vStripSolidHorizontalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FC7D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidHorizontalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  unsigned int v5; // r9d
  __int64 v6; // r14
  int v7; // r13d
  int v8; // r12d
  unsigned int v9; // r8d
  unsigned int v10; // ett
  unsigned int v11; // edi
  int v12; // ebp
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rax
  int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-68h]
  char *v17; // [rsp+28h] [rbp-60h]
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-58h]
  _DWORD v19[4]; // [rsp+38h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_QWORD *)a1 + 2);
  v7 = 1;
  v16 = v5;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v17 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  if ( v8 <= 0 )
    v7 = -1;
  v9 = abs32(v8);
  v10 = v6 - *((_DWORD *)a1 + 110);
  v11 = (v10 % v9) >> 2;
  v12 = v10 / v9;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v18 = v13;
  do
  {
    v14 = *(_DWORD *)v3;
    v19[0] = v11;
    v19[3] = v12 + 1;
    v11 += v14;
    v15 = *((_QWORD *)a1 + 54);
    v19[1] = v12;
    v19[2] = v11;
    v13(v15, v5, v19);
    v5 = v16;
    v12 += v7;
    v13 = v18;
    v6 += v8 + 4 * v14;
    v3 += 4;
  }
  while ( v3 < v17 );
  *((_QWORD *)a1 + 2) = v6;
}
