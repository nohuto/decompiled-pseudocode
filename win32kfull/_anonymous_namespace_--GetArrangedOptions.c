/*
 * XREFs of _anonymous_namespace_::GetArrangedOptions @ 0x1C023E328
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x1C00FF518 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C01F4350 (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetArrangedOptions(
        struct tagWND *a1,
        struct tagRECT *a2,
        CMonitorTopology::MonitorData *this)
{
  struct tagRECT v5; // xmm6
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // edi
  char v9; // bl
  void *v10; // r9
  void *v11; // r8
  struct tagRECT v13; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v14; // [rsp+50h] [rbp-38h] BYREF

  v5 = *WindowMargins::ReduceRect(&v14, a2, a1, (const struct tagRECT *)*((unsigned __int16 *)this + 20));
  v14 = v5;
  CMonitorTopology::MonitorData::LogicalWorkArea(this, &v13, (const struct tagWND *)a2);
  v8 = 0;
  v9 = 1;
  v10 = &WPP_8482559141b533a3203925fe2b840c7c_Traceguids;
  if ( _mm_cvtsi128_si32((__m128i)v5) == v13.left )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        29,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
      v10 = &WPP_8482559141b533a3203925fe2b840c7c_Traceguids;
    }
    v8 = 2;
  }
  if ( v14.right == v13.right )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        30,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v8 |= 8u;
  }
  if ( v14.top == v13.top )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (LOBYTE(v7) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v6 || (_BYTE)v7 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        (unsigned int)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        5,
        25,
        31,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    v8 |= 4u;
  }
  if ( v14.bottom == v13.bottom )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x18u)
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( (_BYTE)v6 || v9 )
    {
      v11 = &WPP_8482559141b533a3203925fe2b840c7c_Traceguids;
      LOBYTE(v11) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        (_DWORD)v11,
        (_DWORD)v10,
        5,
        25,
        32,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
    v8 |= 0x10u;
  }
  return v8;
}
