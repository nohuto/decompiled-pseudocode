/*
 * XREFs of HUBHTX_ValidateAndCacheHubConfigDescriptor @ 0x1C0003694
 * Callers:
 *     HUBHSM_ValidatingHubConfigurationDescriptor @ 0x1C0009BF0 (HUBHSM_ValidatingHubConfigurationDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0038DB8 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall HUBHTX_ValidateAndCacheHubConfigDescriptor(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v4; // rsi
  unsigned int v5; // eax
  void *Pool2; // rax
  int v7; // ebx
  void *v8; // rcx
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+30h] [rbp-58h]
  _WORD v12[2]; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+44h] [rbp-44h]
  __int128 v14; // [rsp+48h] [rbp-40h]
  __int64 (__fastcall *v15)(); // [rsp+58h] [rbp-30h]
  __int64 (__fastcall *v16)(); // [rsp+60h] [rbp-28h]
  __int64 v17; // [rsp+68h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-18h]

  v1 = *(_WORD *)(a1 + 2458);
  v2 = *(unsigned __int16 **)(a1 + 1256);
  v12[1] = 0;
  v14 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v12[0] = v1;
  v13 = *(_DWORD *)(a1 + 256);
  v15 = HUBMISC_LogDescriptorValidationErrorForHub;
  v16 = HUBMISC_LogDescriptorValidationWarningForHub;
  v5 = v2[1];
  v17 = a1;
  if ( (unsigned __int16)v5 >= 0xFFu )
  {
LABEL_7:
    if ( (unsigned __int8)HUBDESC_ValidateConfigurationDescriptorSet(
                            *(_QWORD *)(a1 + 1256),
                            *(unsigned __int16 *)(*(_QWORD *)(a1 + 1256) + 2LL),
                            (unsigned int)v12,
                            *(_QWORD *)(a1 + 2520),
                            0LL) )
    {
      if ( *(_WORD *)(*(_QWORD *)(a1 + 1256) + 2LL) == *(_WORD *)(a1 + 2604) )
      {
        v7 = 0;
        goto LABEL_14;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = *(unsigned __int16 *)(a1 + 2604);
        v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 1256) + 2LL);
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x16u,
          (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids,
          v10,
          v11);
      }
      ((void (__fastcall *)(__int64, __int64))v15)(v17, 61LL);
    }
    v7 = -1073741823;
    goto LABEL_14;
  }
  v4 = v2;
  Pool2 = (void *)ExAllocatePool2(64LL, v5, 1748191317LL);
  *(_QWORD *)(a1 + 1256) = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, v2, v2[1]);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x15u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids);
  v7 = -1073741670;
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x68334855u);
  if ( v7 < 0 )
  {
    v8 = *(void **)(a1 + 1256);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x68334855u);
      *(_QWORD *)(a1 + 1256) = 0LL;
    }
  }
  return ((v7 >> 31) & 0xFFFFFFF8) + 2053;
}
