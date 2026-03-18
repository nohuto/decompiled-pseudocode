/*
 * XREFs of ?bFill@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@Z2@Z @ 0x1C0135C88
 * Callers:
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C01353A8 (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bFill(
        struct EPATHOBJ *a1,
        struct _RECTL *a2,
        char a3,
        void (*a4)(struct _RECTL *, unsigned int, void *),
        void *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ecx
  char *v11; // rsi
  int v12; // eax
  unsigned int v13; // r15d
  __int128 *v14; // r9
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int128 *v17; // rdi
  __int128 *v18; // r8
  __int128 *v19; // rdi
  int v20; // ecx
  unsigned int v22; // esi
  unsigned int i; // r14d
  unsigned int v24; // eax
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned int v27; // esi
  unsigned int j; // r14d
  unsigned int v29; // eax
  __int64 v30; // r15
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-628h]
  int *v35; // [rsp+28h] [rbp-620h]
  int v36; // [rsp+50h] [rbp-5F8h]
  __int128 v37; // [rsp+60h] [rbp-5E8h] BYREF
  __int128 v38; // [rsp+70h] [rbp-5D8h]
  __int128 v39; // [rsp+80h] [rbp-5C8h]
  __int128 v40; // [rsp+90h] [rbp-5B8h]
  _OWORD v41[3]; // [rsp+A0h] [rbp-5A8h] BYREF
  __int128 *v42; // [rsp+D0h] [rbp-578h] BYREF
  int v43; // [rsp+D8h] [rbp-570h]
  int v44; // [rsp+DCh] [rbp-56Ch]
  _OWORD *v45; // [rsp+E0h] [rbp-568h] BYREF
  int v46; // [rsp+E8h] [rbp-560h]
  int v47; // [rsp+ECh] [rbp-55Ch]
  __int128 v48; // [rsp+F0h] [rbp-558h] BYREF
  _BYTE v49[320]; // [rsp+100h] [rbp-548h] BYREF
  char v50; // [rsp+240h] [rbp-408h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( (a3 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 6);
    if ( v8 )
    {
      if ( a2 )
      {
        v22 = 0;
        for ( i = 0; ; ++i )
        {
          v24 = *((_DWORD *)a1 + 14);
          if ( i >= v24 )
            break;
          v25 = *((_QWORD *)a1 + 6);
          v45 = *(_OWORD **)(v25 + 16LL * i);
          v46 = *(_DWORD *)(v25 + 16LL * i + 8);
          v47 = *(_DWORD *)(v25 + 16LL * i + 12);
          if ( a2->left >= *(_DWORD *)(v25 + 16LL * i)
            || a2->top >= *(_DWORD *)(v25 + 16LL * i + 4)
            || a2->right <= *(_DWORD *)(v25 + 16LL * i + 8)
            || a2->bottom <= *(_DWORD *)(v25 + 16LL * i + 12) )
          {
            ERECTL::operator*=((int *)&v45, &a2->left);
            if ( v22 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v25 + 16LL * (i - v22), v22, a5);
              v22 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)&v45) )
              ((void (__fastcall *)(_OWORD **, __int64, void *))a4)(&v45, 1LL, a5);
          }
          else
          {
            ++v22;
          }
        }
        if ( v22 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 6) + 16LL * (v24 - v22), v22, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v8, *((unsigned int *)a1 + 14), a5);
      }
      return 1LL;
    }
  }
  if ( (a3 & 1) == 0 && (a3 & 2) != 0 )
  {
    v26 = *((_QWORD *)a1 + 8);
    if ( v26 )
    {
      if ( a2 )
      {
        v27 = 0;
        for ( j = 0; ; ++j )
        {
          v29 = *((_DWORD *)a1 + 15);
          if ( j >= v29 )
            break;
          v30 = *((_QWORD *)a1 + 8);
          if ( a2->left >= *(_DWORD *)(v30 + 16LL * j)
            || a2->top >= *(_DWORD *)(v30 + 16LL * j + 4)
            || a2->right <= *(_DWORD *)(v30 + 16LL * j + 8)
            || a2->bottom <= *(_DWORD *)(v30 + 16LL * j + 12) )
          {
            v42 = *(__int128 **)(v30 + 16LL * j);
            v43 = *(_DWORD *)(v30 + 16LL * j + 8);
            v44 = *(_DWORD *)(v30 + 16LL * j + 12);
            ERECTL::operator*=((int *)&v42, &a2->left);
            if ( v27 )
            {
              ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v30 + 16LL * (j - v27), v27, a5);
              v27 = 0;
            }
            if ( !ERECTL::bEmpty((ERECTL *)&v42) )
              ((void (__fastcall *)(__int128 **, __int64, void *))a4)(&v42, 1LL, a5);
          }
          else
          {
            ++v27;
          }
        }
        if ( v27 )
          ((void (__fastcall *)(__int64, _QWORD, void *))a4)(*((_QWORD *)a1 + 8) + 16LL * (v29 - v27), v27, a5);
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a4)(v26, *((unsigned int *)a1 + 15), a5);
      }
      return 1LL;
    }
  }
  v9 = *((unsigned int *)a1 + 1);
  if ( (unsigned int)v9 <= 0x14 )
  {
    v11 = &v50;
    v12 = 0;
  }
  else
  {
    v10 = 48 * v9;
    if ( (unsigned __int64)(48 * v9) > 0xFFFFFFFF )
      return 0LL;
    v11 = v10 ? (char *)Win32AllocPool(v10, 1734632775LL) : 0LL;
    if ( !v11 )
      return 0LL;
    v12 = 1;
  }
  v36 = v12;
  v35 = (int *)v49;
  v13 = 0;
  v40 = 0LL;
  v48 = 0LL;
  if ( a2 )
  {
    v40 = (__int128)*a2;
    DWORD1(v48) = 16 * a2->top;
    HIDWORD(v48) = 16 * a2->bottom;
    v14 = &v48;
  }
  else
  {
    v14 = 0LL;
  }
  v45 = v41;
  v15 = bConstructGET(a1, v41, v11, v14);
  v34 = v15;
  if ( v15 )
  {
    v16 = 0x80000000;
    v17 = &v37;
    v42 = &v37;
    v18 = &v37;
    *(_QWORD *)&v37 = &v37;
    LODWORD(v38) = 0;
    HIDWORD(v37) = 0x7FFFFFFF;
LABEL_14:
    if ( v18 != v17 )
    {
      vAdvanceAETEdges(&v37);
      v18 = (__int128 *)v37;
      if ( (__int128 *)v37 != v17 )
      {
        if ( *(__int128 **)v37 != v17 )
        {
          vXSortAETEdges(&v37);
          v18 = (__int128 *)v37;
        }
        goto LABEL_18;
      }
    }
    if ( *(_OWORD **)&v41[0] != v45 )
    {
      v16 = *(_DWORD *)(*(_QWORD *)&v41[0] + 16LL);
LABEL_18:
      if ( *(_DWORD *)(*(_QWORD *)&v41[0] + 16LL) == v16 )
      {
        vMoveNewEdges(v41, &v37, v16);
        v18 = (__int128 *)v37;
      }
      v19 = v18;
      while ( 1 )
      {
        v20 = *((_DWORD *)v19 + 3);
        if ( (a3 & 2) != 0 )
        {
          v31 = *((_DWORD *)v19 + 10);
          do
          {
            v19 = *(__int128 **)v19;
            v31 += *((_DWORD *)v19 + 10);
          }
          while ( v31 );
        }
        else
        {
          v19 = *(__int128 **)v19;
        }
        if ( v20 >= *((_DWORD *)v19 + 3) )
          goto LABEL_29;
        if ( a2 )
        {
          v32 = v40;
          if ( v20 >= (int)v40 )
            v32 = v20;
          *v35 = v32;
          v33 = DWORD2(v40);
          if ( *((_DWORD *)v19 + 3) <= SDWORD2(v40) )
            v33 = *((_DWORD *)v19 + 3);
          v35[2] = v33;
          v35[1] = v16;
          v35[3] = v16 + 1;
          if ( v32 >= v33 )
            goto LABEL_27;
        }
        else
        {
          *v35 = v20;
          v35[2] = *((_DWORD *)v19 + 3);
          v35[1] = v16;
          v35[3] = v16 + 1;
        }
        ++v13;
        v35 += 4;
LABEL_27:
        if ( v13 == 20 )
        {
          ((void (__fastcall *)(_BYTE *, __int64, void *))a4)(v49, 20LL, a5);
          v35 = (int *)v49;
          v13 = 0;
          v18 = (__int128 *)v37;
        }
LABEL_29:
        v19 = *(__int128 **)v19;
        if ( v19 == v42 )
        {
          ++v16;
          v17 = v42;
          goto LABEL_14;
        }
      }
    }
    if ( v13 )
      ((void (__fastcall *)(_BYTE *, _QWORD, void *))a4)(v49, v13, a5);
    v15 = v34;
  }
  if ( v36 )
    Win32FreePool(v11);
  return v15;
}
