/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02DA728
 * Callers:
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E4450 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02DA444 (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // eax
  int v7; // r13d
  unsigned int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // r15
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  __int64 v18; // rdx
  unsigned int v19; // eax
  char v20; // r15
  unsigned int v21; // eax
  char v22; // r10
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  unsigned int v27; // r9d
  int v28; // eax
  _DWORD *v29; // rcx
  int v31; // [rsp+20h] [rbp-20h]
  int v32; // [rsp+20h] [rbp-20h]
  int v33; // [rsp+20h] [rbp-20h]
  int v34; // [rsp+24h] [rbp-1Ch]
  unsigned int i; // [rsp+28h] [rbp-18h]
  int v36; // [rsp+2Ch] [rbp-14h]
  __int64 v37; // [rsp+30h] [rbp-10h]
  __int64 v38; // [rsp+80h] [rbp+40h] BYREF
  __int64 v39; // [rsp+88h] [rbp+48h] BYREF
  __int64 v40; // [rsp+90h] [rbp+50h] BYREF

  v40 = a3;
  v39 = a2;
  v38 = a1;
  v6 = *(_DWORD *)(a2 + 24);
  v7 = a4;
  if ( (v6 & 0x1000) != 0 )
  {
    v10 = 1;
  }
  else if ( (v6 & 0x10000) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 60) >> 1;
  }
  LODWORD(v38) = 0;
  v34 = 0;
  v11 = v10;
  if ( *(_DWORD *)(a3 + 28) == -7 )
    return 0LL;
  v12 = Win32AllocPool((unsigned int)(*(_DWORD *)(a3 + 28) + 7), 1818316871LL, a3, a4);
  if ( !v12 )
    return 0LL;
  v13 = (_DWORD *)v12;
  v36 = *(_DWORD *)(a3 + 28);
  if ( v7 )
  {
    XEPALOBJ::vUpdateTime((XEPALOBJ *)&v39);
    v14 = 256 - v10;
    LODWORD(v38) = v10;
    if ( v10 < 256 - v10 )
    {
      v15 = v10;
      v16 = v10;
      v17 = v10;
      do
      {
        v18 = *(_QWORD *)(a2 + 112);
        v31 = *(_DWORD *)(v18 + 4 * v15);
        HIBYTE(v31) &= 0xCEu;
        *(_DWORD *)(v18 + 4LL * v17) = v31;
        v15 = v16 + 1;
        LODWORD(v38) = v15;
        v17 = ++v16;
      }
      while ( (unsigned int)v15 < v14 );
    }
  }
  else
  {
    v14 = 256 - v10;
  }
  v19 = 0;
  v20 = 48;
  for ( i = 0; v19 < *(_DWORD *)(a3 + 28); i = v19 )
  {
    v37 = v19;
    v32 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v19);
    v21 = ColorMatch(a2, v32, (unsigned int *)&v38);
    v22 = v21;
    if ( (_DWORD)v38 )
    {
      if ( v11 || (*(_DWORD *)(a2 + 24) & 0x10000) != 0 )
      {
        while ( 1 )
        {
          LODWORD(v38) = v11;
          v24 = v11;
          if ( v11 < v14 )
            break;
LABEL_24:
          if ( (v20 & 0x10) == 0 )
          {
            v11 = 0;
            goto LABEL_28;
          }
          v20 &= ~0x10u;
          v11 = v10;
        }
        v25 = *(_QWORD *)(a2 + 112);
        v26 = v11;
        v27 = v11;
        while ( ((unsigned __int8)v20 & *(_BYTE *)(v25 + 4LL * v26 + 3)) != 0 )
        {
          v11 = v27 + 1;
          LODWORD(v38) = v11;
          v24 = v27 + 1;
          v26 = ++v27;
          if ( v11 >= v14 )
            goto LABEL_24;
        }
        HIBYTE(v32) |= 0x30u;
        v22 = v11;
        ++v34;
        *(_DWORD *)(v25 + 4LL * v24) = v32;
      }
    }
    else if ( (v32 & 0x2000000) == 0 )
    {
      v23 = *(_QWORD *)(a2 + 112);
      v33 = *(_DWORD *)(v23 + 4LL * v21);
      HIBYTE(v33) |= 0x30u;
      *(_DWORD *)(v23 + 4LL * v21) = v33;
    }
LABEL_28:
    *((_BYTE *)v13 + v37 + 4) = v22;
    v19 = i + 1;
  }
  XEPALOBJ::vUpdateTime((XEPALOBJ *)&v40);
  v28 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
  v29 = a5;
  *v13 = v28;
  *v29 = v34;
  *a6 = v36;
  return v13;
}
