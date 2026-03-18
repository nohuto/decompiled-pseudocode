/*
 * XREFs of pProcessDfbSurfaces2 @ 0x1C015AAD0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C0035B30 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfaces @ 0x1C015AAA0 (pProcessDfbSurfaces.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     bDfbSurfacesMigrated @ 0x1C0159F50 (bDfbSurfacesMigrated.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC60 (pProcessDfbSurfacesInternal.c)
 */

__int64 __fastcall pProcessDfbSurfaces2(struct OBJECT *a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  HSEMAPHORE v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 72LL);
  EngAcquireSemaphore(v12);
  v8 = 0LL;
  if ( a3 && (!qword_1C0294468 || !(unsigned int)qword_1C0294468()) )
    goto LABEL_16;
  if ( (*((_DWORD *)a1 + 29) & 1) == 0 )
    goto LABEL_15;
  v9 = *((_QWORD *)a1 + 6);
  if ( _bittest((const signed __int32 *)(v9 + 2096), 0x10u)
    && a5
    && _bittest((const signed __int32 *)(a5 + 2096), 0x10u) )
  {
    if ( _bittest((const signed __int32 *)(v9 + 40), 0x11u) && _bittest((const signed __int32 *)(a5 + 40), 0x11u) )
    {
      if ( qword_1C02946F0 && (int)qword_1C02946F0() >= 0 )
      {
        if ( qword_1C02946F8 )
        {
          v10 = qword_1C02946F8(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL), a5);
LABEL_25:
          LODWORD(v8) = v10;
          goto LABEL_26;
        }
        goto LABEL_26;
      }
      goto LABEL_16;
    }
    bDfbSurfacesMigrated(a5, (__int64)a1);
LABEL_15:
    v8 = pProcessDfbSurfacesInternal(a1);
    goto LABEL_16;
  }
  if ( _bittest((const signed __int32 *)(v9 + 40), 0x11u)
    || !_bittest((const signed __int32 *)(*(_QWORD *)(v9 + 24) + 40LL), 0x11u) )
  {
    goto LABEL_15;
  }
  if ( a4 )
  {
    v8 = 1LL;
  }
  else if ( qword_1C02946E0 && (int)qword_1C02946E0() >= 0 )
  {
    if ( qword_1C02946E8 )
    {
      v10 = qword_1C02946E8(*((_QWORD *)a1 + 18));
      goto LABEL_25;
    }
LABEL_26:
    v8 = (int)v8;
  }
LABEL_16:
  SEMOBJ::vUnlock((PERESOURCE *)&v12);
  return v8;
}
