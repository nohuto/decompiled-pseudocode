__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // di
  bool v4; // dl
  unsigned int v5; // eax
  __int64 v6; // rdx
  int v7; // edx

  v1 = *(_QWORD *)(a1 + 760);
  v3 = 1;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      13,
      18,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      a1,
      v1);
  if ( !v1 )
    return 0LL;
  v5 = *(_DWORD *)(v1 + 28);
  v6 = 0LL;
  if ( !v5 )
  {
LABEL_23:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = v3;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (_DWORD)gFullLog,
        4,
        13,
        20,
        (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
        a1,
        v1);
    }
    return 0LL;
  }
  while ( a1 != *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * v6) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_23;
  }
  *(_QWORD *)(a1 + 760) = 0LL;
  memmove(
    (void *)(*(_QWORD *)(v1 + 40) + 8 * v6),
    (const void *)(*(_QWORD *)(v1 + 40) + 8 * v6 + 8),
    8LL * (unsigned int)(*(_DWORD *)(v1 + 28) - v6 - 1));
  if ( (*(_DWORD *)(v1 + 28))-- == 1 )
  {
    Win32FreePool(*(void **)(v1 + 40));
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_DWORD *)(v1 + 32) = 0;
  }
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      13,
      19,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      a1,
      v1);
  return 1LL;
}
