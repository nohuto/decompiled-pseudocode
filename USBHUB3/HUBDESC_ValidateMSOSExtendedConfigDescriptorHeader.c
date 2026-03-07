char __fastcall HUBDESC_ValidateMSOSExtendedConfigDescriptorHeader(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v7; // bl
  __int64 v8; // rdx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v7 = 1;
  if ( a2 != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x113u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, a2, 16);
    v8 = 122LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), v8);
    v7 = 0;
    goto LABEL_23;
  }
  if ( *(_WORD *)(a1 + 4) != 256 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        a4,
        2u,
        5u,
        0x114u,
        (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids,
        *(unsigned __int16 *)(a1 + 4),
        256);
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 120LL);
    v7 = 0;
  }
  if ( *(_WORD *)(a1 + 6) != 4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = 4;
      LODWORD(v11) = *(unsigned __int16 *)(a1 + 6);
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x115u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11, v12);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 125LL);
    v7 = 0;
  }
  v9 = *(unsigned __int8 *)(a1 + 8);
  if ( (_BYTE)v9 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a4, 2u, 5u, 0x116u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
    v8 = 121LL;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a1 == 40 )
  {
    if ( v7 )
      return v7;
  }
  else
  {
    v7 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = 24 * v9 + 16;
      LODWORD(v11) = *(_DWORD *)a1;
      WPP_RECORDER_SF_DD(a4, 2u, 5u, 0x117u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids, v11, v12);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(a3 + 24))(*(_QWORD *)(a3 + 40), 127LL);
  }
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(a4, 2u, 5u, 0x118u, (__int64)&WPP_f469c93bdbd23e392266c2e57c8e9931_Traceguids);
  return v7;
}
