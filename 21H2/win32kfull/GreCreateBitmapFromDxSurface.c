/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C02A0D70
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02AE330 (NtGdiCreateBitmapFromDxSurface.c)
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C02AE360 (NtGdiCreateBitmapFromDxSurface2.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB5AC (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rdi
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  HPALETTE v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  _BYTE v19[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  int v24; // [rsp+D8h] [rbp-28h]
  _QWORD v25[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v26[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v27; // [rsp+118h] [rbp+18h]
  __int64 v28; // [rsp+120h] [rbp+20h]
  _BYTE v29[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v30; // [rsp+150h] [rbp+50h]
  char v31; // [rsp+198h] [rbp+98h] BYREF

  v7 = 0LL;
  v11 = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v20, a1);
    if ( v20[0] )
    {
      if ( *(_DWORD *)(v20[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v20[0] + 48LL);
        if ( (*(_DWORD *)(v12 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v31);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, (struct XDCOBJ *)v20);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v25);
          v13 = *(_DWORD *)(v12 + 40);
          v22 = 0LL;
          v28 = 0LL;
          v27 = 0LL;
          v25[0] = 0LL;
          v24 = 1;
          if ( (v13 & 1) != 0 )
          {
            *(_QWORD *)&v22 = *(_QWORD *)(v12 + 48);
            v23 = v12;
            GreAcquireSemaphore(v22);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
          }
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            v14 = 0LL;
            if ( (*(_DWORD *)(v12 + 2172) & 0x100) == 0 )
              v14 = **(HPALETTE **)(v12 + 1808);
            CreateCompatibleSurface(
              (SURFREF *)v29,
              *(_QWORD *)(v20[0] + 48LL),
              *(unsigned int *)(v12 + 2108),
              v14,
              a2,
              a3,
              1u,
              0,
              0,
              0,
              1,
              a6,
              0,
              a4,
              a5,
              a7);
            if ( v30 )
            {
              LOBYTE(v15) = 5;
              HmgSetOwner(*(_QWORD *)(v30 + 32), 2147483650LL, v15);
              v11 = *(_QWORD *)(v30 + 32);
              DEC_SHARE_REF_CNT(v30, v16);
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v29);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
          if ( v25[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v25);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v26);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
          v7 = v11;
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
        }
      }
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
    return v7;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
