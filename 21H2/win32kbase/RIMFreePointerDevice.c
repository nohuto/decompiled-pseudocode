/*
 * XREFs of RIMFreePointerDevice @ 0x1C015D6F4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C015F418 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01B1F48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMRemoveFromActiveDevices @ 0x1C015F4FC (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C018033C (RIMCmFreePointerDeviceContacts.c)
 *     ApiSetFreePointerDeviceCalData @ 0x1C01CECB0 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x1C01CED84 (ApiSetFreePointerDeviceCalibrationInfo.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v16);
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 108;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v15 = (_QWORD *)v4[1], (_QWORD *)*v15 != v4) )
        __fastfail(3u);
      *v15 = v5;
      v5[1] = v15;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(_QWORD *)(a2 + 968);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(a2 + 968) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 880);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(a2 + 880) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 344);
  if ( v9 )
  {
    ApiSetFreePointerDeviceCalData(v9, v5, v4);
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 344));
    *(_QWORD *)(a2 + 344) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v5, v4);
  v10 = *(_QWORD *)(a2 + 712);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 24) )
    {
      Win32FreePool(*(_QWORD *)(v10 + 24));
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 24LL) = 0LL;
      v10 = *(_QWORD *)(a2 + 712);
    }
    if ( *(_QWORD *)(v10 + 16) )
    {
      Win32FreePool(*(_QWORD *)(v10 + 16));
      *(_QWORD *)(*(_QWORD *)(a2 + 712) + 16LL) = 0LL;
      v10 = *(_QWORD *)(a2 + 712);
    }
    Win32FreePool(v10);
    *(_QWORD *)(a2 + 712) = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 328);
  if ( v11 )
  {
    Win32FreePool(v11);
    *(_QWORD *)(a2 + 328) = 0LL;
  }
  v12 = *(_QWORD *)(a2 + 768);
  if ( v12 )
  {
    Win32FreePool(v12);
    *(_QWORD *)(a2 + 768) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 312) & 0x400) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 532);
    v14 = *(_DWORD *)(a2 + 720);
    if ( v13 < v14 )
    {
      v16 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1014);
      v13 = *(_DWORD *)(a1 + 532);
      v14 = *(_DWORD *)(a2 + 720);
    }
    *(_DWORD *)(a1 + 532) = v13 - v14;
  }
  if ( *(_QWORD *)(a2 + 864) != a2 + 864 )
    __int2c();
  Win32FreePool(a2);
}
