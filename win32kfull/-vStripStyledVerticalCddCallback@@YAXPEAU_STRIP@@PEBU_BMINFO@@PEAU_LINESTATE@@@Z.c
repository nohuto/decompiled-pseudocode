/*
 * XREFs of ?vStripStyledVerticalCddCallback@@YAXPEAU_STRIP@@PEBU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02FD6F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vStripStyledVerticalCddCallback(struct _STRIP *a1, const struct _BMINFO *a2, struct _LINESTATE *a3)
{
  char *v3; // r15
  __int64 v4; // rbp
  unsigned int v5; // r11d
  int v7; // esi
  int v8; // edi
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // r13d
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // r10
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  int v20; // [rsp+20h] [rbp-88h]
  unsigned int v21; // [rsp+24h] [rbp-84h]
  int v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  char *v24; // [rsp+38h] [rbp-70h]
  void (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-60h]
  char *v27; // [rsp+50h] [rbp-58h]
  _DWORD v28[4]; // [rsp+58h] [rbp-50h] BYREF

  v3 = (char *)a1 + 28;
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 20);
  v8 = *((_DWORD *)a3 + 5);
  v27 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = -4 * *((_DWORD *)a1 + 2);
  v10 = 1;
  v24 = (char *)a1 + 28;
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v9 = 4 * *((_DWORD *)a1 + 2);
  v21 = *((_DWORD *)a3 + 1);
  if ( v9 <= 0 )
    v10 = -1;
  v22 = v10;
  v11 = abs32(v9);
  v12 = (((int)v4 - *((_DWORD *)a1 + 110)) % v11) >> 2;
  v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)a1 + 54) + 8LL);
  v14 = ((int)v4 - *((_DWORD *)a1 + 110)) / v11;
  v26 = v13;
  v15 = v9;
  v23 = v9;
  do
  {
    v16 = *(_DWORD *)v3;
    v20 = *(_DWORD *)v3;
    do
    {
      if ( !v7 )
      {
        v17 = *((_QWORD *)a1 + 54);
        v28[3] = v14 + 1;
        v28[0] = v12;
        v28[1] = v14;
        v28[2] = v12 + 1;
        v13(v17, v5, v28);
        v16 = v20;
        v15 = v23;
        v5 = v21;
        v13 = v26;
      }
      v14 += v22;
      v4 += v15;
      v8 -= *((_DWORD *)a3 + 2);
      if ( v8 <= 0 )
      {
        v18 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v18;
        if ( (unsigned __int64)v18 > *((_QWORD *)a3 + 6) )
        {
          v18 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v18;
        }
        v8 += *v18;
        v7 = v7 == 0;
        v15 = v23;
      }
      v20 = --v16;
    }
    while ( v16 );
    v8 -= *((_DWORD *)a3 + 3);
    v4 += 4LL;
    ++v12;
    if ( v8 <= 0 )
    {
      v19 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v19;
      if ( (unsigned __int64)v19 > *((_QWORD *)a3 + 6) )
      {
        v19 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v19;
      }
      v8 += *v19;
      v7 = v7 == 0;
    }
    v15 = v23;
    v3 = v24 + 4;
    v24 = v3;
  }
  while ( v3 < v27 );
  *((_QWORD *)a1 + 2) = v4;
  *((_DWORD *)a3 + 20) = v7;
  *((_DWORD *)a3 + 5) = v8;
}
