/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C00BE790
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C000EE10 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C013FC00 (pProcessDfbSurfaces.c)
 * Callees:
 *     bDfbSurfacesMigrated @ 0x1C001CB40 (bDfbSurfacesMigrated.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BE880 (pProcessDfbSurfacesInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(SURFACE *this, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  HSEMAPHORE v17; // [rsp+20h] [rbp-18h] BYREF

  v17 = ghsemDwmState;
  EngAcquireSemaphore(ghsemDwmState);
  v9 = 0LL;
  if ( a3 )
  {
    if ( !(qword_1C0255058 ? qword_1C0255058(v8) : 0) )
      goto LABEL_11;
  }
  if ( (*((_DWORD *)this + 29) & 1) == 0 )
    goto LABEL_10;
  v11 = *((_QWORD *)this + 6);
  if ( (*(_DWORD *)(v11 + 2128) & 0x10000) != 0 && a5 && (*(_DWORD *)(a5 + 2128) & 0x10000) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 && (*(_DWORD *)(a5 + 40) & 0x20000) != 0 )
    {
      if ( qword_1C02552E0 )
        v14 = qword_1C02552E0(v8);
      else
        v14 = -1073741637;
      if ( v14 >= 0 )
      {
        if ( qword_1C02552E8 )
        {
          v15 = qword_1C02552E8((char *)this + 24, a5);
LABEL_32:
          LODWORD(v9) = v15;
          goto LABEL_33;
        }
        goto LABEL_33;
      }
      goto LABEL_11;
    }
    bDfbSurfacesMigrated(a5, (__int64)this);
LABEL_10:
    v9 = pProcessDfbSurfacesInternal(this);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    goto LABEL_10;
  v12 = *(_QWORD *)(v11 + 24);
  if ( (*(_DWORD *)(v12 + 40) & 0x20000) == 0 )
    goto LABEL_10;
  if ( a4 )
  {
    v9 = 1LL;
  }
  else
  {
    if ( qword_1C02552D0 )
      v16 = qword_1C02552D0(v12);
    else
      v16 = -1073741637;
    if ( v16 >= 0 )
    {
      if ( qword_1C02552D8 )
      {
        v15 = qword_1C02552D8(*((_QWORD *)this + 18));
        goto LABEL_32;
      }
LABEL_33:
      v9 = (int)v9;
    }
  }
LABEL_11:
  SEMOBJ::vUnlock((PERESOURCE *)&v17);
  return v9;
}
