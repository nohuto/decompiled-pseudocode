/*
 * XREFs of ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E6A18
 * Callers:
 *     ?GetBounds@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119F10 (-GetBounds@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int128 *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(_QWORD *)(a1 - 32);
  if ( v5 )
  {
    v8 = (__int64 (__fastcall ***)(_QWORD, __int64))(*(int *)(*(_QWORD *)(v5 + 64) + 8LL) + v5 + 64);
    v9 = (**v8)(v8, a2);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x72u, 0LL);
    }
    else
    {
      v11 = *(_QWORD *)(a1 - 40);
      if ( v11 )
      {
        v24 = 0LL;
        v12 = (__int64 (__fastcall ***)(_QWORD, __int64, __int128 *))(v11 + 64 + *(int *)(*(_QWORD *)(v11 + 64) + 8LL));
        v13 = (**v12)(v12, a2, &v24);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x77u, 0LL);
        }
        else
        {
          v15 = *a3;
          v16 = *(float *)&v24;
          if ( *(float *)&v24 > *a3 )
          {
            *(_DWORD *)a3 = v24;
            v15 = v16;
          }
          v17 = a3[1];
          v18 = *((float *)&v24 + 1);
          if ( *((float *)&v24 + 1) > v17 )
          {
            a3[1] = *((float *)&v24 + 1);
            v17 = v18;
          }
          v19 = a3[2];
          v20 = *((float *)&v24 + 2);
          if ( v19 > *((float *)&v24 + 2) )
          {
            a3[2] = *((float *)&v24 + 2);
            v19 = v20;
          }
          v21 = a3[3];
          v22 = *((float *)&v24 + 3);
          if ( v21 > *((float *)&v24 + 3) )
          {
            a3[3] = *((float *)&v24 + 3);
            v21 = v22;
          }
          if ( v19 <= v15 || v21 <= v17 )
          {
            a3[3] = 0.0;
            a3[2] = 0.0;
            a3[1] = 0.0;
            *a3 = 0.0;
          }
        }
      }
    }
  }
  else
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  return v4;
}
