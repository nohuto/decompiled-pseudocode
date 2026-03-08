/*
 * XREFs of GreEnableEUDC @ 0x1C00B77A8
 * Callers:
 *     ?CleanUpEUDC@@YAXXZ @ 0x1C00B76C0 (-CleanUpEUDC@@YAXXZ.c)
 *     NtGdiEnableEudc @ 0x1C00B7790 (NtGdiEnableEudc.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ @ 0x1C00B7924 (-GetSessionTextStackStatus@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     bAddAllFlEntry @ 0x1C00B8F0C (bAddAllFlEntry.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bDeleteAllFlEntry @ 0x1C0116094 (bDeleteAllFlEntry.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x1C02A0B3C (-bSetupDefaultFlEntry@@YAHXZ.c)
 */

__int64 __fastcall GreEnableEUDC(Gre::Base *a1)
{
  int v1; // edi
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int v12; // edi
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v1 = (int)a1;
  v2 = Gre::Base::Globals(a1);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  if ( *(_QWORD *)(v4 + 13272) && *(_QWORD *)(v4 + 13288) )
  {
    if ( (unsigned int)UmfdHostLifeTimeManager::GetSessionTextStackStatus() )
    {
      return 0LL;
    }
    else
    {
      v15 = *(_QWORD *)(v4 + 13288);
      GreAcquireSemaphore(v15);
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
      v14 = *((_QWORD *)v2 + 15);
      GreAcquireSemaphore(v14);
      if ( v1 )
      {
        GreAcquireSemaphore(*(_QWORD *)(v4 + 13272));
        if ( *(_DWORD *)(v4 + 19356) == 1 && !*(_DWORD *)(v4 + 19360) && (unsigned int)bSetupDefaultFlEntry() )
          *(_DWORD *)(v4 + 19360) = 1;
        EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
        GreReleaseSemaphoreInternal(*(_QWORD *)(v4 + 13272));
      }
      v8 = *(_DWORD *)(v4 + 13312);
      if ( PsGetCurrentProcess(v6, v5, v7) == gpepCSRSS )
        v9 = 0;
      else
        v9 = 2 - (v1 != 0);
      *(_DWORD *)(v4 + 13312) |= v9;
      if ( v1 )
        v10 = bAddAllFlEntry(1LL);
      else
        v10 = bDeleteAllFlEntry();
      v11 = *(_BYTE *)(v4 + 13296) == 0;
      v12 = v10;
      *(_DWORD *)(v4 + 13312) = v8;
      if ( v11 )
        *(_BYTE *)(v4 + 13296) = 1;
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v14);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      return v12;
    }
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 13296) )
      *(_BYTE *)(v4 + 13296) = 1;
    return 1LL;
  }
}
