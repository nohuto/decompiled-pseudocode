/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0142A20
 * Callers:
 *     bDynamicModeChange @ 0x1C00BAA30 (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C000EF80 (HmgSafeNextObjt.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005DD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00CA238 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C014C230 (GreIntersectVisRect.c)
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
    if ( (*(_DWORD *)(Objt + 36) & 0x2000) != 0 || *(struct SURFACE **)(Objt + 496) != a1 )
      goto LABEL_10;
    DC::AcquireDcVisRgnShared((DC *)Objt, (__int64)&v6);
    if ( *(_QWORD *)(Objt + 1144) )
      break;
    if ( v7 )
    {
      v7 = 0;
      CPushLock::ReleaseLock((CPushLock *)(v6 + 1112));
    }
LABEL_10:
    Objt = HmgSafeNextObjt((unsigned int)v4, 1);
    if ( !Objt )
      return 1LL;
  }
  if ( v7 )
  {
    v7 = 0;
    CPushLock::ReleaseLock((CPushLock *)(v6 + 1112));
  }
  if ( (unsigned int)GreIntersectVisRect(v4, cy) )
    goto LABEL_10;
  return 0LL;
}
