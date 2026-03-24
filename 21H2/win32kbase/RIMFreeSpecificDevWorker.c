/*
 * XREFs of RIMFreeSpecificDevWorker @ 0x1C00BBA6C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005187C (RawInputManagerObjectDelete.c)
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0074738 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     RIMHidTLCActive @ 0x1C00557C4 (RIMHidTLCActive.c)
 *     RIMFreeHidDesc @ 0x1C0056658 (RIMFreeHidDesc.c)
 *     RIMFreeHidTLCInfo @ 0x1C00AC210 (RIMFreeHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C00B16A0 (RIMIDEFreeInjectedInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F418 (RIMReleasePointerDeviceInfo.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C016E70C (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void __fastcall RIMFreeSpecificDevWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rcx
  RIMDeadzone **v9; // rdi
  __int64 v10; // rsi
  RIMDeadzone *v11; // rcx
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( *(_QWORD *)(a2 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 438LL);
  if ( *(_QWORD *)(a2 + 104) != a2 + 104 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 442LL);
  v4 = *(_QWORD *)(a2 + 216);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a2 + 320);
  if ( v5 )
    Win32FreePool(v5);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 2) <= 1u )
  {
    v6 = *(_QWORD *)(a2 + 472);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 20))-- == 1 && !(unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 472)) )
        RIMFreeHidTLCInfo(*(_QWORD *)(a2 + 472));
    }
    v8 = *(_QWORD *)(a2 + 464);
    if ( v8 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) != 0 )
      {
        if ( *(_DWORD *)(a2 + 456) )
        {
          v9 = (RIMDeadzone **)(a2 + 416);
          v10 = 5LL;
          do
          {
            if ( *v9 )
            {
              RIMDeadzone::Release(*v9);
              v11 = *v9;
              if ( *((_DWORD *)*v9 + 1) )
              {
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 486LL);
                v11 = *v9;
              }
              Win32FreePool((__int64)v11);
              *v9 = 0LL;
              --*(_DWORD *)(a2 + 456);
            }
            ++v9;
            --v10;
          }
          while ( v10 );
          if ( *(_DWORD *)(a2 + 456) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 493LL);
        }
        RIMReleasePointerDeviceInfo(a1, a2);
        v8 = *(_QWORD *)(a2 + 464);
      }
      RIMFreeHidDesc(v8);
      *(_QWORD *)(a2 + 464) = 0LL;
    }
  }
  v12 = *(_BYTE *)(a2 + 48);
  if ( v12 == 3 )
  {
    if ( !*(_QWORD *)(a2 + 472) )
      goto LABEL_33;
    RIMFreeHidDesc(*(_QWORD *)(a2 + 464));
    v12 = *(_BYTE *)(a2 + 48);
    *(_QWORD *)(a2 + 464) = 0LL;
  }
  if ( !v12 )
  {
    v13 = *(_QWORD *)(a2 + 904);
    if ( v13 )
    {
      Win32FreePool(v13);
      *(_QWORD *)(a2 + 904) = 0LL;
      *(_WORD *)(a2 + 898) = 0;
    }
  }
LABEL_33:
  v14 = *(_QWORD *)(a2 + 352);
  if ( v14 )
    Win32FreePool(v14);
  v15 = *(_QWORD *)(a2 + 376);
  if ( v15 )
    Win32FreePool(v15);
  RIMIDEFreeInjectedInfo(a2);
}
