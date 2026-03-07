char __fastcall HUBDESC_ValidateMsOs20DescriptorSet(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rcx
  char v5; // r14
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v13; // [rsp+28h] [rbp-40h]
  unsigned __int16 *v14; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 **)(a2 + 24);
  v5 = 1;
  v6 = *(unsigned __int16 *)(a2 + 20);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x163u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *(_DWORD *)(a2 + 12),
        v6);
    v8 = 188LL;
LABEL_37:
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v8);
    v5 = 0;
    goto LABEL_38;
  }
  if ( v7 < 0xA )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x164u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *(_DWORD *)(a2 + 12));
    v8 = 189LL;
    goto LABEL_37;
  }
  if ( *v4 != 10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x165u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *v4);
    v8 = 190LL;
    goto LABEL_37;
  }
  v9 = v4[4];
  if ( (_WORD)v6 != (_WORD)v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x166u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        v6,
        v9);
    v8 = 191LL;
    goto LABEL_37;
  }
  if ( *((_DWORD *)v4 + 1) > *(_DWORD *)(a2 + 16) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a2 + 96),
        2u,
        5u,
        0x167u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *((_DWORD *)v4 + 1),
        *(_DWORD *)(a2 + 16));
    v8 = 192LL;
    goto LABEL_37;
  }
  v14 = v4;
  v10 = (unsigned __int64)v4 + v9;
  do
  {
    v11 = v4[1];
    if ( v11 >= 9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v4[1];
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x169u,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
          v13);
      }
    }
    else
    {
      v5 = ((unsigned __int8 (__fastcall *)(__int64, __int64, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + 2 * v4[1]))(
             a1,
             a2,
             v4,
             v10) != 0
         ? v5
         : 0;
      if ( v11 - 1 > 1 && (*(_BYTE *)a2 & 0x18) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a2 + 96),
            2u,
            5u,
            0x168u,
            (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 193LL);
        v5 = 0;
      }
    }
    if ( !HUBDESC_GetNextMsOs20Descriptor(v10, &v14) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a2 + 96),
          2u,
          5u,
          0x16Au,
          (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
      v8 = 194LL;
      goto LABEL_37;
    }
    v4 = v14;
  }
  while ( v14 );
  if ( v5 )
    return v5;
LABEL_38:
  *(_DWORD *)a2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 96), 2u, 5u, 0x16Bu, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v5;
}
