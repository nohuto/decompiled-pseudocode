/*
 * XREFs of HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C003525C
 * Callers:
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C0035C28 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0026A64 (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00322CC (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x1C0033158 (HUBDESC_InternalValidateLastInterface.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateInterfaceDescriptor(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        int *a4,
        __int64 a5)
{
  int *v5; // rdi
  unsigned int v9; // eax
  int v10; // ebp
  char v11; // r14
  int v12; // r13d
  void *v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  bool v19; // si
  bool v20; // bp
  __int64 v21; // r8
  unsigned __int8 v22; // al
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+98h] [rbp+10h] BYREF

  v28 = 0;
  v5 = a4;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v28;
  }
  v9 = *a1;
  v10 = *(_DWORD *)(a2 + 72);
  v11 = 1;
  *a3 = v9;
  v12 = (_DWORD)a1 - *(_DWORD *)(a2 + 56);
  v13 = &WPP_aa79356b1e693837079f99291824f69e_Traceguids;
  v14 = v10 - v12;
  if ( (unsigned __int8)v9 >= 9u )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(
    *(_QWORD *)(a2 + 40),
    99LL,
    &WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  if ( v14 < 9 )
  {
    v16 = *a3;
  }
  else
  {
    *a3 = 9;
    v16 = 9;
  }
  if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
    *v5 = 2;
  if ( v16 >= 9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDDD(
        a5,
        2u,
        5u,
        0x69u,
        (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
        *a1,
        v12,
        9,
        v16);
    v13 = &WPP_aa79356b1e693837079f99291824f69e_Traceguids;
LABEL_19:
    if ( *a1 > 9u )
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v26) = 9;
        LODWORD(v25) = v12;
        LODWORD(v24) = *a1;
        WPP_RECORDER_SF_DDD(
          a5,
          2u,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          0x6Au,
          (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
          v24,
          v25,
          v26);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 98LL, v13);
    }
    if ( *a3 <= v14 )
    {
      v17 = a1[2];
      v18 = a1[3];
      v19 = (*(_DWORD *)(a2 + 256) & 1) == 0 || (_BYTE)v17 != *(_BYTE *)(a2 + 80);
      v20 = !(*(_BYTE *)(a2 + 256) & 1);
      HUBDESC_InternalValidateLastInterface(a2, v5, a5);
      if ( *v5 != 1 )
      {
        if ( v19 )
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 216), v17) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v25) = v17;
              LODWORD(v24) = v12;
              WPP_RECORDER_SF_dD(a5, 2u, 5u, 0x6Cu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24, v25);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 103LL);
          }
          if ( !v20 && *(_BYTE *)(a2 + 80) > (unsigned __int8)v17 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = *(unsigned __int8 *)(a2 + 80);
              LODWORD(v25) = v17;
              LODWORD(v24) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x6Du,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v24,
                v25,
                v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 106LL);
          }
          if ( (_BYTE)v18 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = v18;
              LODWORD(v25) = v17;
              LODWORD(v24) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x6Eu,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v24,
                v25,
                v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 104LL);
          }
          RtlClearAllBits((PRTL_BITMAP)(a2 + 88));
          RtlSetBit((PRTL_BITMAP)(a2 + 208), v17);
          *(_BYTE *)(a2 + 80) = v17;
          ++*(_WORD *)(a2 + 202);
        }
        else
        {
          if ( _bittest64(*(const signed __int64 **)(a2 + 96), v18) )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = v17;
              LODWORD(v25) = v12;
              LODWORD(v24) = v18;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x6Fu,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v24,
                v25,
                v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 101LL);
          }
          if ( *(_BYTE *)(a2 + 81) >= (unsigned __int8)v18 )
          {
            if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
              *v5 = 2;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v26) = *(unsigned __int8 *)(a2 + 81);
              LODWORD(v25) = v18;
              LODWORD(v24) = v12;
              WPP_RECORDER_SF_DDD(
                a5,
                2u,
                v21,
                0x70u,
                (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids,
                v24,
                v25,
                v26);
            }
            (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 105LL);
          }
        }
        RtlClearAllBits((PRTL_BITMAP)(a2 + 136));
        *(_BYTE *)(a2 + 185) = 0;
        v22 = a1[4];
        *(_DWORD *)(a2 + 256) &= ~2u;
        *(_BYTE *)(a2 + 184) = v22;
        RtlSetBit((PRTL_BITMAP)(a2 + 88), v18);
        *(_BYTE *)(a2 + 81) = v18;
      }
      v11 = 1;
    }
    else
    {
      if ( *(_WORD *)a2 > 0x200u || *(_BYTE *)(a2 + 12) || *(_BYTE *)(a2 + 13) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v12;
        WPP_RECORDER_SF_d(a5, 2u, 5u, 0x6Bu, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, v24);
      }
      (*(void (__fastcall **)(_QWORD, __int64, void *))(a2 + 24))(*(_QWORD *)(a2 + 40), 100LL, v13);
    }
LABEL_85:
    if ( !*v5 )
      return v11;
    goto LABEL_86;
  }
  *v5 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDD(a5, 2u, v15, 0x68u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids, *a1, v12, 9);
    goto LABEL_85;
  }
LABEL_86:
  v11 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a5, 2u, 5u, 0x71u, (__int64)&WPP_aa79356b1e693837079f99291824f69e_Traceguids);
  return v11;
}
