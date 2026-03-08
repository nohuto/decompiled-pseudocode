/*
 * XREFs of ACPIVectorConnect @ 0x1C0043E40
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0043FE0 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C00833B8 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C002C29C (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C3F8 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeValidIndex @ 0x1C002C6DC (ACPIGpeValidIndex.c)
 *     ACPIVectorInstall @ 0x1C00442B8 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, char **a7)
{
  unsigned int v9; // esi
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  char *v13; // rdi
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      11,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids);
  }
  v10 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(v9) )
    return 3221225712LL;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1735418689LL);
  v13 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = v9;
  *(_QWORD *)(Pool2 + 8) = a5;
  *(_QWORD *)(Pool2 + 16) = a6;
  *(_DWORD *)(Pool2 + 28) = a3;
  *(_BYTE *)(Pool2 + 24) = a4;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(v9, a3 == 0, 0, v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(v9, v13) )
    {
      *a7 = v13;
      goto LABEL_14;
    }
    ACPIGpeInstallRemoveIndex(v9, 2, 0, v13 + 25);
  }
  v10 = -1073741823;
  ExFreePoolWithTag(v13, 0);
LABEL_14:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
