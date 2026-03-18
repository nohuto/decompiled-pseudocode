/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C029F870
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02ACAA0 (NtGdiCreateBitmapFromDxSurface.c)
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C02ACAD0 (NtGdiCreateBitmapFromDxSurface2.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
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
  _BYTE v17[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v19[40]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-30h]
  int v22; // [rsp+D8h] [rbp-28h]
  _QWORD v23[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v24[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+118h] [rbp+18h]
  __int64 v26; // [rsp+120h] [rbp+20h]
  _BYTE v27[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v28; // [rsp+150h] [rbp+50h]
  char v29; // [rsp+198h] [rbp+98h] BYREF

  v7 = 0LL;
  v11 = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    if ( v18[0] )
    {
      if ( *(_DWORD *)(v18[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v18[0] + 48LL);
        if ( (*(_DWORD *)(v12 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v17, (struct XDCOBJ *)v18);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v23);
          v13 = *(_DWORD *)(v12 + 40);
          v20 = 0LL;
          v26 = 0LL;
          v25 = 0LL;
          v23[0] = 0LL;
          v22 = 1;
          if ( (v13 & 1) != 0 )
          {
            *(_QWORD *)&v20 = *(_QWORD *)(v12 + 48);
            v21 = v12;
            GreAcquireSemaphore(v20);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
          }
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            v14 = 0LL;
            if ( (*(_DWORD *)(v12 + 2140) & 0x100) == 0 )
              v14 = **(HPALETTE **)(v12 + 1776);
            CreateCompatibleSurface(
              (SURFREF *)v27,
              *(_QWORD *)(v18[0] + 48LL),
              *(unsigned int *)(v12 + 2076),
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
            if ( v28 )
            {
              LOBYTE(v15) = 5;
              HmgSetOwner(*(_QWORD *)(v28 + 32), 2147483650LL, v15);
              v11 = *(_QWORD *)(v28 + 32);
              DEC_SHARE_REF_CNT(v28);
            }
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v27);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
          if ( v23[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v23);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v24);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v17);
          v7 = v11;
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
        }
      }
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
    return v7;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
