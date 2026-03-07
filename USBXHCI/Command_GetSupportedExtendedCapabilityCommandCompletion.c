LONG __fastcall Command_GetSupportedExtendedCapabilityCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  int v2; // edx
  __int64 v3; // r10
  int v4; // edx
  char v6; // [rsp+28h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 48);
  v2 = *(unsigned __int8 *)(a1 + 60);
  v3 = *v1;
  if ( (_BYTE)v2 == 1 )
  {
    v4 = *(unsigned __int16 *)(a1 + 64);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL) + 112LL) = v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v4;
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_D(*(_QWORD *)(v3 + 16), v4, 7, 25, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids, v6);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_L(
      *(_QWORD *)(v3 + 16),
      v2,
      7,
      26,
      (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
      *(_BYTE *)(a1 + 60));
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
