__int64 __fastcall SpontaneousTerminate(unsigned int *a1, struct tagDDECONV *a2)
{
  struct tagDDECONV *v2; // rdi
  int v4; // ecx
  __int64 result; // rax

  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      50,
      4,
      14,
      50,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  v4 = *((_DWORD *)v2 + 20);
  result = 2LL;
  if ( (v4 & 2) != 0 )
    return 1LL;
  *((_DWORD *)v2 + 20) = v4 | 2;
  *a1 |= 0x80000000;
  return result;
}
