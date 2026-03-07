__int64 __fastcall anonymous_namespace_::SetMonitorDockThresholds(unsigned int a1, int a2, const wchar_t *a3)
{
  __int64 v3; // r14
  const wchar_t *v4; // r12
  unsigned int v5; // ebx
  PDEVICE_OBJECT v7; // rcx
  char v8; // dl
  void *v9; // r9
  wchar_t *v10; // rdi
  unsigned int v11; // ebp
  wchar_t *v12; // rsi
  int v13; // r15d
  void *v14; // rdx
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // [rsp+20h] [rbp-58h]

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( (a1 & 0xFFFFFF00) == 0 )
    return 0LL;
  v7 = WPP_GLOBAL_Control;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v9 = &WPP_370f37088ec83dfaa349d955b5e53677_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      (char)a3,
      (unsigned int)&WPP_370f37088ec83dfaa349d955b5e53677_Traceguids,
      v17,
      1u,
      0xAu,
      (__int64)&WPP_370f37088ec83dfaa349d955b5e53677_Traceguids);
  v10 = (wchar_t *)&unk_1C03141C8;
  v11 = v5;
  v12 = (wchar_t *)&unk_1C03141C8;
  while ( 1 )
  {
    v13 = *(_DWORD *)v12;
    LOBYTE(v7) = v11;
    if ( !((unsigned __int8 (__fastcall *)(PDEVICE_OBJECT, _QWORD, const wchar_t *, void *))v4)(
            v7,
            *(unsigned int *)v12,
            a3,
            v9) )
      break;
    v11 >>= 8;
    a3 = L"\\Software\\Microsoft\\Wisp\\Touch";
    v12 += 2;
    if ( v12 == L"\\Software\\Microsoft\\Wisp\\Touch" )
    {
      do
      {
        v14 = &unk_1C035C1E0;
        v15 = 4 * v3 + *(int *)v10;
        v10 += 2;
        *((_BYTE *)&unk_1C035C1E0 + v15) = v5;
        v5 >>= 8;
      }
      while ( v10 != L"\\Software\\Microsoft\\Wisp\\Touch" );
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v14,
          (_DWORD)a3,
          12,
          4,
          1,
          12,
          (__int64)&WPP_370f37088ec83dfaa349d955b5e53677_Traceguids);
      }
      return 1LL;
    }
  }
  v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v16,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      3u,
      1u,
      0xBu,
      (__int64)&WPP_370f37088ec83dfaa349d955b5e53677_Traceguids,
      v3,
      v13);
  return 2LL;
}
