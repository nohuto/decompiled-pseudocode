/*
 * XREFs of ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18009E7A0
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180016020 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0258 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A0434 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *a2)
{
  __int64 v4; // r8
  int v5; // ecx
  char *v6; // r9
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v9[4]; // [rsp+48h] [rbp-20h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 8) == 1 )
  {
    if ( *((_BYTE *)this + 324) )
    {
      v5 = *((_DWORD *)a2 + 3);
      v6 = (char *)v9;
      v9[1] = v5 - 25;
      v9[3] = v5 + 25;
      v9[0] = v4 - 25;
      v9[2] = v4 + 25;
    }
    else
    {
      v6 = (char *)a2 + 16;
    }
    CContactManager::ProcessTouchContact(
      this,
      *((unsigned int *)a2 + 1),
      v4,
      v6,
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 13),
      *(_QWORD *)((char *)a2 + 44));
  }
  else
  {
    CContactManager::ProcessPenContact(this, *((unsigned int *)a2 + 1), v4);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return 0LL;
}
