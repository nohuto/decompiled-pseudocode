/*
 * XREFs of HUBDESC_ValidateMsOs20VendorRevision @ 0x1C003E640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20VendorRevision(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  char v6; // bp
  __int64 v7; // rdx
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+28h] [rbp-10h]

  v3 = *a2;
  v6 = 1;
  if ( (*a2 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x15Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v7 = 258LL;
  }
  else if ( *a3 == 6 )
  {
    if ( a3[2] )
    {
      *((_QWORD *)a2 + 8) = a3;
      *a2 = v3 | 0x400;
      return v6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = a3[2];
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x161u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v10);
    }
    v7 = 260LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *a3;
      WPP_RECORDER_SF_d(
        *((_QWORD *)a2 + 12),
        2u,
        5u,
        0x160u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v9);
    }
    v7 = 259LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 12), 2u, 5u, 0x162u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v6;
}
