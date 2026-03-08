/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F9E6C
 * Callers:
 *     EditionPromotePointer @ 0x1C0149650 (EditionPromotePointer.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C01494D2 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01F8F5C (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1C01F9064 (-HasPendingPromotion@@YAHXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F93F8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01F9854 (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F99E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

__int64 __fastcall PointerPromotion::xxxPromotePointer(PointerPromotion *this, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v4; // si
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v10; // rdi
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ecx
  int v15; // r8d
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v21[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+40h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v23; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0LL;
  v21[0] = 0LL;
  v4 = (unsigned __int16)this;
  v22 = a3;
  InputTraceLogging::Pointer::PromoteToMouse(a2);
  if ( !(unsigned int)ValidatePointerPromotion(v4, a2, &v22, &v23, v21) )
    return 0LL;
  v7 = SGDGetUserSessionState(v6);
  if ( !HasPendingPromotion(v8) )
  {
LABEL_11:
    v10 = v23;
    v17 = v22;
LABEL_12:
    if ( v17 == 0x10000000 )
    {
      v18 = SGDGetUserSessionState(v9);
      *(_DWORD *)(v18 + 16320) |= 8u;
      return 1LL;
    }
    else
    {
      v19 = PromotePointerInternal(v4, v17, v10, v21[0]);
      xxxProcessMousePromotionQueue(v20);
      return v19;
    }
  }
  v10 = v23;
  v11 = *((_DWORD *)v23 + 8);
  v12 = SGDGetUserSessionState(v9);
  if ( *(_WORD *)(v12 + 16280) != v4 || *(_DWORD *)(v12 + 16284) != v11 )
  {
    ForceCompletePendingPromotion(v13);
    v22 = a3;
    if ( (unsigned int)ValidatePointerPromotion(v4, a2, &v22, &v23, v21) )
      goto LABEL_11;
    return 0LL;
  }
  LOBYTE(v14) = v22;
  v15 = *(_DWORD *)(v7 + 16296);
  if ( (v22 & 0x80000) == 0 )
  {
    v9 = v22 & 0xFFFF00;
    v17 = v9 | ((v15 != 0) + 1) | (*(_DWORD *)(v7 + 16300) != 0 ? 50331648 : 0x1000000);
    goto LABEL_12;
  }
  if ( v15 )
    v14 = v22 >> 1;
  return v14 & 1;
}
