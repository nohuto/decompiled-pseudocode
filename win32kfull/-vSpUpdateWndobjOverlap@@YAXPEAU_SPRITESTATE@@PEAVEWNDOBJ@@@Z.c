/*
 * XREFs of ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C02857B8
 * Callers:
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C028283C (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C0282E14 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02838A8 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C008C950 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C0281058 (-bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z.c)
 *     ?bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z @ 0x1C02817F8 (-bSpWndObjTrackedSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z @ 0x1C0282F08 (-vSpComputeClipEffective@@YAXPEAVSPRITE@@AEAVRGNOBJ@@@Z.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028A14C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall vSpUpdateWndobjOverlap(struct _SPRITESTATE *a1, struct EWNDOBJ *a2)
{
  _DWORD *v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rdi
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r14d
  struct RGNOBJ *v13; // r8
  unsigned int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+90h] [rbp+48h] BYREF
  struct _POINTL v19; // [rsp+98h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+60h] BYREF

  v2 = (_DWORD *)((char *)a2 + 184);
  if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a2 + 21) + 32LL);
    v6 = *(_QWORD *)(v5 + 48);
    if ( v6 )
    {
      if ( v5 == *(_QWORD *)(v6 + 2528) && v6 != *(_QWORD *)a1 )
        return;
    }
  }
  v15 = *((_QWORD *)a1 + 88);
  v17[0] = *((_QWORD *)a2 + 24);
  RGNOBJ::vSet((RGNOBJ *)&v15);
  for ( i = *((_QWORD *)a1 + 1); ; i = *(_QWORD *)(i + 24) )
  {
    if ( !i )
    {
      if ( (*v2 & 0x2000000) != 0 )
      {
        v14 = *v2 & 0xFDFFFFFF;
        *v2 = v14;
        if ( (v14 & 0x80u) != 0 )
        {
          v11 = 256LL;
          goto LABEL_44;
        }
      }
      goto LABEL_45;
    }
    if ( ((unsigned int)bIntersect((char *)a2 + 4, i + 80) || (*v2 & 0x200) != 0)
      && (RGNOBJ::bInside((struct EWNDOBJ *)((char *)a2 + 56), (struct _RECTL *)(i + 80)) == 2
       || (*v2 & 0x200) != 0 && v17[0] && RGNOBJ::bInside((RGNOBJ *)v17, (struct _RECTL *)(i + 80)) == 2) )
    {
      break;
    }
LABEL_39:
    ;
  }
  v8 = (*v2 & 0x200) == 0;
  v9 = *(_QWORD *)(i + 184);
  v21 = v9;
  if ( !v8 )
  {
    if ( (*(_DWORD *)i & 1) == 0
      && *(_QWORD *)(i + 72)
      && !(unsigned int)bSpWndObjTrackedSprite((struct SPRITE *)i)
      && (unsigned int)bSpSpriteOnTopOfWndObjInZ((struct SPRITE *)i, a2) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v18);
      if ( v20 && v16 && v18 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v16, (const struct _RECTL *const)(i + 80));
        v12 = 1;
        if ( v21 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v21, (struct RGNOBJ *)v17, 8u)
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v20) == 1
            || !RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v21)
            || (v19.x = -*(_DWORD *)(i + 80),
                v19.y = -*(_DWORD *)(i + 84),
                RGNOBJ::bOffset((RGNOBJ *)&v18, &v19),
                vSpComputeClipEffective((struct SPRITE *)i, (struct RGNOBJ *)&v18),
                (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v18) == 1) )
          {
            v12 = 0;
          }
          else
          {
            v19.x = -v19.x;
            v19.y = -v19.y;
            RGNOBJ::bOffset((RGNOBJ *)&v18, &v19);
          }
        }
        if ( !v21 || v12 == 1 )
        {
          v13 = (struct RGNOBJ *)&v16;
          if ( v21 )
            v13 = (struct RGNOBJ *)&v18;
          if ( RGNOBJ::bMerge((RGNOBJ *)&v20, (struct RGNOBJ *)&v15, v13, 0xEu) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v20, (struct RGNOBJ *)&v15);
            *((_QWORD *)a1 + 88) = v15;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
    }
    goto LABEL_39;
  }
  if ( v9 && RGNOBJ::bInside((RGNOBJ *)&v21, (struct _RECTL *)((char *)a2 + 4)) != 2 )
    goto LABEL_39;
  if ( (*v2 & 0x2000000) == 0 )
  {
    v10 = *v2 | 0x2000000;
    *v2 = v10;
    if ( (v10 & 0x80u) != 0 )
    {
      v11 = 128LL;
LABEL_44:
      (*(void (__fastcall **)(struct EWNDOBJ *, __int64))(*((_QWORD *)a2 + 21) + 40LL))(a2, v11);
    }
  }
LABEL_45:
  if ( (*v2 & 0x200) != 0 )
  {
    vUpdateClientRgnOnSpriteOverlap(a2, (struct RGNOBJ *)&v15);
    *((_QWORD *)a1 + 88) = v15;
  }
}
