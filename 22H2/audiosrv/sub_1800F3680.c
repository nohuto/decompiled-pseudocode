/*
 * XREFs of sub_1800F3680 @ 0x1800F3680
 * Callers:
 *     sub_1800F357C @ 0x1800F357C (sub_1800F357C.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800F2320 @ 0x1800F2320 (sub_1800F2320.c)
 *     sub_1800F3374 @ 0x1800F3374 (sub_1800F3374.c)
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 *     sub_1800F51F4 @ 0x1800F51F4 (sub_1800F51F4.c)
 *     sub_18013A4D4 @ 0x18013A4D4 (sub_18013A4D4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F3680(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, unsigned int a8)
{
  __int64 v10; // r14
  int v11; // ebx
  __int64 v12; // rdi
  _UNKNOWN **v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r12
  _QWORD *v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  int v20; // edx
  int v21; // ecx
  _QWORD *v22; // r12
  unsigned __int64 i; // rsi
  int v24; // r13d
  int v25; // esi
  int v26; // r14d
  int v27; // r15d
  int v28; // r12d
  __int64 v30; // rdx
  int v31; // edi
  int v33; // [rsp+44h] [rbp-BCh]
  unsigned int v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h]
  BOOL v41; // [rsp+74h] [rbp-8Ch]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  _QWORD *v44; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-58h] BYREF
  char v49; // [rsp+B0h] [rbp-50h]
  _WORD v50[201]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v51[261]; // [rsp+252h] [rbp+152h] BYREF
  int v52; // [rsp+45Ch] [rbp+35Ch]
  int v53; // [rsp+460h] [rbp+360h]
  int v54; // [rsp+464h] [rbp+364h]

  v35 = a3;
  v37 = a2;
  v10 = 0LL;
  v11 = 0;
  v52 = a4;
  v53 = 0;
  v54 = -1;
  if ( a2 )
    sub_180057300(v50, 201LL, a2);
  else
    memset(v50, 0, sizeof(v50));
  sub_180057300(v51, 261LL, a3);
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  v12 = 0LL;
  v34 = -1;
  v43 = 0LL;
  v33 = 0;
  v40 = 0;
  if ( a8 <= 0x14 )
  {
    v13 = (_UNKNOWN **)off_18019C348;
  }
  else
  {
    v13 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_180171BD8, a8);
      v13 = (_UNKNOWN **)off_18019C348;
    }
    v11 = -2005139334;
  }
  v41 = a5 == 1;
  if ( v11 >= 0 )
  {
    v14 = *(_QWORD *)(a1 + 16);
    if ( !(unsigned __int8)sub_18013A4D4(&v44, *(_QWORD *)(v14 + 208)) )
      sub_1800B8610(-2147024882);
    v15 = *(_QWORD *)(v14 + 208);
    v16 = (__int64)v44;
    if ( v15 )
    {
      v17 = v44;
      v18 = *(_QWORD *)(v14 + 200) - (_QWORD)v44;
      do
      {
        *v17 = *(_QWORD *)((char *)v17 + v18);
        ++v17;
        --v15;
      }
      while ( v15 );
    }
    v11 = 0;
    v19 = v45;
    if ( !v45 )
    {
LABEL_41:
      v13 = (_UNKNOWN **)off_18019C348;
      goto LABEL_42;
    }
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    v21 = 0;
    while ( 1 )
    {
      if ( v21 )
        goto LABEL_30;
      v22 = *(_QWORD **)(v16 + 8 * v10);
      v12 = 0LL;
      v42 = 0LL;
      v34 = -1;
      for ( i = 0LL; i < v22[1]; ++i )
      {
        v12 = *(_QWORD *)(*v22 + 8 * i);
        if ( sub_1800F2320((__int64)v50, v12) )
        {
          v21 = 1;
          v33 = 1;
          v43 = v12;
        }
        else
        {
          v38 = 0;
          v39 = -1;
          sub_1800F3374((struct _RTL_CRITICAL_SECTION *)a1, v12, v41, &v38, &v39);
          v21 = v33;
          if ( v38 )
          {
            v42 = v12;
            v34 = v39;
            continue;
          }
        }
        v12 = v42;
      }
      if ( ++v10 >= v19 )
        break;
      v16 = (__int64)v44;
    }
    if ( v21 )
    {
LABEL_30:
      if ( v12 )
      {
        v20 = -2;
        if ( (v34 & 0xFFFFFFFE) < (a5 & 0xFFFFFFFE) )
        {
          v11 = -2005139334;
LABEL_33:
          v24 = v37;
          v25 = a5;
          v26 = a6;
          v27 = a4;
          v28 = v35;
          goto LABEL_34;
        }
      }
      if ( v12 && !a7 )
      {
        v30 = v12;
        v31 = a1;
        v11 = sub_1800F4D90(a1, v30);
        v40 = 1;
        if ( v11 < 0 )
          goto LABEL_33;
        goto LABEL_52;
      }
    }
    v31 = a1;
LABEL_52:
    v25 = a5;
    v26 = a6;
    v27 = a4;
    v28 = v35;
    if ( v43 )
    {
      v24 = v37;
      if ( !a7 && a5 == 1 )
        sub_1800F51F4(v31, v20, v37, v35, a4, a6);
    }
    else
    {
      v24 = v37;
    }
LABEL_34:
    if ( v49 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v40 && v11 >= 0 )
    {
      if ( a8 )
        Sleep(0x32u);
      v11 = sub_1800F3680(a1, v24, v28, v27, v25, v26, 0, a8 + 1);
    }
    goto LABEL_41;
  }
LABEL_42:
  if ( v13 != &off_18019C348 && (*((_DWORD *)v13 + 7) & 0x100) != 0 && *((_BYTE *)v13 + 25) >= 4u )
    sub_1800BB4E0((__int64)v13[2], 0x1Cu, (__int64)&unk_180171BD8, v11);
  sub_1800C28E0((__int64 *)&v44);
  return (unsigned int)v11;
}
