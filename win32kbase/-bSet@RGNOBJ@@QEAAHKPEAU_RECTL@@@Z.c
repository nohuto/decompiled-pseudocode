/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 * Callees:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0019558 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0045140 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // esi
  int v7; // r14d
  int right; // ecx
  LONG top; // edx
  LONG bottom; // r8d
  unsigned int v12; // r14d
  unsigned int v13; // edi
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v3 = a2;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  if ( !v14 || !v16 )
    goto LABEL_21;
  v6 = 1;
  if ( (unsigned int)v3 >= 0x14 )
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v15, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
    v12 = (unsigned int)v3 >> 1;
    v13 = v3 - ((unsigned int)v3 >> 1);
    if ( v15
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v14, v12, a3)
      && (unsigned int)RGNOBJ::bSet((RGNOBJ *)&v16, v13, &a3[v12]) )
    {
      RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v14, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
      goto LABEL_14;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
LABEL_21:
    v6 = 0;
    goto LABEL_14;
  }
  v7 = 0;
  if ( (_DWORD)v3 )
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
      --v3;
    }
    while ( v3 );
  }
LABEL_14:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
  return v6;
}
