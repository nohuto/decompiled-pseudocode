/*
 * XREFs of HUBDESC_ValidateMsOs20FunctionSubset @ 0x1C003DAF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBDESC_GetNextMsOs20Descriptor @ 0x1C003D6A0 (HUBDESC_GetNextMsOs20Descriptor.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

char __fastcall HUBDESC_ValidateMsOs20FunctionSubset(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int64 a4)
{
  char v7; // di
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int16 *v12; // r13
  char v13; // r12
  __int64 (__fastcall **v14)(); // r8
  unsigned int v15; // ecx
  __int64 v17; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+30h] [rbp-D8h]
  unsigned __int16 *v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 (__fastcall *v20)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // [rsp+40h] [rbp-C8h]
  _BYTE v21[112]; // [rsp+50h] [rbp-B8h] BYREF

  v7 = 0;
  memset(v21, 0, 0x68uLL);
  v9 = *a3;
  if ( (_DWORD)v9 != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Eu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v9);
    v10 = 161LL;
    goto LABEL_30;
  }
  v11 = a3[3];
  if ( (unsigned int)v11 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x13Fu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v11);
    v10 = 162LL;
    goto LABEL_30;
  }
  v18 = (unsigned __int64)a3 + v11;
  if ( (unsigned __int64)a3 + v11 > a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x140u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v11);
    v10 = 163LL;
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v10);
LABEL_31:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x144u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    return v7;
  }
  v12 = (unsigned __int16 *)((char *)a3 + v9);
  v13 = 1;
  v19 = (unsigned __int16 *)((char *)a3 + v9);
  v14 = &MsOs20DispatchTable;
  do
  {
    v15 = v12[1];
    if ( v15 >= 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v12[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x142u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v17);
      }
    }
    else
    {
      v20 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v12[1]);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 16 * v15 + 9) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v17) = v15;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x141u,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
            v17);
        }
        (*(void (__fastcall **)(_QWORD, __int64, __int64 (__fastcall **)()))(a1 + 24))(*(_QWORD *)(a1 + 40), 164LL, v14);
        v13 = 0;
      }
      if ( !v20(a1, v21, v12, v18) )
        v13 = 0;
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v18, &v19) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x143u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v10 = 165LL;
      goto LABEL_30;
    }
    v12 = v19;
    v14 = &MsOs20DispatchTable;
  }
  while ( v19 );
  v7 = v13;
  if ( v13 != 1 )
    goto LABEL_31;
  *(_DWORD *)a2 |= 0x10u;
  return v7;
}
