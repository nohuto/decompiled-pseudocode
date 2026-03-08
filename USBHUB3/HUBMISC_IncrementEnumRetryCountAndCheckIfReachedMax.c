/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C002EA10
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C0020900 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00031FC (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C00071D0 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0032FCC (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x200u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) <= ((*(_DWORD *)(v3 + 1336) & 0x80u) != 0 ? 10 : 3) )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFDFFF);
    *(_DWORD *)(a1 + 2432) = 0;
    v7 = *(void **)(a1 + 2488);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x64334855u);
    memset((void *)(a1 + 2464), 0, 0x68uLL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_DWORD *)(a1 + 32);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x11u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        a1,
        v12);
    }
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p_EtwWriteTransfer(
        v8,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 2592LL) & 0x2000) != 0 )
    {
      v5 = v9 + 272;
      v6 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_16;
    }
  }
  else
  {
    v2 = 4089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(_DWORD *)(a1 + 32);
      WPP_RECORDER_SF_qd(
        *(_QWORD *)(v3 + 1432),
        2u,
        5u,
        0x10u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        a1,
        v11);
    }
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      McTemplateK0p_EtwWriteTransfer(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 2592LL) & 0x1000) != 0 )
    {
      v5 = v4 + 272;
      v6 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_16:
      HUBMISC_VerifierDbgBreak(v6, v5);
    }
  }
  return v2;
}
