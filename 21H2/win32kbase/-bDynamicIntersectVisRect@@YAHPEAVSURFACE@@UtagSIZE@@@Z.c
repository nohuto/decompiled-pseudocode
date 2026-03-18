/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016F6D4
 * Callers:
 *     bDynamicModeChange @ 0x1C00C9250 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0061900 (HmgSafeNextObjt.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C00D9428 (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00D961C (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00DA978 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  __int64 Objt; // rdi
  HDC v4; // rsi
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+38h] [rbp-20h]
  LONG cy; // [rsp+6Ch] [rbp+14h]

  cy = a2.cy;
  Objt = HmgSafeNextObjt(0, 1);
  if ( !Objt )
    return 1LL;
  while ( 1 )
  {
    v4 = *(HDC *)Objt;
    if ( (unsigned int)Feature_3093221692__private_IsEnabled() )
    {
      if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 || *(struct SURFACE **)(Objt + 496) != a1 )
        goto LABEL_15;
      DC::AcquireDcVisRgnShared((DC *)Objt, (__int64)&v6);
      if ( !*(_QWORD *)(Objt + 1136) )
      {
        if ( v7 )
        {
          v7 = 0;
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v6 + 1112));
        }
        goto LABEL_15;
      }
      if ( v7 )
      {
        v7 = 0;
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v6 + 1112));
      }
    }
    else if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0
           || *(struct SURFACE **)(Objt + 496) != a1
           || !*(_QWORD *)(Objt + 1136) )
    {
      goto LABEL_15;
    }
    if ( !(unsigned int)GreIntersectVisRect(v4, cy) )
      return 0LL;
LABEL_15:
    Objt = HmgSafeNextObjt((unsigned int)v4, 1);
    if ( !Objt )
      return 1LL;
  }
}
