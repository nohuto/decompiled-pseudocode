/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BB934
 * Callers:
 *     GreRealizePalette @ 0x1C01470CC (GreRealizePalette.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00DAB40 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02BB7E0 (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // rax
  _DWORD *v14; // r15
  signed __int32 v15; // edx
  signed __int32 v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int v21; // eax
  char v22; // r13
  unsigned int v23; // eax
  char v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27; // ecx
  __int64 v28; // rdx
  signed __int32 v29; // ecx
  int v30; // eax
  _DWORD *v31; // rcx
  _DWORD *result; // rax
  int v33; // r10d
  int v34; // [rsp+20h] [rbp-20h]
  unsigned int i; // [rsp+24h] [rbp-1Ch]
  _DWORD *v36; // [rsp+30h] [rbp-10h]
  __int64 v37; // [rsp+38h] [rbp-8h]
  __int64 v38; // [rsp+80h] [rbp+40h] BYREF
  __int64 v39; // [rsp+88h] [rbp+48h] BYREF
  int v40; // [rsp+90h] [rbp+50h]

  v39 = a2;
  v38 = a1;
  v36 = (_DWORD *)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = a2;
  if ( (v8 & 0x1000) != 0 )
  {
    v10 = 1;
  }
  else if ( (v8 & 0x10000) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 60) >> 1;
  }
  LODWORD(v38) = 0;
  v34 = 0;
  v11 = 256 - v10;
  v12 = v10;
  if ( *(_DWORD *)(a3 + 28) == -7 )
    return 0LL;
  v13 = Win32AllocPool((unsigned int)(*(_DWORD *)(a3 + 28) + 7), 1818316871LL);
  if ( !v13 )
    return 0LL;
  v14 = (_DWORD *)v13;
  if ( a4 )
  {
    v15 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
    v9 = v39;
    v16 = v15 + 1;
    *(_DWORD *)(v39 + 32) = v16;
    v17 = *(_QWORD *)(v9 + 120);
    if ( v17 != v9 )
      *(_DWORD *)(v17 + 32) = v16;
    LODWORD(v38) = v10;
    if ( v10 < v11 )
    {
      v18 = 4LL * v10;
      v19 = v11 - v10;
      LODWORD(v38) = 256 - v10;
      do
      {
        v20 = *(_QWORD *)(v9 + 112);
        v40 = *(_DWORD *)(v20 + v18);
        HIBYTE(v40) &= 0xCEu;
        *(_DWORD *)(v20 + v18) = v40;
        v18 += 4LL;
        --v19;
      }
      while ( v19 );
    }
  }
  v21 = 0;
  v22 = 48;
  for ( i = 0; v21 < *(_DWORD *)(a3 + 28); i = v21 )
  {
    v37 = v21;
    v40 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v21);
    v23 = ColorMatch(v9, v40, (unsigned int *)&v38);
    v24 = v23;
    if ( (_DWORD)v38 )
    {
      if ( v12 || (*v36 & 0x10000) != 0 )
      {
        while ( 1 )
        {
          LODWORD(v38) = v12;
          if ( v12 < v11 )
            break;
LABEL_24:
          if ( (v22 & 0x10) == 0 )
          {
            v12 = 0;
            goto LABEL_28;
          }
          v22 &= ~0x10u;
          v12 = v10;
        }
        v26 = *(_QWORD *)(v9 + 112);
        while ( ((unsigned __int8)v22 & *(_BYTE *)(v26 + 4LL * v12 + 3)) != 0 )
        {
          LODWORD(v38) = ++v12;
          if ( v12 >= v11 )
            goto LABEL_24;
        }
        HIBYTE(v40) |= 0x30u;
        v24 = v12;
        ++v34;
        *(_DWORD *)(v26 + 4LL * v12) = v40;
      }
    }
    else if ( (v40 & 0x2000000) == 0 )
    {
      v25 = *(_QWORD *)(v9 + 112);
      v40 = *(_DWORD *)(v25 + 4LL * v23);
      HIBYTE(v40) |= 0x30u;
      *(_DWORD *)(v25 + 4LL * v23) = v40;
    }
LABEL_28:
    *((_BYTE *)v14 + v37 + 4) = v24;
    v21 = i + 1;
  }
  v27 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
  v28 = *(_QWORD *)(a3 + 120);
  v29 = v27 + 1;
  *(_DWORD *)(a3 + 32) = v29;
  if ( v28 != a3 )
    *(_DWORD *)(v28 + 32) = v29;
  v30 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
  v31 = a5;
  *v14 = v30;
  *v31 = v34;
  result = v14;
  *a6 = v33;
  return result;
}
