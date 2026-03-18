/*
 * XREFs of RIMFreePointerDevice @ 0x1C0188858
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0087D08 (UserDeactivateMITInputProcessing.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C018B398 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CC18 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019399C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     RIMRemoveFromActiveDevices @ 0x1C018B4C4 (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01B0840 (RIMCmFreePointerDeviceContacts.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  char *v9; // rdx
  char *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rcx
  char *v14; // rcx
  char *v15; // rcx
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // rcx

  RIMRemoveFromActiveDevices();
  v6 = *(_QWORD **)(a1 + 432);
  while ( v6 != (_QWORD *)(a1 + 432) )
  {
    v7 = v6 - 114;
    v5 = v6;
    v6 = (_QWORD *)*v6;
    if ( v7 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v6[1] != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v6;
      v6[1] = v8;
      v5[1] = v5;
      *v5 = v5;
      break;
    }
  }
  v9 = *(char **)(a2 + 1024);
  if ( v9 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
    *(_QWORD *)(a2 + 1024) = 0LL;
  }
  v10 = *(char **)(a2 + 928);
  if ( v10 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
    *(_QWORD *)(a2 + 928) = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 392);
  if ( v11 )
  {
    if ( qword_1C0296278 && (int)qword_1C0296278(v4, v10, v5) >= 0 && qword_1C0296280 )
      qword_1C0296280(v11);
    v12 = *(_QWORD *)(a2 + 392);
    if ( qword_1C0296288 && (int)qword_1C0296288(v4, v10, v5) >= 0 && qword_1C0296290 )
      qword_1C0296290(v12);
    *(_QWORD *)(a2 + 392) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v10, v5);
  v13 = *(_QWORD *)(a2 + 760);
  if ( v13 )
  {
    v14 = *(char **)(v13 + 24);
    if ( v14 )
    {
      Win32FreePool(v14);
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 24LL) = 0LL;
    }
    v15 = *(char **)(*(_QWORD *)(a2 + 760) + 16LL);
    if ( v15 )
    {
      Win32FreePool(v15);
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 16LL) = 0LL;
    }
    Win32FreePool(*(char **)(a2 + 760));
    *(_QWORD *)(a2 + 760) = 0LL;
  }
  v16 = *(char **)(a2 + 376);
  if ( v16 )
  {
    Win32FreePool(v16);
    *(_QWORD *)(a2 + 376) = 0LL;
  }
  v17 = *(char **)(a2 + 816);
  if ( v17 )
  {
    Win32FreePool(v17);
    *(_QWORD *)(a2 + 816) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 360) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 720) < *(_DWORD *)(a2 + 768) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 955);
    *(_DWORD *)(a1 + 720) -= *(_DWORD *)(a2 + 768);
  }
  if ( *(_QWORD *)(a2 + 912) != a2 + 912 )
    __int2c();
  v18 = *(char **)(a2 + 1064);
  if ( v18 )
  {
    Win32FreePool(v18);
    *(_QWORD *)(a2 + 1064) = 0LL;
  }
  Win32FreePool((char *)a2);
}
