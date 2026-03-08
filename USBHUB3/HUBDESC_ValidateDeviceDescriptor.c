/*
 * XREFs of HUBDESC_ValidateDeviceDescriptor @ 0x1C003C5E8
 * Callers:
 *     HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C002BF44 (HUBDTX_ValidateAndCacheDeviceDescriptor.c)
 *     HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C002C21C (HUBDTX_ValidateFirstDeviceDescriptorFor20.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C0035964 (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateDeviceDescriptor(
        unsigned __int8 *a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  int v5; // r13d
  unsigned int v7; // eax
  __int64 v9; // r14
  __int64 v10; // rdx
  char v11; // bl
  unsigned __int16 v13; // r9
  __int16 v14; // cx
  int v15; // eax
  bool v16; // al
  int v17; // edx
  __int64 v18; // rcx
  unsigned __int16 v19; // r9
  __int64 v20; // rcx
  bool ShouldEnforceWin8ValidationMutable; // al
  __int64 v22; // rcx
  __int64 v23; // [rsp+28h] [rbp-40h]

  v5 = 0;
  v7 = a2;
  if ( !a1 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xF8u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v10 = 79LL;
    goto LABEL_5;
  }
  if ( a2 < 2 )
  {
    v9 = a5;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_13:
      v10 = 71LL;
LABEL_5:
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v10);
      goto LABEL_6;
    }
    v13 = 249;
LABEL_12:
    LODWORD(v23) = v7;
    WPP_RECORDER_SF_d(v9, 2u, 5u, v13, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
    goto LABEL_13;
  }
  v9 = a5;
  if ( *a1 < 0x12u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFAu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, *a1);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 70LL);
    v5 = 2;
  }
  if ( a1[1] != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = a1[1];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFBu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 77LL);
    v5 = 2;
  }
  v7 = a2;
  if ( a2 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = 252;
    goto LABEL_12;
  }
  v14 = *((_WORD *)a1 + 6);
  if ( (v14 & 0xF000u) > 0x9000 || (v14 & 0xF00u) > 0x900 || (*((_WORD *)a1 + 6) & 0xF0u) > 0x90 || (v14 & 0xFu) > 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = *((unsigned __int16 *)a1 + 6);
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFDu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 32))(*(_QWORD *)(a3 + 40), 69LL);
  }
  if ( a1[4] == 17 && !a1[5] && !a1[6] )
  {
    if ( (unsigned __int16)(*((_WORD *)a1 + 1) - 513) > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFEu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 246LL);
      v5 = 2;
    }
    else if ( a4 )
    {
      *a4 = 1;
    }
  }
  v15 = *(_DWORD *)(a3 + 4);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v17 = a1[7];
      if ( (unsigned __int8)(v17 - 8) > 0x38u || (v20 = 0x100000001000101LL, !_bittest64(&v20, (unsigned int)(v17 - 8))) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 257;
          goto LABEL_66;
        }
LABEL_67:
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        v5 = 2;
      }
    }
    else
    {
      if ( v15 != 2 )
      {
        if ( v15 == 3 && a1[7] != 9 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v23) = a1[7];
            WPP_RECORDER_SF_d(a5, 2u, 5u, 0x104u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
          }
          (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
          if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a3) )
            goto LABEL_6;
        }
        goto LABEL_73;
      }
      if ( a1[7] != 64 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v23) = a1[7];
          WPP_RECORDER_SF_d(a5, 2u, 5u, 0x102u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
        ShouldEnforceWin8ValidationMutable = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
        v17 = a1[7];
        if ( ShouldEnforceWin8ValidationMutable )
          v5 = 2;
        if ( (unsigned __int8)(v17 - 8) > 0x38u
          || (v22 = 0x100000001000101LL, !_bittest64(&v22, (unsigned int)(v17 - 8))) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = 259;
            goto LABEL_66;
          }
          goto LABEL_67;
        }
      }
    }
  }
  else if ( a1[7] != 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v23) = a1[7];
      WPP_RECORDER_SF_d(a5, 2u, 5u, 0xFFu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 78LL);
    v16 = HUBDESC_ShouldEnforceWin8ValidationMutable(a3);
    v17 = a1[7];
    if ( v16 )
      v5 = 2;
    if ( (unsigned __int8)(v17 - 8) > 0x38u || (v18 = 0x100000001000101LL, !_bittest64(&v18, (unsigned int)(v17 - 8))) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 256;
LABEL_66:
        LODWORD(v23) = v17;
        WPP_RECORDER_SF_d(a5, 2u, 5u, v19, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v23);
        goto LABEL_67;
      }
      goto LABEL_67;
    }
  }
LABEL_73:
  if ( !v5 )
    return 1;
LABEL_6:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x105u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v11;
}
