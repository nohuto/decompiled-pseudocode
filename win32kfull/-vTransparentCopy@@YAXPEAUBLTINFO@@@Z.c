/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1C02988C0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1C029885C (-StartPixel@@YAPEAEPEAEKK@Z.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  XLATEOBJ *v1; // r11
  char v2; // r14
  int v3; // r15d
  int v5; // edi
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int8 *started; // rax
  int v9; // r8d
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edx
  unsigned __int8 v12; // r10
  XLATEOBJ *v13; // r11
  unsigned __int8 *v14; // r8
  unsigned __int8 *v15; // rdx
  int v16; // r13d
  bool v17; // zf
  int v18; // ecx
  int v19; // r15d
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // rdi
  int v22; // eax
  char v23; // r14
  ULONG v24; // edx
  unsigned int v25; // edx
  ULONG v26; // eax
  char v27; // al
  unsigned __int8 v28; // al
  char v29; // al
  unsigned __int8 v30; // al
  int v31; // eax
  char v32; // cl
  unsigned __int8 v33; // [rsp+20h] [rbp-40h]
  _WORD v34[2]; // [rsp+24h] [rbp-3Ch]
  int v35; // [rsp+28h] [rbp-38h]
  int v36; // [rsp+2Ch] [rbp-34h]
  int v37; // [rsp+30h] [rbp-30h]
  unsigned __int8 *v38; // [rsp+38h] [rbp-28h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-20h]
  XLATEOBJ *v40; // [rsp+48h] [rbp-18h]
  _DWORD v41[2]; // [rsp+50h] [rbp-10h]

  v1 = *(XLATEOBJ **)a1;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 8);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  v36 = v3;
  v40 = v1;
  v33 = 0;
  v41[0] = -524255232;
  v41[1] = -16975632;
  v34[0] = -4096;
  if ( v6 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v9 = *((_DWORD *)a1 + 36);
  v10 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 14);
  v38 = started;
  v39 = StartPixel(v10, v11, v9);
  v14 = v39;
  if ( !v5 )
    return;
  v15 = v38;
  do
  {
    v16 = *((_DWORD *)a1 + 12);
    v17 = *((_DWORD *)a1 + 35) == 1;
    v18 = v3;
    v19 = *((_DWORD *)a1 + 14);
    v20 = v15;
    v37 = v5 - 1;
    v21 = v14;
    v35 = v18;
    if ( v17 )
    {
      if ( (v16 & 7) != 0 )
      {
        v12 = *v15 << (v16 & 7);
        v33 = v12;
      }
      else
      {
        v20 = v15 - 1;
      }
      v18 = v35;
    }
    v22 = *((_DWORD *)a1 + 36);
    if ( v22 == 1 )
    {
      v23 = *((_BYTE *)v41 + (v19 & 7));
    }
    else
    {
      if ( v22 != 2 )
        goto LABEL_16;
      v23 = *((_BYTE *)v34 + (v19 & 1));
    }
    v2 = *v14 & v23;
LABEL_16:
    if ( !v36 )
      goto LABEL_69;
    do
    {
      v35 = v18 - 1;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          if ( (v16 & 7) == 0 )
            v12 = *++v20;
          v24 = v12 >> 7;
          v33 = 2 * v12;
          goto LABEL_33;
        case 2:
          v25 = *v20;
          if ( (v16 & 1) != 0 )
          {
            v24 = v25 & 0xF;
            ++v20;
          }
          else
          {
            v24 = v25 >> 4;
          }
LABEL_33:
          LOBYTE(v16) = v16 + 1;
          break;
        case 3:
          v24 = *v20++;
          break;
        case 4:
          v24 = (unsigned __int16)(v7 & *(_WORD *)v20);
          v20 += 2;
          break;
        case 5:
          v24 = *v20 | (*(unsigned __int16 *)(v20 + 1) << 8);
          v20 += 3;
          break;
        case 6:
          v24 = *(_DWORD *)v20 & v7;
          v20 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v24 == *((_DWORD *)a1 + 37) )
            v29 = (*v21 << (v19 & 7)) & 0x80;
          else
            v29 = (unsigned __int8)XLATEOBJ_iXlate(v13, v24) << 7;
          v30 = v2 | v29;
          if ( (++v19 & 7) != 0 )
          {
            v2 = v30 >> 1;
          }
          else
          {
            *v21++ = v30;
            v2 = 0;
          }
          break;
        case 2:
          if ( (v19 & 1) != 0 )
          {
            if ( v24 == *((_DWORD *)a1 + 37) )
              v27 = *v21 & 0xF;
            else
              v27 = XLATEOBJ_iXlate(v13, v24);
            v28 = v2 | v27;
            *v21 = v28;
            v2 = v28;
            ++v21;
          }
          else if ( v24 == *((_DWORD *)a1 + 37) )
          {
            v2 = *v21 & 0xF0;
          }
          else
          {
            v2 = 16 * XLATEOBJ_iXlate(v13, v24);
          }
          ++v19;
          break;
        case 3:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *v21 = XLATEOBJ_iXlate(v13, v24);
          ++v21;
          break;
        case 4:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *(_WORD *)v21 = XLATEOBJ_iXlate(v13, v24);
          v21 += 2;
          break;
        case 5:
          if ( v24 != *((_DWORD *)a1 + 37) )
          {
            v26 = XLATEOBJ_iXlate(v13, v24);
            *v21 = v26;
            v21[2] = BYTE2(v26);
            v21[1] = BYTE1(v26);
          }
          v21 += 3;
          break;
        case 6:
          if ( v24 != *((_DWORD *)a1 + 37) )
            *(_DWORD *)v21 = XLATEOBJ_iXlate(v13, v24);
          v21 += 4;
          break;
        default:
          return;
      }
      v18 = v35;
      v12 = v33;
      v13 = v40;
    }
    while ( v35 );
    v15 = v38;
    v14 = v39;
LABEL_69:
    v31 = *((_DWORD *)a1 + 36);
    if ( v31 == 1 )
    {
      if ( (v19 & 7) != 0 )
      {
        v32 = *((_BYTE *)v41 + (v19 & 7));
        goto LABEL_75;
      }
    }
    else if ( v31 == 2 && (v19 & 1) != 0 )
    {
      v32 = *((_BYTE *)v34 + (v19 & 1));
LABEL_75:
      *v21 = v2 & v32 | *v21 & ~v32;
    }
    v5 = v37;
    v15 += *((int *)a1 + 10);
    v12 = v33;
    v14 += *((int *)a1 + 11);
    v3 = v36;
    v38 = v15;
    v39 = v14;
  }
  while ( v37 );
}
