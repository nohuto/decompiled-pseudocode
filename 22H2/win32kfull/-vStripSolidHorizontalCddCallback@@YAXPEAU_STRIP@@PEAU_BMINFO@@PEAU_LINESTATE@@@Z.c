/*
 * XREFs of ?vStripSolidHorizontalCddCallback@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C01602F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripSolidHorizontalCddCallback(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // rsi
  __int64 v5; // r15
  unsigned int v6; // r9d
  int v7; // r13d
  int v8; // r12d
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // r10
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  char *v16; // [rsp+28h] [rbp-60h]
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-58h]
  _DWORD v18[4]; // [rsp+38h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a3 + 1);
  v7 = 1;
  v15 = v6;
  v8 = -4 * *((_DWORD *)a1 + 2);
  v16 = (char *)a1 + 4 * *(int *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v8 = 4 * *((_DWORD *)a1 + 2);
  if ( v8 <= 0 )
    v7 = -1;
  v9 = abs32(v8);
  v10 = ((int)v5 - *((_DWORD *)a1 + 110)) / v9;
  v11 = (((int)v5 - *((_DWORD *)a1 + 110)) % v9) >> 2;
  v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v17 = v12;
  do
  {
    v13 = *(_DWORD *)v3;
    v14 = *((_QWORD *)a1 + 54);
    v18[0] = v11;
    v18[3] = v10 + 1;
    v11 += v13;
    v18[1] = v10;
    v18[2] = v11;
    v12(v14, v6, v18);
    v6 = v15;
    v12 = v17;
    v10 += v7;
    v3 += 4;
    v5 += v8 + 4 * v13;
  }
  while ( v3 < v16 );
  *((_QWORD *)a1 + 2) = v5;
}
