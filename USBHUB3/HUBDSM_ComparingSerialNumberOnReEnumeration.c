__int64 __fastcall HUBDSM_ComparingSerialNumberOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v4; // rdx
  const void *v5; // r14
  int v6; // ecx
  int v7; // r15d
  unsigned int v8; // esi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 0LL;
  v3 = 4089;
  v4 = *(_QWORD *)(v1 + 2152);
  v5 = (const void *)(v4 + 12);
  v6 = (*(_DWORD *)(v1 + 1636) & 0x800) != 0 ? 14 : 2;
  v7 = *(_DWORD *)(v1 + 2148) - v6;
  if ( (*(_DWORD *)(v1 + 1636) & 0x800) == 0 )
    v5 = *(const void **)(v1 + 2152);
  v8 = *(_DWORD *)(v1 + 256) - 2;
  if ( v7 == v8 )
  {
    v2 = v1 + 1732;
    LODWORD(v4) = RtlCompareMemory((const void *)(v1 + 1734), v5, v8);
    if ( (_DWORD)v4 == v8 )
      return v3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x73u,
        (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
        v4,
        v8);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x72u,
      (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids);
  }
  v3 = 4061;
  if ( (*(_DWORD *)(v1 + 2436) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", v1 + 504);
  if ( v2 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      McTemplateK0psqzq_EtwWriteTransfer(
        v6,
        v4,
        v1 + 1516,
        *(_QWORD *)(*(_QWORD *)v1 + 248LL),
        (__int64)v5,
        v7,
        v2 + 2,
        v8);
  }
  else if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
  {
    McTemplateK0psqzq_EtwWriteTransfer(v6, v4, v1 + 1516, *(_QWORD *)(*(_QWORD *)v1 + 248LL), (__int64)v5, v7, 0LL, 0);
  }
  return v3;
}
