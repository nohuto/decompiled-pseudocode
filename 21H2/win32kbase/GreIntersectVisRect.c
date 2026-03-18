/*
 * XREFs of GreIntersectVisRect @ 0x1C0177FE0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016F6D4 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C001FD30 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00277CC (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     EngSetLastError @ 0x1C008B610 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00AB334 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D9320 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C016A2C8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C016AAA0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r12d
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v13; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  struct _RECTL *v15[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  DC *v19[6]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v20[112]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v19, a1);
  if ( v19[0] )
  {
    v16 = *((_QWORD *)v19[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v16);
    DC::AcquireDcVisRgnExclusive(v19[0], (__int64)&v17);
    if ( (v20[24] & 1) != 0 )
    {
      v13.left = a2;
      v13.top = a3;
      v13.right = a4;
      v12 = *((_QWORD *)v19[0] + 142);
      v13.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14, *(_DWORD *)(v12 + 80));
      if ( v15[0] && v14[0] )
      {
        RGNOBJ::vSet(v15, &v13);
        RGNOBJ::vCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)v15, (struct RGNOBJ *)v14, 1) )
        {
          *((_QWORD *)v19[0] + 142) = v12;
          *(_DWORD *)(v12 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          DC::vReleaseRao(v19[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
    }
    if ( (_BYTE)v18 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v17 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20, v9, v10);
  }
  DCOBJA::~DCOBJA((HDC **)v19);
  return v5;
}
