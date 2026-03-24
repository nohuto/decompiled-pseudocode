/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C0062388
 * Callers:
 *     cjCopyFontDataW @ 0x1C005EF80 (cjCopyFontDataW.c)
 * Callees:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C0062618 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C0114E60 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 */

__int64 __fastcall bIFIMetricsToLogFontW2(struct XDCOBJ *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // r9d
  int v9; // eax
  char v10; // cl
  unsigned int v11; // ebx
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  float x; // xmm0_4
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // r9d
  __int64 v30; // rcx
  float v31; // [rsp+20h] [rbp-60h] BYREF
  float v32; // [rsp+24h] [rbp-5Ch]
  float v33[2]; // [rsp+28h] [rbp-58h] BYREF
  float v34; // [rsp+30h] [rbp-50h] BYREF
  float v35; // [rsp+34h] [rbp-4Ch]
  float v36[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v37; // [rsp+48h] [rbp-38h] BYREF
  int v38; // [rsp+50h] [rbp-30h]
  int v39; // [rsp+54h] [rbp-2Ch]
  _QWORD v40[3]; // [rsp+58h] [rbp-28h] BYREF
  float v41; // [rsp+B0h] [rbp+30h] BYREF
  float v42; // [rsp+B8h] [rbp+38h] BYREF
  int v43; // [rsp+C0h] [rbp+40h] BYREF

  v40[0] = a3;
  v8 = *(__int16 *)(a3 + 60) + *(__int16 *)(a3 + 62);
  *(_QWORD *)v36 = a3;
  *(_DWORD *)a2 = v8;
  *(_DWORD *)(a2 + 4) = *(__int16 *)(a3 + 76);
  *(_DWORD *)(a2 + 16) = *(unsigned __int16 *)(a3 + 46);
  *(_BYTE *)(a2 + 20) = -((*(_BYTE *)(a3 + 52) & 1) != 0);
  *(_BYTE *)(a2 + 21) = *(_BYTE *)(a3 + 52) & 2;
  *(_BYTE *)(a2 + 22) = *(_BYTE *)(a3 + 52) & 0x10;
  *(_BYTE *)(a2 + 23) = *(_BYTE *)(a3 + 44);
  *(_DWORD *)(a2 + 8) = IFIOBJ::lfOrientation((IFIOBJ *)v36);
  *(_DWORD *)(a2 + 12) = IFIOBJ::lfOrientation((IFIOBJ *)v36);
  *(_BYTE *)(a2 + 27) = *(_BYTE *)(a3 + 45);
  v9 = *(_DWORD *)(a3 + 48);
  if ( (v9 & 1) != 0 )
  {
    v10 = 3;
  }
  else if ( (v9 & 2) != 0 )
  {
    v10 = 1;
  }
  else
  {
    v10 = 3;
    if ( (v9 & 4) == 0 )
      v10 = (v9 & 8) != 0 ? 3 : 0;
  }
  *(_BYTE *)(a2 + 24) = v10;
  *(_WORD *)(a2 + 25) = 258;
  wcsncpy_s((wchar_t *)(a2 + 28), 0x20uLL, (const wchar_t *)(a3 + *(int *)(a3 + 8)), 0x1FuLL);
  v11 = 0;
  *(_WORD *)(a2 + 90) = 0;
  wcsncpy_s((wchar_t *)(a2 + 92), 0x40uLL, (const wchar_t *)(a3 + *(int *)(a3 + 16)), 0x3FuLL);
  *(_WORD *)(a2 + 218) = 0;
  wcsncpy_s((wchar_t *)(a2 + 220), 0x20uLL, (const wchar_t *)(a3 + *(int *)(a3 + 12)), 0x1FuLL);
  v12 = v40[0];
  *(_WORD *)(a2 + 282) = 0;
  if ( (*(_DWORD *)(v12 + 48) & 0x3000010) != 0 )
  {
    v13 = 0;
    v41 = (float)*(__int16 *)(v12 + 76) * *(float *)&a4;
    v14 = (unsigned __int8)(SLODWORD(v41) >> 23) - 118;
    if ( v14 <= 40 )
    {
      v15 = LODWORD(v41) & 0x7FFFFFLL | 0x800000;
      v16 = v14 < 0 ? v15 >> (118 - (unsigned __int8)(SLODWORD(v41) >> 23)) : v15 << v14;
      v17 = (v16 + 0x80000000LL) >> 32;
      v13 = -(int)v17;
      if ( v41 >= 0.0 )
        v13 = v17;
    }
    *(_DWORD *)(a2 + 4) = v13;
    v18 = 0;
    v41 = (float)(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62)) * *(float *)&a4;
    v19 = (unsigned __int8)(SLODWORD(v41) >> 23) - 118;
    if ( v19 <= 40 )
    {
      v20 = LODWORD(v41) & 0x7FFFFFLL | 0x800000;
      v21 = v19 < 0 ? v20 >> (118 - (unsigned __int8)(SLODWORD(v41) >> 23)) : v20 << v19;
      v22 = (v21 + 0x80000000LL) >> 32;
      v18 = -(int)v22;
      if ( v41 >= 0.0 )
        v18 = v22;
    }
    *(_DWORD *)a2 = v18;
  }
  v23 = *(_QWORD *)a1;
  v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
  v39 = *(_DWORD *)(*(_QWORD *)(v23 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v37, a1, 0x402u, 0);
  if ( v37 )
  {
    if ( (*(_DWORD *)(v37 + 32) & 2) != 0 )
      return 1;
    IFIOBJ::pptlBaseline((IFIOBJ *)v40);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v40)->x;
    v32 = (float)v26;
    v31 = x;
    EFLOAT::eqLength(&v41, &v43, &v31);
    v33[0] = v31 / v41;
    v33[1] = v32 / v41;
    if ( (*(_DWORD *)(v37 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)&v37, (struct VECTORFL *)v33, (struct VECTORFL *)v33, 1uLL) )
    {
      EFLOAT::eqLength(&v41, &v43, v33);
      v43 = 0;
      bFToL(v27, &v43, 0LL);
      *(_DWORD *)(a2 + 4) = v43;
      IFIOBJ::pptlBaseline((IFIOBJ *)v40);
      v28 = -IFIOBJ::pptlBaseline((IFIOBJ *)v40)->y;
      v35 = (float)v29;
      v34 = (float)v28;
      EFLOAT::eqLength(&v42, &v43, &v34);
      v36[0] = v34 / v42;
      v36[1] = v35 / v42;
      if ( (*(_DWORD *)(v37 + 32) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)&v37, (struct VECTORFL *)v36, (struct VECTORFL *)v36, 1uLL) )
      {
        EFLOAT::eqLength(&v42, &v43, v36);
        v41 = 0.0;
        bFToL(v30, &v41, 0LL);
        *(float *)a2 = v41;
        return 1;
      }
    }
  }
  return v11;
}
