/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x1C0036224
 * Callers:
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0036338 (HUBDESC_InternalValidateLastInterface.c)
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x1C0036484 (HUBDESC_InternalValidateEndpointDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v4 = &v9;
  }
  v6 = *(_DWORD *)(a1 + 256);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      if ( (v6 & 0x10) == 0 )
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
      }
      v7 = *(_DWORD *)(a1 + 256);
      if ( (v7 & 8) != 0 && (v7 & 0x20) == 0 )
      {
        *v4 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 2;
  }
  *(_DWORD *)(a1 + 256) &= 0xFFFFFFC3;
  return *v4 == 0;
}
