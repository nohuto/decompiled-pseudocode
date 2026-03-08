/*
 * XREFs of ?vSpAddOpaqueRects@@YAXJJJJJJAEAVRGNMEMOBJTMP@@0AEAVRGNOBJ@@@Z @ 0x1C02829B8
 * Callers:
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0282F08 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall vSpAddOpaqueRects(
        LONG a1,
        LONG a2,
        LONG a3,
        LONG a4,
        LONG a5,
        int a6,
        struct RGNMEMOBJTMP *a7,
        struct RGNMEMOBJTMP *a8,
        struct RGNOBJ *a9)
{
  LONG v9; // eax
  LONG v11; // ecx
  LONG v14; // eax
  LONG v15; // r13d
  struct _RECTL v17; // [rsp+28h] [rbp-18h] BYREF

  v9 = a3;
  v11 = a5;
  if ( a2 == a4 )
  {
    v17.left = a3;
    v14 = a2 + 1;
    goto LABEL_20;
  }
  if ( a3 )
  {
    v17.right = a5;
    v15 = a4 + 1;
    v17.bottom = a4 + 1;
    v17.left = a3;
    v17.top = a4;
    RGNOBJ::vSet(a8, &v17);
    if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
    v11 = a5;
    if ( a2 <= v15 )
      goto LABEL_17;
    v9 = a3;
  }
  else
  {
    if ( a2 <= a4 )
      goto LABEL_17;
    v15 = a4 + 1;
  }
  v17.left = 0;
  v17.right = v11;
  v17.bottom = a2;
  if ( !v9 )
    v15 = a4;
  v17.top = v15;
  RGNOBJ::vSet(a8, &v17);
  if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
    RGNOBJ::vSwap(a7, a9);
  else
    RGNOBJ::vSet(a7);
  v11 = a5;
LABEL_17:
  if ( a1 && a1 != v11 )
  {
    v17.left = 0;
    v14 = a2 + 1;
LABEL_20:
    v17.right = a1;
    v17.top = a2;
    v17.bottom = v14;
    RGNOBJ::vSet(a8, &v17);
    if ( RGNOBJ::bMerge(a7, a9, a8, 0xEu) )
      RGNOBJ::vSwap(a7, a9);
    else
      RGNOBJ::vSet(a7);
  }
}
