char __fastcall Controller_IsControllerAccessible(__int64 a1)
{
  char v2; // cl

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16LL);
  if ( v2 && !*(_BYTE *)(a1 + 397) )
    return 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 72),
      2,
      4,
      232,
      (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
      v2,
      *(_BYTE *)(a1 + 397));
  return 0;
}
