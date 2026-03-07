__int64 __fastcall HUBHTX_Suspend30PortUsingControlTransfer(__int64 a1)
{
  char v2; // al
  __int64 *v3; // rdi
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+28h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 3;
  *(_BYTE *)(a1 + 168) = v2 | 0x23;
  *(_WORD *)(a1 + 170) = 5;
  *(_BYTE *)(a1 + 172) = *(_BYTE *)(a1 + 200);
  *(_BYTE *)(a1 + 173) = 3;
  *(_WORD *)(a1 + 174) = 0;
  v3 = (__int64 *)(a1 + 1432);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(unsigned __int16 *)(a1 + 200);
    WPP_RECORDER_SF_d(*v3, 4u, 4u, 0x44u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v5);
  }
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2272LL));
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = result;
      WPP_RECORDER_SF_d(*v3, 2u, 4u, 0x45u, (__int64)&WPP_65667e477e4f3bda131abce8e5de791a_Traceguids, v6);
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
