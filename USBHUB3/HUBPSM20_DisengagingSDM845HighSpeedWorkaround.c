__int64 __fastcall HUBPSM20_DisengagingSDM845HighSpeedWorkaround(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD **)(a1 + 960);
  v4 = HUBACPI_ExecuteDSM(*v3, a2, a3, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    WPP_RECORDER_SF_d(v3[179], 4u, 5u, 0x7Fu, (__int64)&WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v6);
  }
  return 3013LL;
}
