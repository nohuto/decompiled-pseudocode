/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x1C003DDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char v4; // bl
  char v7; // dl
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  char v11; // r10
  unsigned __int8 *v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r11
  int v15; // ecx
  char v16; // r10
  unsigned __int8 *v17; // r8
  unsigned int v18; // r9d
  unsigned __int16 v19; // r9
  int v20; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v7 = 1;
  if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x145u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL);
    v7 = 0;
  }
  if ( *a3 != 20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 326;
      v20 = (unsigned __int16)*a3;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v11 = 0;
  v12 = (unsigned __int8 *)(a3 + 2);
  v13 = 0;
  v14 = 0x87FFFFFE03FFLL;
  while ( 1 )
  {
    v15 = *v12;
    if ( !(_BYTE)v15 )
    {
      v11 = 1;
      goto LABEL_23;
    }
    if ( v11 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 327;
        goto LABEL_33;
      }
LABEL_34:
      v9 = 168LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v15 - 48) > 0x2Fu || !_bittest64(&v14, (unsigned __int8)(v15 - 48)) )
      break;
LABEL_23:
    ++v13;
    ++v12;
    if ( v13 >= 8 )
    {
      v16 = 0;
      v17 = (unsigned __int8 *)(a3 + 6);
      v18 = 0;
      while ( 1 )
      {
        v15 = *v17;
        if ( (_BYTE)v15 )
        {
          if ( v16 == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_34;
            v19 = 329;
LABEL_33:
            WPP_RECORDER_SF_(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              v19,
              (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
            goto LABEL_34;
          }
          if ( (unsigned __int8)(v15 - 48) > 0x2Fu || !_bittest64(&v14, (unsigned __int8)(v15 - 48)) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_9;
            v8 = 330;
            goto LABEL_21;
          }
        }
        else
        {
          v16 = 1;
        }
        ++v18;
        ++v17;
        if ( v18 >= 8 )
        {
          v4 = v7;
          if ( v7 != 1 )
            goto LABEL_11;
          *(_DWORD *)a2 |= 0x20u;
          *(_QWORD *)(a2 + 32) = a3;
          return v4;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_9;
  v8 = 328;
LABEL_21:
  v20 = v15;
LABEL_8:
  WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 96), 2u, 5u, v8, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v20);
LABEL_9:
  v9 = 167LL;
LABEL_10:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v9);
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x14Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v4;
}
