__int64 __fastcall ValidateDelegatePointerList(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v7; // ebx
  unsigned int i; // edi
  int *v9; // rdx
  int v10; // esi
  unsigned int *v11; // rdx
  unsigned int v12; // r15d
  int v14; // [rsp+20h] [rbp-98h]
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+D0h] [rbp+18h]

  v18 = a3;
  v5 = a2;
  v7 = 1;
  for ( i = 0; i < a1; ++i )
  {
    v9 = (int *)(v5 + 4LL * i);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (int *)MmUserProbeAddress;
    v10 = *v9;
    v11 = (unsigned int *)(a3 + 4LL * i);
    if ( (unsigned __int64)v11 >= MmUserProbeAddress )
      v11 = (unsigned int *)MmUserProbeAddress;
    v12 = *v11;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LLL(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v11,
        a3,
        0,
        v14,
        v15,
        10,
        v16,
        i,
        v10,
        v12);
    }
    if ( !v10 || HIWORD(v10) || !v12 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v7) = 0;
      }
      if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = v7;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_LLL(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v11,
          a3,
          0,
          v14,
          v15,
          11,
          v16,
          i,
          v10,
          v12);
      }
      return 0;
    }
    PointerDelegateGetClient(v10, v12, (struct tagDELEGATEPOINTERMAP *)(((unsigned __int64)i << 7) + a4));
    a3 = v18;
    v5 = a2;
  }
  return v7;
}
