_UNKNOWN **__fastcall IntelPptFilter_DecreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // edi
  _UNKNOWN **result; // rax
  _DWORD *v4; // rbx
  int v5; // eax

  v2 = a2;
  result = &WPP_RECORDER_INITIALIZED;
  v4 = (_DWORD *)(a1 + 48);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *v4 - a2;
    LOBYTE(a2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_dd(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                            a2,
                            16,
                            12,
                            (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
                            *v4,
                            v5);
  }
  *v4 -= v2;
  return result;
}
