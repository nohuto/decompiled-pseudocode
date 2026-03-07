__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r10
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rtt
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // eax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0063428);
  if ( *(_DWORD *)(v3 + 392) == 1 )
  {
    v4 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(v3 + 444) / 10000LL;
    v5 = ((unsigned int)(**(_DWORD **)(*(_QWORD *)(v3 + 88) + 40LL) + 1) >> 3) & 0x7FF;
    _m_prefetchw((const void *)(v3 + 432));
    v6 = *(_QWORD *)(v3 + 432);
    do
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 432), v6, v6);
    }
    while ( v7 != v6 );
    v8 = v5 | (v4 + ((_DWORD)v6 << 11) - (v6 >> 21)) & 0xFFFFF800;
    v9 = ((_WORD)v4 + ((_WORD)v6 << 11) - (unsigned __int16)(v6 >> 21)) & 0x7FF;
    if ( v9 < v5 )
    {
      v12 = v5 - v9;
      v13 = v8 - 2048;
      if ( v12 <= 0x400 )
        v13 = v8;
      v8 = v13;
    }
    else if ( v9 - v5 > 0x400 )
    {
      v8 += 2048;
    }
    v10 = _InterlockedExchange64(
            (volatile __int64 *)(v3 + 432),
            ((unsigned __int64)v8 >> 11) | ((v4 - (v8 & 0x7FF)) << 21));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(v3 + 72),
        v10,
        4,
        177,
        (__int64)&WPP_ac07559723993fb37d1c33c002d3118e_Traceguids,
        v8);
    }
    *a2 = v8;
  }
  else
  {
    *a2 = -1;
  }
  return 0LL;
}
