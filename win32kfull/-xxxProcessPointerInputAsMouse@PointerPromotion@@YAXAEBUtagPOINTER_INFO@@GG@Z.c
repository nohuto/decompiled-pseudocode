/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8
 * Callers:
 *     EditionProcessPointerInputAsMouse @ 0x1C0149630 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C014929E (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C01494D2 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01495BE (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F8C08 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?ClearAutoPromotion@@YAXXZ @ 0x1C01F8CA4 (-ClearAutoPromotion@@YAXXZ.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8D70 (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F8DFC (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01F900C (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01F9644 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F9678 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F99E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F9E6C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        PointerPromotion *this,
        const struct tagPOINTER_INFO *a2,
        __int16 a3)
{
  unsigned __int16 v4; // r12
  __int128 v5; // xmm1
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  unsigned __int16 v10; // si
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r14d
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // r8d
  unsigned __int16 v26; // dx
  unsigned __int16 v27[8]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v28; // [rsp+48h] [rbp-19h]
  __int128 v29; // [rsp+58h] [rbp-9h]
  __int128 v30; // [rsp+68h] [rbp+7h]
  __int128 v31; // [rsp+78h] [rbp+17h]
  __int128 v32; // [rsp+88h] [rbp+27h]
  unsigned int v33; // [rsp+C8h] [rbp+67h] BYREF

  v4 = (unsigned __int16)a2;
  v5 = *((_OWORD *)this + 2);
  MousePromotionEntry = 0LL;
  *(_OWORD *)v27 = *(_OWORD *)this;
  v7 = *((_OWORD *)this + 1);
  v29 = v5;
  v8 = *((_OWORD *)this + 4);
  v28 = v7;
  v9 = *((_OWORD *)this + 3);
  v31 = v8;
  v30 = v9;
  v32 = *((_OWORD *)this + 5);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v27, 4));
  v11 = SGDGetUserSessionState(this) + 16056;
  InputTraceLogging::Pointer::PromoteToMouse(_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v27, 8)));
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v27, 12));
  if ( (v13 & 0x2000) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v27) )
      goto LABEL_31;
    v13 = v27[6];
    v10 = v27[2];
  }
  if ( (v13 & 0x8000) != 0 )
  {
    v14 = SGDGetUserSessionState(v12);
    *(_DWORD *)(v14 + 16320) &= ~8u;
  }
  if ( v10 != *(_WORD *)v11 || (a3 & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v12) + 16320) & 2) != 0 )
      CancelAutoPromotion(v15);
    v16 = SGDGetUserSessionState(v15);
    *(_DWORD *)(v16 + 16320) &= ~8u;
    ResetMousePromotionInfo(v10);
  }
  v17 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v27, a3);
  if ( !v17 )
  {
    MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v27, v4, a3);
    if ( !MousePromotionEntry )
    {
      LOWORD(v18) = v27[4];
LABEL_24:
      if ( !MousePromotionEntry )
        goto LABEL_31;
      goto LABEL_25;
    }
  }
  v18 = *(_DWORD *)&v27[4];
  *(_QWORD *)(v11 + 248) = *((_QWORD *)&v28 + 1);
  *(_DWORD *)(v11 + 4) = v18;
  if ( MousePromotionEntry )
  {
    if ( (*(_DWORD *)(SGDGetUserSessionState(v12) + 16320) & 2) != 0 )
    {
      if ( (*(_DWORD *)(v11 + 264) & 4) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
      if ( (*(_DWORD *)(v11 + 264) & 0x10) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) |= 0x40u;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v11 + 128), MousePromotionEntry);
      if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
        ClearAutoPromotion(v12);
      goto LABEL_31;
    }
    v20 = SGDGetUserSessionState(v19);
    QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)(v20 + 16072), MousePromotionEntry);
  }
  if ( !v17 )
    goto LABEL_24;
LABEL_25:
  v33 = 0;
  if ( (*(_DWORD *)(SGDGetUserSessionState(v12) + 16320) & 8) != 0 )
  {
    v22 = SGDGetUserSessionState(v21);
    v23 = DetectPromotionType(0LL, *(const struct tagMOUSE_PROMOTION_ENTRY **)(v22 + 16080));
    if ( v23 != 0x10000000 )
    {
      v25 = v23;
      v26 = v18;
LABEL_30:
      PointerPromotion::xxxPromotePointer((PointerPromotion *)v27[2], v26, v25, v24);
    }
  }
  else if ( (unsigned int)WantDirectPromotion((const struct tagPOINTER_INFO *)v27, &v33) )
  {
    v25 = v33;
    v26 = v27[4];
    goto LABEL_30;
  }
LABEL_31:
  xxxProcessMousePromotionQueue(v12);
}
