__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  __int64 v4; // rdx

  TR_InitializeTransferRing();
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v4 = *(_QWORD *)(v3 + 24);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      v4,
      v3,
      18,
      (__int64)&WPP_9ff532af533633cb75752ac9b9d63831_Traceguids,
      *(_BYTE *)(a1[6] + 135LL),
      *(_DWORD *)(v3 + 144),
      *(_QWORD *)(v3 + 24),
      v2);
  }
  return v2;
}
