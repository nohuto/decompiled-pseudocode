__int64 __fastcall HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer(__int64 a1)
{
  __int64 result; // rax
  char v3; // cl
  __int64 v4; // [rsp+28h] [rbp-20h]

  LODWORD(result) = -1073741637;
  v3 = *(_BYTE *)(a1 + 2004);
  if ( !v3 || (result = HUBDTX_GetDescriptor(a1, a1 + 1732, 255, 3, v3, 1033), (int)result < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x42u,
        (__int64)&WPP_84d33890ce5c36f044156420b7e16ac3_Traceguids,
        v4);
    }
    return HUBSM_AddEvent(a1 + 504, 4004);
  }
  return result;
}
