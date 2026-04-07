/*
 * XREFs of ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180081DAC
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180082D38 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026690 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028660 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A9A8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x18002C23C (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B520 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x180083CC0 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x180084EC0 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_AddImmersiveBackground(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct CAccent *v3; // rsi
  CVisual *v4; // rdi
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r15
  struct tagRECT *v9; // rdx
  char v10; // r12
  unsigned int v11; // r14d
  int v12; // eax
  int updated; // eax
  int v14; // eax
  int inserted; // eax
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  struct tagPOINT v21; // [rsp+30h] [rbp-59h] BYREF
  CVisual *v22; // [rsp+38h] [rbp-51h] BYREF
  struct CAccent *v23; // [rsp+40h] [rbp-49h] BYREF
  __int64 v24; // [rsp+48h] [rbp-41h]
  __m256i v25; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT v26; // [rsp+70h] [rbp-19h] BYREF
  __m128i v27; // [rsp+80h] [rbp-9h] BYREF
  __int128 v28; // [rsp+90h] [rbp+7h] BYREF

  v24 = a2;
  v2 = 0;
  v3 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  if ( !CLivePreview::_ShouldAddImmersiveChrome((CLivePreview *)a1) )
    return v2;
  v7 = *(_QWORD *)(a1 + 536);
  v8 = 0LL;
  if ( !*(_DWORD *)(v7 + 40) )
    return v2;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      v9 = 0LL;
    else
      v9 = (struct tagRECT *)(*(_QWORD *)(v7 + 16) + 24 * v8);
    v10 = 0;
    v11 = 0;
    v26 = *v9;
    v28 = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
    {
      while ( (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(*(_QWORD *)v6 + 16LL * v11, &v26, &v28) != 2 )
      {
        v6 = v24;
        if ( ++v11 >= *(_DWORD *)(v24 + 24) )
          goto LABEL_11;
      }
      v10 = 1;
    }
LABEL_11:
    if ( v10 )
      goto LABEL_23;
    v12 = CAccent::Create(&v23);
    v2 = v12;
    if ( v12 < 0 )
      break;
    v3 = v23;
    v27.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v27.m128i_i32[0] = 1;
    updated = CAccent::UpdateAccentPolicy(v23, &v26, &v27, 0LL);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x444u);
      goto LABEL_31;
    }
    v14 = CVisual::Create(&v22);
    v2 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x446u);
      v4 = v22;
      goto LABEL_31;
    }
    v4 = v22;
    v21.x = v26.left;
    v21.y = v26.top;
    CVisual::SetOffset((struct tagPOINT *)v22, &v21);
    inserted = VisualCollection::InsertRelative((CVisual *)((char *)v4 + 32), v3, 0LL, 0, 1);
    v2 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x44Cu);
      goto LABEL_31;
    }
    v16 = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 488) + 32LL), v4, 0LL, 0, 1);
    v2 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x44Eu);
      goto LABEL_31;
    }
    v25.m256i_i64[0] = (__int64)v4;
    v25.m256i_i64[3] = 0LL;
    v17 = *(unsigned int *)(a1 + 456);
    *(struct tagRECT *)&v25.m256i_u64[1] = v26;
    v18 = v17 + 1;
    if ( (int)v17 + 1 >= (unsigned int)v17 )
    {
      if ( v18 > *(_DWORD *)(a1 + 452) )
      {
        v19 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 432, 0x20u, 1, &v25);
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
      }
      else
      {
        *(__m256i *)(32 * v17 + *(_QWORD *)(a1 + 432)) = v25;
        *(_DWORD *)(a1 + 456) = v18;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
LABEL_23:
    v7 = *(_QWORD *)(a1 + 536);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      goto LABEL_31;
    v6 = v24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x440u);
  v3 = v23;
LABEL_31:
  if ( (v2 & 0x80000000) == 0 )
  {
LABEL_34:
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else if ( v4 )
  {
    VisualCollection::RemoveAll((CVisual *)((char *)v4 + 32));
    goto LABEL_34;
  }
  if ( v3 )
    CBaseObject::Release(v3);
  return v2;
}
