/*
 * XREFs of GreIntersectVisRect @ 0x1C0197D20
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0199130 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0041EF8 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C00427C4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0046798 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0046AF0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0056EF8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00A4D7C (-vStamp@REGION@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C00BAB10 (EngSetLastError.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00DDFD0 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0181D50 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C018277C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r12d
  REGION **v9; // rbx
  PVOID v11; // [rsp+28h] [rbp-61h] BYREF
  REGION *v12; // [rsp+30h] [rbp-59h] BYREF
  PVOID v13; // [rsp+38h] [rbp-51h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  char v16; // [rsp+58h] [rbp-31h]
  DC *v17[3]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v18[80]; // [rsp+78h] [rbp-11h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v17, a1);
  v9 = (REGION **)v17[0];
  if ( v17[0] )
  {
    v11 = (PVOID)*((_QWORD *)v17[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v11);
    DC::AcquireDcVisRgnExclusive((DC *)v9, (__int64)&v15);
    if ( (v18[24] & 1) != 0 )
    {
      v12 = v9[142];
      v14.left = a2;
      v14.top = a3;
      v14.right = a4;
      v14.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13, *((_DWORD *)v12 + 12));
      if ( v11 && v13 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v11, &v14);
        RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v13, 1) )
        {
          v9[142] = v12;
          REGION::vStamp(v12);
          DC::vReleaseRao((DC *)v9);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v11);
    }
    if ( v16 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v15 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ((struct _ERESOURCE *)v18);
  }
  DCOBJA::~DCOBJA((DCOBJA *)v17);
  return v5;
}
