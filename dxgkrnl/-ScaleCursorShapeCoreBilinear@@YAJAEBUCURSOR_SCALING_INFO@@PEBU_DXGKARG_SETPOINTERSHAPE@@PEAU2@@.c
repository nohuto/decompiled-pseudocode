/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0334D20
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0334BC8 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Pitch; // r15d
  const struct CURSOR_SCALING_INFO *v6; // rsi
  UINT v7; // ebp
  UINT v8; // r8d
  int v9; // r9d
  UINT v10; // ecx
  bool v11; // r11
  bool v12; // r14
  float v13; // xmm7_4
  float v14; // xmm6_4
  int v15; // r10d
  float v16; // xmm5_4
  int v17; // ebp
  float v18; // xmm4_4
  int v19; // esi
  char *v20; // rdx
  __int64 v21; // r13
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  int v28; // r12d
  __int64 v29; // rax
  int v30; // r15d
  int v31; // r13d
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // r12d
  int v35; // ecx
  int v36; // r15d
  int v37; // edx
  int v38; // eax
  char *v39; // rdx
  unsigned int v40; // ecx
  UINT v41; // eax
  unsigned int v42; // ecx
  __int64 v44; // [rsp+58h] [rbp-A0h]
  char *v45; // [rsp+60h] [rbp-98h]
  __int64 v46; // [rsp+68h] [rbp-90h]
  int v47; // [rsp+70h] [rbp-88h]
  __int64 v48; // [rsp+78h] [rbp-80h]
  UINT v49; // [rsp+80h] [rbp-78h]
  unsigned int v51; // [rsp+108h] [rbp+10h]
  unsigned int v52; // [rsp+118h] [rbp+20h]

  Pitch = 0;
  v6 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    WdLogSingleEntry1(1LL, 741LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pOrigCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*(_BYTE *)&a2->Flags.0 & 4) == 0 && (*(_BYTE *)&a3->Flags.0 & 2) == 0 )
  {
    WdLogSingleEntry1(1LL, 742LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pNewCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      742LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)v6 + 5);
  v8 = *((_DWORD *)v6 + 4);
  v9 = 0;
  v10 = 4 * v8;
  v11 = (a2->Flags.Value & 4) != 0;
  v12 = (a3->Flags.Value & 4) != 0;
  v49 = v7;
  v13 = (float)(int)a2->Width / (float)(int)v8;
  v14 = (float)(int)a2->Height / (float)(int)v7;
  if ( v7 )
  {
    do
    {
      v15 = 0;
      if ( v8 )
      {
        v16 = (float)v9 * v14;
        v48 = v10 * v9;
        v17 = (int)v16;
        do
        {
          v18 = (float)v15 * v13;
          v19 = (int)v18;
          if ( v17 != a2->Height - 1 )
            Pitch = a2->Pitch;
          v20 = (char *)a2->pPixels + (unsigned int)(4 * v19) + (unsigned __int64)(a2->Pitch * v17);
          v44 = Pitch;
          v21 = a2->Width - 1 != v19 ? 4 : 0;
          v46 = v21;
          v45 = &v20[v21 + Pitch];
          v52 = *(_DWORD *)&v20[v21];
          v22 = v18 - (float)v19;
          v51 = *(_DWORD *)&v20[Pitch];
          v23 = v16 - (float)v17;
          v24 = (float)((float)(1.0 - v23) * v22) * 256.0;
          v25 = (float)((float)(1.0 - v23) * (float)(1.0 - v22)) * 256.0;
          v26 = (float)((float)(1.0 - v22) * v23) * 256.0;
          v27 = (float)(v23 * v22) * 256.0;
          v47 = (int)v26;
          v28 = (int)v24;
          v29 = Pitch;
          v30 = (int)v25;
          v31 = (unsigned __int8)((unsigned __int16)(v30 * (unsigned __int8)*(_DWORD *)v20
                                                   + v28 * (unsigned __int8)v52
                                                   + v47 * (unsigned __int8)v51
                                                   + (int)v27 * (unsigned __int8)*(_DWORD *)v45) >> 8) | ((_WORD)v30 * (unsigned __int8)v20[1] + (_WORD)v28 * (unsigned __int8)v20[v46 + 1] + (_WORD)v47 * (unsigned __int8)v20[v44 + 1] + (unsigned __int16)(int)v27 * (unsigned __int8)v45[1]) & 0xFF00 | ((v30 * (unsigned __int8)v20[2] + v28 * (unsigned __int8)v20[v46 + 2] + v47 * (unsigned __int8)v20[v29 + 2] + (int)v27 * (unsigned __int8)v45[2]) << 8) & 0xFF0000;
          if ( v12 )
          {
            v32 = v31 | ((((_WORD)v30 * (unsigned __int8)v20[3]
                         + (_WORD)v28 * (unsigned __int8)v20[v46 + 3]
                         + (_WORD)v47 * (unsigned __int8)v20[v44 + 3]
                         + (unsigned __int16)(int)v27 * (unsigned __int8)v45[3]) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( v32 >= 0x1000000 )
            {
              v33 = v31 & 0xFFFF00FF | ((((_WORD)v30 * (unsigned __int8)v20[3]
                                        + (_WORD)v28 * (unsigned __int8)v20[v46 + 3]
                                        + (_WORD)v47 * (unsigned __int8)v20[v44 + 3]
                                        + (unsigned __int16)(int)v27 * (unsigned __int8)v45[3]) & 0x8000) != 0
                                      ? 0xFF000000
                                      : 0) | (((v52 & (v52 >> 8) | *(_DWORD *)v20 & (*(_DWORD *)v20 >> 8) | *(_DWORD *)v45 & (*(_DWORD *)v45 >> 8) | v51 & (v51 >> 8)) & 0xFFFF0000) != 0
                                            ? 0xFF00
                                            : 0);
              v32 = ((unsigned __int8)(v33 ^ BYTE1(v33)) ^ v33 ^ (((unsigned __int8)(v33 ^ BYTE1(v33)) ^ v33) << 16)) & 0xFF0000 ^ (unsigned __int8)(v33 ^ BYTE1(v33)) ^ v33;
            }
          }
          else
          {
            v34 = (unsigned __int8)v45[3];
            v35 = (unsigned __int8)v20[v44 + 3];
            v36 = (unsigned __int8)v20[v46 + 3];
            v37 = (unsigned __int8)v20[3];
            if ( v11 )
              v38 = (int)v24 * (255 - v36) + (int)v25 * (255 - v37) + (int)v27 * (255 - v34) + (int)v26 * (255 - v35);
            else
              v38 = (int)v27 * v34 + (int)v26 * v35 + (int)v24 * v36 + (int)v25 * v37;
            v32 = v31 | (v38 << 16) & 0xFF000000;
          }
          v39 = (char *)a3->pPixels + (unsigned int)(4 * v15++);
          *(_DWORD *)&v39[v48] = v32;
          Pitch = 0;
        }
        while ( v15 < v8 );
        v7 = v49;
        v10 = 4 * v8;
      }
      ++v9;
    }
    while ( v9 < v7 );
    v6 = a1;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v10;
  v40 = *((_DWORD *)v6 + 2);
  a3->Width = v8;
  a3->Height = v7;
  v41 = (v40 + *(_DWORD *)v6 * a2->XHot - 1) / v40;
  v42 = *((_DWORD *)v6 + 3);
  a3->XHot = v41;
  a3->YHot = (v42 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v42;
  return 0LL;
}
