/*
 * XREFs of ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020CA04
 * Callers:
 *     ?GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6340 (-GetBounds@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTextVisualContent::GetBounds(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, __int64, int *); // rcx
  int v11; // esi
  __int64 *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, __int64, int *); // rcx
  __int64 *v16; // rbx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 (__fastcall ***v21)(_QWORD, __int64, int *); // rcx
  int v22; // eax
  unsigned int v23; // ebp
  int v24[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)a3 = 0;
  v6 = *(_QWORD **)(a1 - 32);
  v7 = (__int64 *)v6[77];
  v8 = (__int64 *)v6[78];
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *v7;
      *(_OWORD *)v24 = 0LL;
      v10 = (__int64 (__fastcall ***)(_QWORD, __int64, int *))(v9 + 56 + *(int *)(*(_QWORD *)(v9 + 56) + 8LL));
      v11 = (**v10)(v10, a2, v24);
      if ( v11 < 0 )
        break;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v24);
      if ( ++v7 == v8 )
      {
        v6 = *(_QWORD **)(a1 - 32);
        goto LABEL_5;
      }
    }
    v18 = 102LL;
    goto LABEL_11;
  }
LABEL_5:
  v12 = (__int64 *)v6[83];
  v13 = (__int64 *)v6[84];
  if ( v12 != v13 )
  {
    while ( 1 )
    {
      v14 = *v12;
      *(_OWORD *)v24 = 0LL;
      v15 = (__int64 (__fastcall ***)(_QWORD, __int64, int *))(v14 + 56 + *(int *)(*(_QWORD *)(v14 + 56) + 8LL));
      v11 = (**v15)(v15, a2, v24);
      if ( v11 < 0 )
        break;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v24);
      if ( ++v12 == v13 )
      {
        v6 = *(_QWORD **)(a1 - 32);
        goto LABEL_9;
      }
    }
    v18 = 110LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
LABEL_9:
  v16 = (__int64 *)v6[80];
  v17 = (__int64 *)v6[81];
  while ( 1 )
  {
    if ( v16 == v17 )
      return 0LL;
    v20 = *v16;
    *(_OWORD *)v24 = 0LL;
    v21 = (__int64 (__fastcall ***)(_QWORD, __int64, int *))(v20 + 56 + *(int *)(*(_QWORD *)(v20 + 56) + 8LL));
    v22 = (**v21)(v21, a2, v24);
    v23 = v22;
    if ( v22 < 0 )
      break;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a3, (float *)v24);
    ++v16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)v22);
  return v23;
}
