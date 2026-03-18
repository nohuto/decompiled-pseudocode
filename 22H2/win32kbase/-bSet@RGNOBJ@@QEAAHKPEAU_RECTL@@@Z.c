/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003C880 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C007CEAC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // esi
  int v7; // r14d
  int right; // ecx
  LONG top; // edx
  LONG bottom; // r8d
  unsigned int v12; // r14d
  unsigned int v13; // edi
  PVOID v14; // [rsp+20h] [rbp-10h] BYREF
  PVOID v15; // [rsp+28h] [rbp-8h] BYREF
  PVOID v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  v4 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
  v16 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  if ( !v14 || !v16 )
    goto LABEL_21;
  v6 = 1;
  if ( (unsigned int)v4 >= 0x14 )
  {
    v15 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
    v12 = (unsigned int)v4 >> 1;
    v13 = v4 - ((unsigned int)v4 >> 1);
    if ( v15
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, v12, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v16, v13, &a3[v12]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v14, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v15);
      goto LABEL_14;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v15);
LABEL_21:
    v6 = 0;
    goto LABEL_14;
  }
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    do
    {
      right = a3->right;
      if ( a3->left < right )
      {
        top = a3->top;
        bottom = a3->bottom;
        if ( top < bottom && a3->left >= -134217728 && right <= 0x7FFFFFF && top >= -134217728 && bottom <= 0x7FFFFFF )
        {
          if ( v7 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v14, a3);
            RGNOBJ::iCombine((RGNOBJ *)&v16, this, (struct RGNOBJ *)&v14, 2);
            RGNOBJ::vSwap(this, (struct RGNOBJ *)&v16);
          }
          else
          {
            RGNOBJ::vSet(this, a3);
            v7 = 1;
          }
        }
      }
      ++a3;
      --v4;
    }
    while ( v4 );
  }
LABEL_14:
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v16);
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v14);
  return v6;
}
