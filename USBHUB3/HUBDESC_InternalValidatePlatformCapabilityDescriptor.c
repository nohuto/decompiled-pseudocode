/*
 * XREFs of HUBDESC_InternalValidatePlatformCapabilityDescriptor @ 0x1C0039788
 * Callers:
 *     HUBDESC_InternalValidateDeviceCapabilityDescriptor @ 0x1C003B5DC (HUBDESC_InternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C001497C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0029788 (WPP_RECORDER_SF_DDDD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidatePlatformCapabilityDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // r14
  unsigned int *v6; // rax
  unsigned __int8 *v8; // rdi
  __int64 v9; // r15
  char v10; // si
  int v11; // r12d
  unsigned int v12; // r13d
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  __int64 v16; // r12
  unsigned __int64 v17; // r12
  bool v18; // zf
  unsigned int v19; // r12d
  __int64 v20; // rcx
  unsigned __int8 *v21; // rax
  unsigned int v22; // r13d
  __int64 v23; // rdx
  unsigned __int8 *v24; // rcx
  ULONG v25; // r15d
  ULONG *v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v30; // [rsp+28h] [rbp-A0h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v32; // [rsp+58h] [rbp-70h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  unsigned int v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+78h] [rbp-50h]
  int v38; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int *v39; // [rsp+E0h] [rbp+18h]
  ULONG v40; // [rsp+E8h] [rbp+20h]

  v39 = a3;
  v38 = 0;
  v5 = a4;
  v6 = a3;
  v8 = a1;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v38;
  }
  v9 = a5;
  v10 = 1;
  v11 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v12 = *(_DWORD *)(a2 + 72) - v11;
  if ( *a1 >= 0x14u )
  {
LABEL_9:
    if ( *v6 > v12 )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v11;
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0x90u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
      }
      v14 = 253LL;
      goto LABEL_16;
    }
    if ( v8[3] )
    {
      if ( *(_BYTE *)(a2 + 15) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v8[3];
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0x91u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 195LL);
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_NULL.Data1 && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_NULL.Data4 )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v9, 2u, 5u, 0x92u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v14 = 196LL;
      goto LABEL_16;
    }
    if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1
      && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v9, 2u, 5u, 0x93u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        v14 = 197LL;
        goto LABEL_16;
      }
      if ( *v8 < 0x1Cu )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_41:
          v14 = 198LL;
          goto LABEL_16;
        }
        v15 = 148;
LABEL_40:
        LODWORD(v30) = *v8;
        WPP_RECORDER_SF_d(v9, 2u, 5u, v15, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
        goto LABEL_41;
      }
      v16 = *v8;
      if ( ((*v8 - 4) & 7) != 0 )
      {
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_41;
        v15 = 149;
        goto LABEL_40;
      }
      v40 = 0;
      v17 = (unsigned __int64)(v16 - 28) >> 3;
      v18 = (_DWORD)v17 == -1;
      v19 = v17 + 1;
      v20 = v19;
      v36 = v19;
      v35 = v19;
      if ( v18 )
        goto LABEL_62;
      v21 = v8 + 20;
      v34 = v19;
      v31 = v8 + 20;
      v22 = 1;
      do
      {
        if ( v22 < v19 )
        {
          v23 = v19 - v22;
          v33 = v23;
          v24 = &v8[8 * v22 + 20];
          v32 = v24;
          do
          {
            if ( *(_DWORD *)v24 == *(_DWORD *)v31 )
            {
              *v5 = 1;
              *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v30) = *(_DWORD *)v31;
                WPP_RECORDER_SF_d(v9, 2u, 5u, 0x96u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
              }
              (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 199LL);
              v24 = v32;
              v23 = v33;
            }
            v24 += 8;
            --v23;
            v32 = v24;
            v33 = v23;
          }
          while ( v23 );
          v8 = a1;
          v19 = v35;
          v21 = v31;
          v20 = v34;
        }
        v21 += 8;
        ++v22;
        --v20;
        v31 = v21;
        v34 = v20;
      }
      while ( v20 );
      v25 = v40;
      v26 = (ULONG *)(v8 + 20);
      v27 = v36;
      do
      {
        if ( *v26 > v25 && RtlIsNtDdiVersionAvailable(*v26) )
        {
          v25 = *v26;
          *(_QWORD *)(*(_QWORD *)(a2 + 80) + 48LL) = v26;
        }
        v26 += 2;
        --v27;
      }
      while ( v27 );
      v18 = v25 == 0;
      v9 = a5;
      if ( v18 )
      {
LABEL_62:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v9, 2u, 5u, 0x97u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), 200LL);
      }
    }
    else if ( *(_QWORD *)(v8 + 4) == *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1
           && *(_QWORD *)(v8 + 12) == *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4 )
    {
      if ( *v8 >= 0x1Au )
      {
        if ( v8[20] == 1 )
        {
          if ( *v8 != 26 )
          {
            *v5 = 1;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v30) = *v8;
              WPP_RECORDER_SF_d(v9, 2u, 5u, 0x99u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
            }
            v14 = 247LL;
            goto LABEL_16;
          }
        }
        else if ( !v8[20] )
        {
          *v5 = 1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v30) = v8[20];
            WPP_RECORDER_SF_d(v9, 2u, 5u, 0x9Au, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
          }
          v14 = 249LL;
          goto LABEL_16;
        }
        v28 = *(_QWORD *)(a2 + 80);
        if ( !*(_QWORD *)(v28 + 56) )
        {
          *(_QWORD *)(v28 + 56) = v8;
          goto LABEL_85;
        }
        *v5 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(v9, 2u, 5u, 0x9Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        v14 = 248LL;
        goto LABEL_16;
      }
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = *v8;
        WPP_RECORDER_SF_d(v9, 2u, 5u, 0x98u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v30);
      }
      v14 = 250LL;
LABEL_16:
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), v14);
    }
LABEL_85:
    if ( !*v5 )
      return v10;
    goto LABEL_86;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 251LL);
  if ( v12 >= 0x14 )
  {
    v6 = v39;
    *v5 = 2;
    *v6 = 20;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDD(
        v9,
        2u,
        5u,
        0x8Eu,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v11,
        *v8,
        20,
        20);
      v6 = v39;
    }
    goto LABEL_9;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(v9, 2u, v13, 0x8Fu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11, *v8, 20);
    goto LABEL_85;
  }
LABEL_86:
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(v9, 2u, 5u, 0x9Cu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v10;
}
