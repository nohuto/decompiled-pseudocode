/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C0061C30
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C00617A0 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C016F6B0 (pProcessDfbSurfaces.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     bDfbSurfacesMigrated @ 0x1C00626A0 (bDfbSurfacesMigrated.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  HSEMAPHORE v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v9 = 0LL;
  if ( a3 && (!qword_1C029ADD8 || !(unsigned int)qword_1C029ADD8(v8)) )
    goto LABEL_6;
  if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    goto LABEL_5;
  v11 = *(_QWORD *)(a1 + 48);
  if ( !_bittest((const signed __int32 *)(v11 + 2096), 0x10u)
    || !a5
    || !_bittest((const signed __int32 *)(a5 + 2096), 0x10u) )
  {
    if ( !_bittest((const signed __int32 *)(v11 + 40), 0x11u) )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( _bittest((const signed __int32 *)(v12 + 40), 0x11u) )
      {
        if ( a4 )
        {
          v9 = 1LL;
          goto LABEL_6;
        }
        if ( qword_1C029B050 && (int)qword_1C029B050(v12) >= 0 )
        {
          if ( qword_1C029B058 )
          {
            v13 = qword_1C029B058(*(_QWORD *)(a1 + 144));
            goto LABEL_26;
          }
          goto LABEL_27;
        }
        goto LABEL_6;
      }
    }
LABEL_5:
    v9 = pProcessDfbSurfacesInternal((struct SURFACE *)a1);
    goto LABEL_6;
  }
  if ( !_bittest((const signed __int32 *)(v11 + 40), 0x11u) || !_bittest((const signed __int32 *)(a5 + 40), 0x11u) )
  {
    bDfbSurfacesMigrated(a5, a1);
    goto LABEL_5;
  }
  if ( qword_1C029B060 && (int)qword_1C029B060(v8) >= 0 )
  {
    if ( qword_1C029B068 )
    {
      v13 = qword_1C029B068(a1 + 24, a5);
LABEL_26:
      LODWORD(v9) = v13;
    }
LABEL_27:
    v9 = (int)v9;
  }
LABEL_6:
  SEMOBJ::vUnlock((PERESOURCE *)&v14);
  return v9;
}
