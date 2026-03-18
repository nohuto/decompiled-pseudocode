/*
 * XREFs of VfVolatileSetDifRuleClass @ 0x140A9CBF8
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     VfUtilSetRuleClass @ 0x1405FE024 (VfUtilSetRuleClass.c)
 *     CarCleanup @ 0x140603390 (CarCleanup.c)
 *     CarInit @ 0x140603974 (CarInit.c)
 *     DifRegisterKernelPlugin @ 0x140604884 (DifRegisterKernelPlugin.c)
 *     DifSetPluginRunningWithoutReboot @ 0x140604D28 (DifSetPluginRunningWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfClearDifWithoutReboot @ 0x140A82240 (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140A82298 (VfInitDifWithoutReboot.c)
 */

__int64 __fastcall VfVolatileSetDifRuleClass(__int128 *a1, int a2)
{
  __int64 v2; // r9
  int v3; // r10d
  char v4; // r8
  __int64 *v6; // rdx
  __int64 v7; // r11
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int8 inited; // al
  int v12; // ebx
  __int128 v13; // [rsp+20h] [rbp-28h]

  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( a2 != 16 )
    return 3221225476LL;
  if ( (_DWORD)InitSafeBootMode )
    return 3221228554LL;
  if ( (_DWORD)VfRuleClasses )
    return 3221228669LL;
  v6 = VfAllowedVolatileRCId;
  v7 = 9LL;
  do
  {
    v8 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 < 0x40u )
    {
      v2 = v8 >> 5;
      v3 = 1 << (v8 & 0x1F);
    }
    *((_DWORD *)&VfAllowedVolatileRC + v2) |= v3;
    v6 = (__int64 *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  v13 = *a1;
  v9 = 0LL;
  v10 = 2LL;
  do
  {
    if ( (*(_DWORD *)((_BYTE *)&v13 + v9) & *(_DWORD *)((_BYTE *)&VfAllowedVolatileRC + v9)) != 0 )
      v4 = 1;
    v9 += 4LL;
    --v10;
  }
  while ( v10 );
  if ( !v4 )
    return 3221228670LL;
  inited = VfInitDifWithoutReboot();
  VfInitializedWithoutReboot = inited;
  if ( !inited )
  {
    v12 = -1073738632;
LABEL_22:
    VfAllowedVolatileRC = 0LL;
    VfRuleClasses = 0LL;
    MmVerifierData = 0;
    if ( VfInitializedWithoutReboot )
    {
      VfClearDifWithoutReboot();
      VfInitializedWithoutReboot = 0;
    }
    VfDifRunningWithoutReboot = 0;
    DifSetPluginRunningWithoutReboot(0);
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    CarCleanup();
    return (unsigned int)v12;
  }
  ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
  if ( !ViWdmThunksWithIatIndex )
  {
    v12 = -1073741801;
    goto LABEL_22;
  }
  VfRuleClasses = v13;
  VfUtilSetRuleClass();
  VfTriageContext = HIDWORD(v13);
  VfOptionFlags = DWORD2(v13);
  MmVerifierData = VfRuleClasses;
  VfDifRunningWithoutReboot = 1;
  DifSetPluginRunningWithoutReboot(1);
  CarInit();
  v12 = DifRegisterKernelPlugin();
  if ( v12 < 0 )
    goto LABEL_22;
  return (unsigned int)v12;
}
