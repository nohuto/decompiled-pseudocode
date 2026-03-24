/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02BC740
 * Callers:
 *     GreRealizePalette @ 0x1C011B8EC (GreRealizePalette.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D40AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02BC5EC (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // esi
  int v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  _DWORD *result; // rax
  _DWORD *v15; // r13
  signed __int32 v16; // ecx
  signed __int32 v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // eax
  char v23; // r12
  unsigned int v24; // eax
  char v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  signed __int32 v28; // ecx
  __int64 v29; // rax
  signed __int32 v30; // ecx
  int v31; // r9d
  int v32; // [rsp+20h] [rbp-20h]
  unsigned int i; // [rsp+24h] [rbp-1Ch]
  _DWORD *v34; // [rsp+30h] [rbp-10h]
  __int64 v35; // [rsp+38h] [rbp-8h]
  __int64 v36; // [rsp+80h] [rbp+40h] BYREF
  __int64 v37; // [rsp+88h] [rbp+48h] BYREF
  int v38; // [rsp+90h] [rbp+50h]

  v37 = a2;
  v36 = a1;
  v34 = (_DWORD *)(a2 + 24);
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
  v11 = *(_DWORD *)(a3 + 28);
  LODWORD(v36) = 0;
  v32 = 0;
  v12 = v10;
  v13 = 256 - v10;
  result = PALLOCMEM2((unsigned int)(v11 + 7), 1818316871LL, 0);
  v15 = result;
  if ( result )
  {
    if ( a4 )
    {
      v16 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v9 = v37;
      v17 = v16 + 1;
      *(_DWORD *)(v37 + 32) = v17;
      v18 = *(_QWORD *)(v9 + 120);
      if ( v18 != v9 )
        *(_DWORD *)(v18 + 32) = v17;
      LODWORD(v36) = v10;
      if ( v10 < v13 )
      {
        v19 = 4LL * v10;
        v20 = v13 - v10;
        LODWORD(v36) = 256 - v10;
        do
        {
          v21 = *(_QWORD *)(v9 + 112);
          v38 = *(_DWORD *)(v19 + v21);
          HIBYTE(v38) &= 0xCEu;
          *(_DWORD *)(v19 + v21) = v38;
          v19 += 4LL;
          --v20;
        }
        while ( v20 );
      }
    }
    v22 = 0;
    v23 = 48;
    for ( i = 0; v22 < *(_DWORD *)(a3 + 28); i = v22 )
    {
      v35 = v22;
      v38 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v22);
      v24 = ColorMatch(v9, v38, (unsigned int *)&v36);
      v25 = v24;
      if ( (_DWORD)v36 )
      {
        if ( v12 || (*v34 & 0x10000) != 0 )
        {
          while ( 1 )
          {
            LODWORD(v36) = v12;
            if ( v12 < v13 )
              break;
LABEL_23:
            if ( (v23 & 0x10) == 0 )
            {
              v12 = 0;
              goto LABEL_27;
            }
            v23 &= ~0x10u;
            v12 = v10;
          }
          v27 = *(_QWORD *)(v9 + 112);
          while ( ((unsigned __int8)v23 & *(_BYTE *)(v27 + 4LL * v12 + 3)) != 0 )
          {
            LODWORD(v36) = ++v12;
            if ( v12 >= v13 )
              goto LABEL_23;
          }
          HIBYTE(v38) |= 0x30u;
          v25 = v12;
          ++v32;
          *(_DWORD *)(v27 + 4LL * v12) = v38;
        }
      }
      else if ( (v38 & 0x2000000) == 0 )
      {
        v26 = *(_QWORD *)(v9 + 112);
        v38 = *(_DWORD *)(v26 + 4LL * v24);
        HIBYTE(v38) |= 0x30u;
        *(_DWORD *)(v26 + 4LL * v24) = v38;
      }
LABEL_27:
      *((_BYTE *)v15 + v35 + 4) = v25;
      v22 = i + 1;
    }
    v28 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
    v29 = *(_QWORD *)(a3 + 120);
    v30 = v28 + 1;
    *(_DWORD *)(a3 + 32) = v30;
    if ( v29 != a3 )
      *(_DWORD *)(v29 + 32) = v30;
    *v15 = XEPALOBJ::ulTime((XEPALOBJ *)&v37);
    *a5 = v32;
    *a6 = v31;
    return v15;
  }
  return result;
}
