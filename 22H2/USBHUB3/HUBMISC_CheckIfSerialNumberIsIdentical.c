/*
 * XREFs of HUBMISC_CheckIfSerialNumberIsIdentical @ 0x1C0030940
 * Callers:
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x1C0021090 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0psqzq_EtwWriteTransfer @ 0x1C002AA70 (McTemplateK0psqzq_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C002FCD4 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBMISC_CheckIfSerialNumberIsIdentical(__int64 a1)
{
  __int64 v1; // rbp
  const void *v3; // r14
  unsigned int v4; // ebx
  SIZE_T v5; // rdx
  int v6; // r15d
  unsigned int v7; // esi
  __int64 v9; // [rsp+28h] [rbp-30h]

  v1 = 0LL;
  v3 = (const void *)(*(_QWORD *)(a1 + 2152) + 12LL);
  v4 = 4089;
  v5 = (*(_DWORD *)(a1 + 1636) & 0x800) != 0 ? 14 : 2;
  v6 = *(_DWORD *)(a1 + 2148) - v5;
  if ( (*(_DWORD *)(a1 + 1636) & 0x800) == 0 )
    v3 = *(const void **)(a1 + 2152);
  v7 = *(_DWORD *)(a1 + 256) - 2;
  if ( v6 == v7 )
  {
    v1 = a1 + 1732;
    v5 = RtlCompareMemory((const void *)(a1 + 1734), v3, v7);
    if ( (_DWORD)v5 == v7 )
      return v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x73u,
        (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids,
        v5,
        v7);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x72u,
      (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 2436) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", a1 + 504);
  if ( v1 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v9) = v6;
      McTemplateK0psqzq_EtwWriteTransfer(
        a1,
        v5,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        v3,
        v9,
        v1 + 2,
        v7);
    }
    return 4061;
  }
  else
  {
    v4 = 4061;
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v9) = v6;
      McTemplateK0psqzq_EtwWriteTransfer(
        a1,
        v5,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        v3,
        v9,
        0LL,
        0);
    }
  }
  return v4;
}
