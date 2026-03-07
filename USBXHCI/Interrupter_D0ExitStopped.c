PDEVICE_OBJECT __fastcall Interrupter_D0ExitStopped(__int64 a1, int a2)
{
  PDEVICE_OBJECT result; // rax
  unsigned int i; // edi
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-48h]
  char v7; // [rsp+30h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v7 = a2;
      LOBYTE(a2) = 5;
      result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qL(
                                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                 a2,
                                 9,
                                 36,
                                 (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
                                 a1,
                                 v7);
    }
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 80); ++i )
  {
    result = *(PDEVICE_OBJECT *)(a1 + 32);
    v5 = *((_QWORD *)&result->Type + i);
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = (PDEVICE_OBJECT)WPP_RECORDER_SF_qqdddi(
                                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                                   *(_DWORD *)(v5 + 124),
                                   *(_QWORD *)(v5 + 144),
                                   37,
                                   v6,
                                   v5,
                                   *(_QWORD *)(v5 + 144),
                                   *(_DWORD *)(v5 + 120),
                                   *(_DWORD *)(v5 + 128),
                                   *(_DWORD *)(v5 + 124),
                                   *(_BYTE *)(*(_QWORD *)(v5 + 144) + 24LL)
                                 + 16 * (unsigned __int8)*(_DWORD *)(v5 + 124));
    }
  }
  return result;
}
