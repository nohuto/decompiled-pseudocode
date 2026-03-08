/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C003D710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v4; // si
  char v7; // dl

  v4 = 0;
  v7 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x134u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v7 = 0;
  }
  if ( *a3 == 10 )
  {
    v4 = v7;
    if ( v7 == 1 )
    {
      *(_DWORD *)a2 |= 2u;
      return v4;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x135u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x136u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v4;
}
