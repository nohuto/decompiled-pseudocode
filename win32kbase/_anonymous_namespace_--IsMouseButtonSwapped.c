bool __fastcall anonymous_namespace_::IsMouseButtonSwapped(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // edi
  int v7; // esi
  bool v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // cl
  __int64 v18; // rcx
  __int64 v19; // rax
  const char *v20; // r9

  v4 = (unsigned __int8)a2;
  v5 = a1;
  if ( (unsigned int)(a1 - 1) > 1 )
    return 0;
  v7 = *((_DWORD *)gpsi + 497);
  v8 = v7 != 0;
  if ( *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 15992) )
  {
    v13 = SGDGetUserSessionState(v10, v9, v11, v12);
    v17 = 16;
    if ( v5 != 1 )
      v17 = 4;
    v18 = ((unsigned __int8)v17 & *(_BYTE *)(v13 + 13992)) != 0;
    if ( (v4 ^ 1) == (_DWORD)v18 )
    {
      v19 = SGDGetUserSessionState(v18, v14, v15, v16);
      v14 = 16LL;
      v18 = 4LL;
      if ( v5 != 1 )
        v18 = 16LL;
      if ( v4 == (((unsigned __int8)v18 & *(_BYTE *)(v19 + 13992)) != 0) )
      {
        v18 = (__int64)WPP_GLOBAL_Control;
        LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = "Up";
          if ( !(_BYTE)v4 )
            v20 = "Down";
          WPP_RECORDER_AND_TRACE_SF_sscc(WPP_GLOBAL_Control->AttachedDevice, v14, v15, (_DWORD)v20);
        }
        v8 = v7 == 0;
      }
    }
    *(_BYTE *)(SGDGetUserSessionState(v18, v14, v15, v16) + 15992) = 0;
  }
  return v8;
}
