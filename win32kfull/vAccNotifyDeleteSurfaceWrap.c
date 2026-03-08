/*
 * XREFs of vAccNotifyDeleteSurfaceWrap @ 0x1C00CCD30
 * Callers:
 *     <none>
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00271A0 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C02A5A2C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 */

void __fastcall vAccNotifyDeleteSurfaceWrap(SURFACE *this)
{
  Gre::Base *v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  __int128 v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+4Ch] [rbp-24h]
  __int16 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+60h] [rbp-10h]

  v2 = *(Gre::Base **)(SGDGetSessionState(this) + 32);
  if ( *((_QWORD *)v2 + 1076) || *((_QWORD *)v2 + 2922) )
  {
    v3 = *((_QWORD *)this + 6);
    if ( v3 )
    {
      v11 = 0;
      v12 = 0;
      v15 = 0LL;
      v14 = 0LL;
      v10 = 0LL;
      v4 = *(_DWORD *)(v3 + 40);
      v13 = 256;
      v7 = 0LL;
      v9 = 1;
      if ( (v4 & 1) != 0 )
      {
        Gre::Base::Globals(v2);
        *(_QWORD *)&v7 = *(_QWORD *)(v3 + 48);
        v8 = v3;
        GreAcquireSemaphore(v7);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v7, 11LL);
      }
      v5 = *(_DWORD *)(v3 + 40);
      if ( (v5 & 0x20000000) == 0 && !_bittest((const signed __int32 *)(v3 + 2096), 0xFu) )
      {
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v7);
        return;
      }
      if ( (v5 & 0x20000) == 0
        && _bittest((const signed __int32 *)(v3 + 2096), 0xFu)
        && (*((_DWORD *)this + 28) & 0x400000) != 0
        && *((_QWORD *)this + 3) )
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v7);
        if ( v10 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v10);
        return;
      }
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v7);
      if ( v10 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v10);
    }
    else
    {
      if ( this == SURFACE::pdibDefault )
        return;
      if ( (unsigned int)SURFACE::bStockSurface(this) )
        return;
      v6 = *((_DWORD *)this + 28);
      if ( (v6 & 0x40000) != 0 || (v6 & 0x4000000) == 0 )
        return;
    }
    vAccNotify((struct _SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)), 8u, 0LL);
  }
}
