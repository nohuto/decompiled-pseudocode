/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1803DA6E0
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1803D9C00 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x1803DAAE8 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x1803DC798 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x1803DCAF8 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        struct Windows::Foundation::Rect *a2,
        __int128 *a3,
        __int128 *a4,
        int *a5,
        __int64 a6,
        char a7,
        struct Windows::Foundation::Rect *a8,
        _BYTE *a9,
        _BYTE *a10)
{
  float v13; // xmm0_4
  int v14; // eax
  char v15; // si
  __int128 v16; // xmm0
  int ViewRectRelativeToInside; // ebx
  __int64 v18; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  KeyboardHosting::ViewRectProvider *v29; // rcx
  int v30; // r14d
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  KeyboardHosting::ViewRectProvider *v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __m128 v47; // xmm0
  __int128 v51; // [rsp+48h] [rbp-69h] BYREF
  __int128 v52; // [rsp+58h] [rbp-59h] BYREF
  __int128 v53; // [rsp+68h] [rbp-49h] BYREF
  __int128 v54; // [rsp+78h] [rbp-39h] BYREF
  __int128 v55; // [rsp+88h] [rbp-29h]
  __int128 v56; // [rsp+98h] [rbp-19h]
  __int64 v57; // [rsp+A8h] [rbp-9h]
  int v58; // [rsp+B0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+2Fh]

  v13 = (float)a5[2];
  v14 = a5[1];
  *(_QWORD *)a8 = 0LL;
  *((float *)a8 + 2) = v13;
  *((float *)a8 + 3) = (float)v14;
  *a9 = 0;
  *a10 = 0;
  if ( *((_BYTE *)a5 + 36) || (v15 = 0, *((_BYTE *)a5 + 37)) )
    v15 = 1;
  switch ( *a5 )
  {
    case 1:
      v54 = *(_OWORD *)a5;
      v56 = *((_OWORD *)a5 + 2);
      v16 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v58 = a5[14];
      v51 = v16;
      v55 = *((_OWORD *)a5 + 1);
      v57 = *((_QWORD *)a5 + 6);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v54, &v51, a8);
      if ( ViewRectRelativeToInside < 0 )
      {
        v18 = 42LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectRelativeToInside);
        return (unsigned int)ViewRectRelativeToInside;
      }
      return 0LL;
    case 2:
      v20 = *(_OWORD *)a2;
      v51 = *a3;
      v52 = v20;
      v21 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
      v22 = *(_OWORD *)a5;
      v58 = a5[14];
      v53 = v21;
      v23 = *((_OWORD *)a5 + 1);
      v54 = v22;
      v24 = *((_OWORD *)a5 + 2);
      v55 = v23;
      v57 = *((_QWORD *)a5 + 6);
      v56 = v24;
      ViewRectRelativeToInside = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, struct Windows::Foundation::Rect *, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                                   &v54,
                                   &v53,
                                   &v52,
                                   &v51,
                                   a7,
                                   a8,
                                   a9,
                                   a10);
      if ( ViewRectRelativeToInside < 0 )
      {
        v18 = 47LL;
        goto LABEL_7;
      }
      return 0LL;
    case 3:
      v25 = *a3;
      v26 = *(_OWORD *)a5;
      v58 = a5[14];
      v53 = v25;
      v27 = *((_OWORD *)a5 + 1);
      v54 = v26;
      v28 = *((_OWORD *)a5 + 2);
      v55 = v27;
      v57 = *((_QWORD *)a5 + 6);
      v56 = v28;
      v30 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v54, &v53, a8);
      if ( v30 < 0 )
      {
        v31 = 52LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v31,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)v30);
        return (unsigned int)v30;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v29, a8, a2) )
      {
        v32 = *(_OWORD *)a2;
        v53 = *a3;
        v52 = v32;
        v33 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + a1 + 120);
        v34 = *(_OWORD *)a5;
        v58 = a5[14];
        v51 = v33;
        v35 = *((_OWORD *)a5 + 1);
        v54 = v34;
        v36 = *((_OWORD *)a5 + 2);
        v55 = v35;
        v57 = *((_QWORD *)a5 + 6);
        v56 = v36;
        ViewRectRelativeToInside = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, struct Windows::Foundation::Rect *, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                                     &v54,
                                     &v51,
                                     &v52,
                                     &v53,
                                     a7,
                                     a8,
                                     a9,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v18 = 58LL;
          goto LABEL_7;
        }
      }
      break;
    case 5:
      v37 = *a4;
      v38 = *(_OWORD *)a5;
      v58 = a5[14];
      v53 = v37;
      v39 = *((_OWORD *)a5 + 1);
      v54 = v38;
      v40 = *((_OWORD *)a5 + 2);
      v55 = v39;
      v57 = *((_QWORD *)a5 + 6);
      v56 = v40;
      v30 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v54, &v53, a8);
      if ( v30 < 0 )
      {
        v31 = 63LL;
        goto LABEL_14;
      }
      if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v41, a8, a2) )
      {
        v42 = *(_OWORD *)a2;
        v53 = *a3;
        v52 = v42;
        v43 = *(_OWORD *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120);
        v44 = *(_OWORD *)a5;
        v58 = a5[14];
        v51 = v43;
        v45 = *((_OWORD *)a5 + 1);
        v54 = v44;
        v46 = *((_OWORD *)a5 + 2);
        v55 = v45;
        v57 = *((_QWORD *)a5 + 6);
        v56 = v46;
        ViewRectRelativeToInside = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int128 *, __int128 *, char, struct Windows::Foundation::Rect *, _BYTE *, _BYTE *))KeyboardHosting::ViewRectHelper::GetViewRectNearCaret)(
                                     &v54,
                                     &v51,
                                     &v52,
                                     &v53,
                                     a7,
                                     a8,
                                     a9,
                                     a10);
        if ( ViewRectRelativeToInside < 0 )
        {
          v18 = 69LL;
          goto LABEL_7;
        }
      }
      break;
    default:
      v47 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFA0uLL) + a1 + 120));
      *(_DWORD *)a8 = v47.m128_i32[0];
      *((float *)a8 + 1) = (float)((float)(_mm_shuffle_ps(v47, v47, 255).m128_f32[0]
                                         + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
                                 - (float)v14)
                         - (float)a5[4];
      break;
  }
  return 0LL;
}
