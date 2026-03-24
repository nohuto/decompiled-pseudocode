/*
 * XREFs of NVMeReenumerateNameSpaceRescan @ 0x1C0007388
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     NVMeIsLunActive @ 0x1C0015204 (NVMeIsLunActive.c)
 */

void __fastcall NVMeReenumerateNameSpaceRescan(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r10d
  unsigned int i; // edi
  __int64 v7; // r9
  unsigned int j; // edi
  __int64 v9; // r9
  __int64 v10; // r9
  int v11; // edi

  if ( (_DWORD)a3 && ((_DWORD)a3 != 1 || a4) )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 3812), 3u);
    if ( (_DWORD)a3 == 1
      && a4
      && a4 <= (unsigned int)a2
      && (unsigned __int8)NVMeIsLunActive(*(_QWORD *)(a1 + 8LL * (a4 - 1) + 1736), a2, a3) )
    {
      for ( i = 0; i < 0x14; ++i )
      {
        StorPortNotification(4101LL, a1, v5);
        StorPortExtendedFunction(81LL, a1, 100000LL, v7);
        v5 = 1;
      }
    }
    else
    {
      for ( j = 0; j < 0x14; ++j )
      {
        StorPortNotification(4101LL, a1, 2LL);
        StorPortExtendedFunction(81LL, a1, 100000LL, v9);
      }
    }
    StorPortNotification(7LL, a1, 0LL);
    *(_DWORD *)(a1 + 24) &= ~0x100u;
    StorPortResume(a1);
    v11 = 0;
    while ( 1 )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, v10);
      if ( (*(_DWORD *)(a1 + 3812) & 8) == 0 )
        break;
      if ( (unsigned int)++v11 >= 0x44C )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3812), 3u);
        StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
        return;
      }
    }
  }
}
