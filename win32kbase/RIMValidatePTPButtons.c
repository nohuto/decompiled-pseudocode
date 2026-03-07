__int64 __fastcall RIMValidatePTPButtons(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // r10d
  int v5; // r9d
  unsigned int v6; // ebp
  _WORD *v7; // rcx
  __int64 v8; // rsi
  __int16 v9; // bx

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = -1073741668;
  if ( !a2 )
    goto LABEL_21;
  v7 = (_WORD *)(a1 + 56);
  v8 = a2;
  do
  {
    v9 = *(v7 - 28);
    if ( v9 == 13 && *v7 == 71 )
    {
      v5 = 1;
    }
    else if ( v9 == 9 )
    {
      switch ( *v7 )
      {
        case 1:
          v2 = 1;
          break;
        case 2:
          v3 = 1;
          break;
        case 3:
          v4 = 1;
          break;
      }
    }
    v7 += 36;
    --v8;
  }
  while ( v8 );
  if ( !v5 )
    goto LABEL_21;
  if ( !v2 )
  {
LABEL_18:
    if ( !v3 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( !v3 )
  {
    if ( !v4 )
      return 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( v4 )
    return 0;
LABEL_21:
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v2,
      (_DWORD)gRimLog,
      3,
      1,
      11,
      (__int64)&WPP_7feda21c293d34506eb30305bf17985f_Traceguids);
  }
  return v6;
}
