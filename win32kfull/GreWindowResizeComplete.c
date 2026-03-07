__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // esi
  struct Gre::Base::SESSION_GLOBALS *v5; // r14
  Gre::Base *v6; // rcx
  struct PDEVOBJ *v7; // rdx
  Gre::Base *v8; // rcx
  struct DWMSPRITE *v9; // rbx
  int v10; // eax
  int v11; // r12d
  SFMLOGICALSURFACE *v12; // r15
  Gre::Base *v13; // rcx
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  __int64 v19; // [rsp+28h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  int v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-28h]
  int v25; // [rsp+5Ch] [rbp-24h]
  __int16 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  char v29; // [rsp+C0h] [rbp+40h] BYREF
  struct DWMSPRITE *v30; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  v18 = *((_QWORD *)v5 + 15);
  GreAcquireSemaphore(v18);
  if ( IsDwmActive(v6) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v29, v7, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( IsDwmActive(v8) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v30, a2);
      v9 = v30;
      if ( v30 )
      {
        v10 = *((_DWORD *)v30 + 29);
        v11 = 0;
        v12 = (SFMLOGICALSURFACE *)*((_QWORD *)v30 + 18);
        if ( v10 >= 1 )
        {
          if ( v10 == 2 )
          {
            if ( !(unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v30 + 18)) )
              goto LABEL_18;
            v24 = 0;
            v25 = 0;
            v28 = 0LL;
            v27 = 0LL;
            v23 = 0LL;
            v14 = *(_DWORD *)(a1 + 40);
            v26 = 256;
            v20 = 0LL;
            v22 = 1;
            if ( (v14 & 1) != 0 )
            {
              Gre::Base::Globals(v13);
              *(_QWORD *)&v20 = *(_QWORD *)(a1 + 48);
              v21 = a1;
              GreAcquireSemaphore(v20);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
            }
            if ( *(_QWORD *)(a1 + 3488) )
            {
              if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
              {
                v15 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v12, &v19);
                v16 = *(_QWORD *)(a1 + 1768);
                if ( v16 )
                  *(_QWORD *)(v16 + 104) = *v15;
              }
              v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3488))(*(_QWORD *)(a1 + 1768), *(_QWORD *)v12);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
            if ( v23 )
              DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
            if ( v11 )
            {
              *((_DWORD *)v9 + 29) = 3;
            }
            else
            {
LABEL_18:
              *((_DWORD *)v9 + 29) = 1;
              CheckAndProcessWindowResizeComplete(v9, 0, 0LL);
            }
          }
          v4 = 1;
        }
        if ( v9 )
          _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v29);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  return v4;
}
