__int64 __fastcall HUBHSM_CheckingIfUsb4DromShouldBeRead(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( !*(_BYTE *)(v1 + 240) || *(_DWORD *)(v1 + 160) != 1 )
    return 2041LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2520), 4u, 3u, 0x33u, (__int64)&WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids);
  *(_DWORD *)(v1 + 2700) = 0;
  *(_DWORD *)(v1 + 2696) = 0;
  *(_QWORD *)(v1 + 2688) = v1 + 2664;
  result = 2057LL;
  *(_DWORD *)(v1 + 2680) = 4;
  return result;
}
