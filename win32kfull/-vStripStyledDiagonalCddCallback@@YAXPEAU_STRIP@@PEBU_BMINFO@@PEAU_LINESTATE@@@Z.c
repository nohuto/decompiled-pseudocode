/*
 * XREFs of ?vStripStyledDiagonalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FCE20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledDiagonalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r12
  int v5; // ebp
  int v7; // edi
  int v8; // r11d
  __int64 v9; // rsi
  int v10; // r10d
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  int v14; // r14d
  int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // edx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-78h]
  unsigned int v22; // [rsp+24h] [rbp-74h]
  int v23; // [rsp+28h] [rbp-70h]
  int v24; // [rsp+2Ch] [rbp-6Ch]
  char *v25; // [rsp+30h] [rbp-68h]
  void (__fastcall *v26)(__int64, _QWORD, _DWORD *); // [rsp+38h] [rbp-60h]
  char *v27; // [rsp+40h] [rbp-58h]
  _DWORD v28[4]; // [rsp+48h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v5 = *((_DWORD *)a3 + 20);
  v7 = *((_DWORD *)a3 + 5);
  v8 = 1;
  v9 = *((_QWORD *)a1 + 2);
  v25 = (char *)a1 + 28;
  v27 = (char *)a1 + 4 * *(int *)a1 + 28;
  v10 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v10 = 4 * *((_DWORD *)a1 + 2);
  v22 = *((_DWORD *)a3 + 1);
  v23 = v10;
  if ( v10 <= 0 )
    v8 = -1;
  v11 = v9 - *((_DWORD *)a1 + 110);
  v24 = v8;
  v12 = abs32(v10);
  v13 = (v11 % v12) >> 2;
  v14 = v11 / v12;
  v26 = *(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*((_QWORD *)a1 + 54) + 8LL);
  do
  {
    v15 = *(_DWORD *)v3;
    while ( 1 )
    {
      v16 = v13 + 1;
      v17 = v13;
      v21 = v13;
      if ( !v5 )
      {
        v18 = *((_QWORD *)a1 + 54);
        v28[3] = v14 + 1;
        v28[0] = v13;
        v28[1] = v14;
        v28[2] = v13 + 1;
        v26(v18, v22, v28);
        v10 = v23;
        v17 = v21;
        v8 = v24;
      }
      v9 += 4LL;
      v13 = v16;
      if ( !--v15 )
        break;
      v7 -= *((_DWORD *)a3 + 4);
      v14 += v8;
      v9 += v10;
      if ( v7 <= 0 )
      {
        v19 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v19;
        if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
        {
          v19 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v19;
        }
        v7 += *v19;
        v5 = v5 == 0;
      }
    }
    v7 -= *((_DWORD *)a3 + 2);
    if ( v7 <= 0 )
    {
      v20 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v20;
      if ( (unsigned __int64)v20 > *((_QWORD *)a3 + 6) )
      {
        v20 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v20;
      }
      v7 += *v20;
      v5 = v5 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
    {
      v13 = v17;
      v9 += v10 - 4;
      v14 += v8;
    }
    v3 = v25 + 4;
    v25 = v3;
  }
  while ( v3 < v27 );
  *((_QWORD *)a1 + 2) = v9;
  *((_DWORD *)a3 + 20) = v5;
  *((_DWORD *)a3 + 5) = v7;
}
