/*
 * XREFs of HUBDESC_ValidateMsOs20MimimumRecoveryTime @ 0x1C003B240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20MimimumRecoveryTime(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di
  __int64 v8; // [rsp+28h] [rbp-20h]

  v6 = 1;
  if ( *(char *)a2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x151u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 175LL);
    v6 = 0;
  }
  if ( *a3 == 6 )
  {
    if ( *((_BYTE *)a3 + 4) > 0xAu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x153u,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          *((unsigned __int8 *)a3 + 4));
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 177LL);
      v6 = 0;
    }
    if ( (unsigned __int8)(*((_BYTE *)a3 + 5) - 1) > 0x13u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = *((unsigned __int8 *)a3 + 5);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x154u,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          v8);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a1 + 40), 178LL);
    }
    if ( v6 == 1 )
    {
      *(_DWORD *)a2 |= 0x80u;
      *(_QWORD *)(a2 + 40) = a3;
      return v6;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x152u,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 176LL);
    v6 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x155u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v6;
}
