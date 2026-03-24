/*
 * XREFs of HUBDESC_ValidateMsOs20CompatibleId @ 0x1C003AD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CompatibleId(__int64 a1, __int64 a2, _WORD *a3)
{
  char v6; // si
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  char v10; // r9
  char *v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // r10
  char v14; // cl
  char v15; // r9
  unsigned __int8 *v16; // rdx
  __int64 v17; // r8
  unsigned __int8 v18; // cl
  unsigned __int16 v19; // r9
  int v20; // [rsp+28h] [rbp-20h]

  v6 = 1;
  if ( (*(_BYTE *)a2 & 0x20) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x143u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 166LL);
    v6 = 0;
  }
  if ( *a3 != 20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 324;
      v20 = (unsigned __int16)*a3;
      goto LABEL_8;
    }
    goto LABEL_9;
  }
  v10 = 0;
  v11 = (char *)(a3 + 2);
  v12 = 0;
  v13 = 0x87FFFFFE03FFLL;
  while ( 1 )
  {
    v14 = *v11;
    if ( !*v11 )
    {
      v10 = 1;
      goto LABEL_22;
    }
    if ( v10 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 325;
        goto LABEL_35;
      }
LABEL_36:
      v8 = 168LL;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(v14 - 48) > 0x2Fu || !_bittest64(&v13, (unsigned __int8)(v14 - 48)) )
      break;
LABEL_22:
    ++v12;
    ++v11;
    if ( v12 >= 8 )
    {
      v15 = 0;
      v16 = (unsigned __int8 *)(a3 + 6);
      v17 = 0LL;
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          if ( v15 == 1 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_36;
            v19 = 327;
LABEL_35:
            WPP_RECORDER_SF_(
              *(_QWORD *)(a2 + 96),
              2u,
              5u,
              v19,
              (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
            goto LABEL_36;
          }
          if ( (unsigned __int8)(v18 - 48) > 0x2Fu || !_bittest64(&v13, (unsigned __int8)(v18 - 48)) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a2 + 96),
                2u,
                5u,
                0x148u,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                *v16);
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 167LL, v17);
            v6 = 0;
LABEL_31:
            if ( v6 != 1 )
              goto LABEL_11;
            *(_DWORD *)a2 |= 0x20u;
            *(_QWORD *)(a2 + 32) = a3;
            return v6;
          }
        }
        else
        {
          v15 = 1;
        }
        v17 = (unsigned int)(v17 + 1);
        ++v16;
        if ( (unsigned int)v17 >= 8 )
          goto LABEL_31;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_9;
  v7 = 326;
  v20 = (unsigned __int8)*v11;
LABEL_8:
  WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 96), 2u, 5u, v7, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v20);
LABEL_9:
  v8 = 167LL;
LABEL_10:
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
  v6 = 0;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x149u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v6;
}
