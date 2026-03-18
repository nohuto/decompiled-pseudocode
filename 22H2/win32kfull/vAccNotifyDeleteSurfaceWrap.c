/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C0096FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C001DCEC (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C02A32DC (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(SURFACE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  Gre::Base *v4; // rcx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-19h] BYREF
  __int64 v9; // [rsp+30h] [rbp-9h]
  int v10; // [rsp+38h] [rbp-1h]
  _QWORD v11[2]; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v13; // [rsp+78h] [rbp+3Fh]
  __int64 v14; // [rsp+80h] [rbp+47h]

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  if ( !*(_QWORD *)(v2 + 8608) && !*(_QWORD *)(v2 + 23376) )
    return;
  v3 = *((_QWORD *)this + 6);
  if ( !v3 )
  {
    if ( this == SURFACE::pdibDefault )
      return;
    if ( (unsigned int)SURFACE::bStockSurface(this) )
      return;
    v7 = *((_DWORD *)this + 28);
    if ( (v7 & 0x40000) != 0 || (v7 & 0x4000000) == 0 )
      return;
LABEL_23:
    vAccNotify((struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)), 8u, 0LL);
    return;
  }
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v11);
  v14 = 0LL;
  v13 = 0LL;
  v11[0] = 0LL;
  v5 = *(_DWORD *)(v3 + 40);
  v8 = 0LL;
  v10 = 1;
  if ( (v5 & 1) != 0 )
  {
    Gre::Base::Globals(v4);
    *(_QWORD *)&v8 = *(_QWORD *)(v3 + 48);
    v9 = v3;
    GreAcquireSemaphore(v8);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v8, 11LL);
  }
  v6 = *(_DWORD *)(v3 + 40);
  if ( (v6 & 0x20000000) == 0 && !_bittest((const signed __int32 *)(v3 + 2096), 0xFu) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v8);
    return;
  }
  if ( (v6 & 0x20000) != 0
    || !_bittest((const signed __int32 *)(v3 + 2096), 0xFu)
    || (*((_DWORD *)this + 28) & 0x400000) == 0
    || !*((_QWORD *)this + 3) )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v8);
    if ( v11[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v11);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
    goto LABEL_23;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v8);
  if ( v11[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
}
