/*
 * XREFs of ?bSpGetSpriteClipRgns@@YAHPEAUHDEV__@@AEAVRGNOBJAPI@@@Z @ 0x1C0280D60
 * Callers:
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027CAE0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall bSpGetSpriteClipRgns(_QWORD *a1, struct RGNOBJAPI *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 i; // rbx
  struct RGNOBJ *v7; // r8
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  __int64 v12; // [rsp+68h] [rbp+38h] BYREF

  if ( a1[11] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v12);
    v4 = *(_QWORD *)a2 == 0LL;
    v5 = a1[98];
    v11 = v5;
    if ( !v4 && v5 && v10 && v12 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v11);
      RGNOBJ::vSet((RGNOBJ *)&v10);
      RGNOBJ::vSet((RGNOBJ *)&v12);
      for ( i = a1[11]; ; i = *(_QWORD *)(i + 24) )
      {
        if ( !i )
        {
          RGNOBJAPI::bSwap(a2, (struct RGNOBJ *)&v11);
          a1[98] = v11;
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
          return 1LL;
        }
        if ( (*(_DWORD *)i & 1) == 0 )
        {
          if ( *(_QWORD *)(i + 72) )
          {
            v9 = *(_QWORD *)(i + 184);
            if ( !v9 )
              continue;
            v7 = (struct RGNOBJ *)&v9;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v12, (const struct _RECTL *const)(i + 80));
            v7 = (struct RGNOBJ *)&v12;
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)&v10, (struct RGNOBJ *)&v11, v7, 0xEu) )
            RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)&v10);
          else
            RGNOBJ::vSet((RGNOBJ *)&v10);
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  }
  return 0LL;
}
