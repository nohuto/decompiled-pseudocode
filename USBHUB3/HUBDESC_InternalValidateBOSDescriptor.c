/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C003BB04
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C002B320 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C003BEA8 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C00355BC (WPP_RECORDER_SF_Ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0035964 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rdi
  __int64 v9; // rdx
  char v10; // r12
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v5 = a4;
  v21 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v21;
  }
  v9 = 5LL;
  if ( a3 )
    *a3 = 5;
  v10 = 1;
  if ( !a1 )
  {
    *v5 = 1;
    v11 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xE0u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v12 = 27LL;
LABEL_48:
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v12);
    goto LABEL_49;
  }
  v11 = a5;
  if ( *(_DWORD *)(a2 + 72) < 5u )
  {
    *v5 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        v11,
        2u,
        5u,
        0xE1u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *(_DWORD *)(a2 + 72),
        5);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
    v9 = 5LL;
  }
  if ( a1[1] != 15 )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = 15;
      LODWORD(v19) = a1[1];
      WPP_RECORDER_SF_DD(v11, 2u, 5u, 0xE2u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19, v20);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
  }
  if ( *a1 < 5u )
  {
    *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v11, v9, (__int64)a3, 0xE3u, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
  }
  v13 = *((unsigned __int16 *)a1 + 1);
  if ( (unsigned int)v13 < *(_DWORD *)(a2 + 72) )
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + v13;
  if ( *a1 > 5u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v11, v9, (__int64)a3, 0xE4u, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( a3 )
      *a3 = *a1;
  }
  if ( *((_WORD *)a1 + 1) < 5u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = *((unsigned __int16 *)a1 + 1);
      WPP_RECORDER_SF_d(v11, 2u, 5u, 0xE5u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v19);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  v14 = *((unsigned __int16 *)a1 + 1);
  v22 = *a1 + 2 * a1[4];
  if ( (unsigned int)v14 < v22 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v11, v14, (__int64)a3, 0xE6u, v18);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
    *v5 = 2;
  }
  if ( !a1[4] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xE7u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
      *v5 = 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v11, v15, v16, 0xE8u, v18);
    v12 = 29LL;
    goto LABEL_48;
  }
LABEL_49:
  if ( *v5 )
  {
    v10 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xE9u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  }
  return v10;
}
