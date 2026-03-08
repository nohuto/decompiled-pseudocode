/*
 * XREFs of ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E52C4
 * Callers:
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01E5920 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     IntersectRect @ 0x1C00FEBD4 (IntersectRect.c)
 *     ?GetScreenRect@@YA?AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z @ 0x1C01488EC (-GetScreenRect@@YA-AUtagRECT@@HPEBU_D3DMATRIX@@U1@@Z.c)
 */

__int64 __fastcall TTBetterTarget(
        struct tagWND *a1,
        int a2,
        struct tagPNTRWINDOWHITTTESTARGS *a3,
        struct tagRECT *a4,
        __int16 a5)
{
  unsigned int v5; // edi
  struct tagRECT v8; // xmm6
  __int64 result; // rax
  const struct _D3DMATRIX *v10; // r8
  int v11; // edx
  const struct _D3DMATRIX *v12; // r8
  int v13; // edx
  const struct _D3DMATRIX *v14; // r8
  int v15; // edx
  const struct _D3DMATRIX *v16; // r8
  int v17; // edx
  struct tagRECT v18; // [rsp+20h] [rbp-60h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v21; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  v8 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v18 = v8;
  if ( a4 )
  {
    result = IntersectRect(&v18, &v18.left, &a4->left);
    if ( !(_DWORD)result )
      return result;
    v8 = v18;
  }
  if ( !*((_QWORD *)a3 + 7) )
    return 1;
  if ( a2 + (a5 != 3 ? 0xFFF : 0) < (unsigned int)(*((_DWORD *)a3 + 16) + ((*((_DWORD *)a3 + 44) & 2) == 0 ? 0xFFF : 0)) )
  {
    v10 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v11 = *((_DWORD *)a3 + 21);
    v18 = v8;
    if ( GetScreenRect(&v19, v11, v10, &v18)->left >= *((_DWORD *)a3 + 19) )
      return 1;
    v12 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v13 = *((_DWORD *)a3 + 21);
    v18 = v8;
    if ( *((_DWORD *)a3 + 17) >= _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)GetScreenRect(&v20, v13, v12, &v18), 8)) )
      return 1;
    v14 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v15 = *((_DWORD *)a3 + 21);
    v18 = v8;
    if ( (int)HIDWORD(*(_QWORD *)&GetScreenRect(&v21, v15, v14, &v18)->left) >= *((_DWORD *)a3 + 20) )
      return 1;
    v16 = (const struct _D3DMATRIX *)*((_QWORD *)a3 + 12);
    v17 = *((_DWORD *)a3 + 21);
    v18 = v8;
    if ( *((_DWORD *)a3 + 18) >= _mm_srli_si128(*(__m128i *)GetScreenRect(&v22, v17, v16, &v18), 8).m128i_i32[1]
      || (*((_DWORD *)a3 + 44) & 1) != 0 )
    {
      return 1;
    }
  }
  return v5;
}
