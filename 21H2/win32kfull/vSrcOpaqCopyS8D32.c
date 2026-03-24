/*
 * XREFs of vSrcOpaqCopyS8D32 @ 0x1C00C7B50
 * Callers:
 *     <none>
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z @ 0x1C00C80FC (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAU_BLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00C8320 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

void __fastcall vSrcOpaqCopyS8D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r13
  HSEMAPHORE v13; // rbx
  unsigned __int8 *v14; // r11
  _DWORD *v15; // r9
  unsigned __int8 *v17; // rdx
  _DWORD *i; // rax
  _BYTE v19[120]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  v22 = a6 - a5;
  memset(v19, 0, 0x40uLL);
  v13 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  if ( *(void **)a11 != hCacheCT || a10 != uBCacheCT || a9 != uFCacheCT || gulGamma != uGammaCacheCT )
  {
    vGetBlendInfo(4u, a11, a9, (struct _BLENDINFO *)v19);
    vClearTypeLookupTableLoop(4u, a11, (struct _BLENDINFO *)v19, a9, a10);
  }
  v14 = (unsigned __int8 *)(v12 + a1);
  v15 = (_DWORD *)(a4 + 4LL * a5);
  while ( a8 )
  {
    v17 = v14;
    for ( i = v15; i < &v15[v22]; ++i )
      *i = *((_DWORD *)&aulCacheCT + *v17++);
    --a8;
    v14 += a3;
    v15 = (_DWORD *)((char *)v15 + a7);
  }
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v13);
    GreReleaseSemaphoreInternal(v13);
  }
}
