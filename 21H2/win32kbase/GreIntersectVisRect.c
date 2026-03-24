/*
 * XREFs of GreIntersectVisRect @ 0x1C014BF40
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C01426D0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C002AF00 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002B874 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002C0E0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0032A50 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00339F0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00348E0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0037940 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003796C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003B0A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0096970 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C009E670 (EngSetLastError.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00C8228 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013D1B4 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  struct _RECTL v13; // [rsp+30h] [rbp-D8h] BYREF
  REGION *v14[2]; // [rsp+40h] [rbp-C8h] BYREF
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
      v12 = *((_QWORD *)v19[0] + 143);
      v13.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15, v9, v10);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v14, *(_DWORD *)(v12 + 80));
      if ( v15[0] && v14[0] )
      {
        RGNOBJ::vSet(v15, &v13);
        RGNOBJ::vCopy((RGNOBJ *)v14, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)v15, (struct RGNOBJ *)v14, 1) )
        {
          *((_QWORD *)v19[0] + 143) = v12;
          *(_DWORD *)(v12 + 28) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
          DC::vReleaseRao(v19[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(v14);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((REGION **)v15);
    }
    if ( (_BYTE)v18 )
      CPushLock::ReleaseLock((CPushLock *)(v17 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  }
  DCOBJA::~DCOBJA((HDC **)v19);
  return v5;
}
