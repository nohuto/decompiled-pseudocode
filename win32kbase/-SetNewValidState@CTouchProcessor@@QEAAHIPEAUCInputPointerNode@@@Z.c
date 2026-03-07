_BOOL8 __fastcall CTouchProcessor::SetNewValidState(struct _KTHREAD **this, _QWORD *a2, struct CInputPointerNode *a3)
{
  struct CInputPointerNode *v3; // rbp
  unsigned int v4; // r14d
  char v5; // di
  BOOL v6; // ebx
  int v7; // esi
  bool v8; // zf
  int v9; // r8d
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+38h] [rbp-40h]

  v3 = a3;
  v4 = (unsigned int)a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1714);
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      61,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  if ( (v4 & 0x70006) == 0x10006 )
  {
    v6 = *((_DWORD *)v3 + 14) <= 1u;
  }
  else
  {
    if ( (v4 & 0x70006) == 0x20000 )
    {
      v8 = *((_DWORD *)v3 + 14) == 1;
      v7 = 3;
LABEL_29:
      v6 = v8;
      goto LABEL_36;
    }
    if ( (v4 & 0x70006) == 0x20002 )
    {
      v7 = 1;
      v6 = *((_DWORD *)v3 + 14) <= 1u;
      goto LABEL_36;
    }
    if ( (v4 & 0x70006) != 0x20006 )
    {
      if ( (v4 & 0x70006) == 0x40000 )
      {
        v7 = 3;
      }
      else
      {
        if ( (v4 & 0x70006) != 0x40002 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_L(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)a2,
              (_DWORD)a3,
              (unsigned int)&WPP_GLOBAL_Control,
              2,
              7,
              62,
              (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids,
              v4);
          }
          v6 = 0;
          goto LABEL_40;
        }
        v7 = 1;
      }
      v8 = *((_DWORD *)v3 + 14) == 2;
      goto LABEL_29;
    }
    v6 = *((_DWORD *)v3 + 14) == 2;
  }
  v7 = 2;
LABEL_36:
  if ( !v6 )
    goto LABEL_40;
  if ( (v4 & 4) != 0 )
  {
    if ( (v4 & 0x1F0) == 0 )
    {
      v6 = 0;
      goto LABEL_40;
    }
    v6 = 1;
  }
  if ( (*((_DWORD *)v3 + 75) & 8) != 0 )
  {
    v6 = (v4 & 0x8000) != 0;
    if ( (v4 & 0x8000) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1836);
LABEL_40:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_LL(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)a2,
          (_DWORD)a3,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          v13,
          63,
          v14,
          v4,
          *((_DWORD *)v3 + 14));
      }
      goto LABEL_47;
    }
  }
  *((_DWORD *)v3 + 14) = v7;
  if ( v7 == 3 )
  {
    v11 = (_QWORD *)((char *)v3 + 16);
    v12 = *((_QWORD *)v3 + 2);
    if ( (struct CInputPointerNode *)v12 != (struct CInputPointerNode *)((char *)v3 + 16) )
    {
      if ( *(_QWORD **)(v12 + 8) != v11 || (a2 = (_QWORD *)*((_QWORD *)v3 + 3), (_QWORD *)*a2 != v11) )
        __fastfail(3u);
      *a2 = v12;
      *(_QWORD *)(v12 + 8) = a2;
      *((_QWORD *)v3 + 3) = (char *)v3 + 16;
      *v11 = v11;
    }
  }
  *((_DWORD *)v3 + 75) = *((_DWORD *)v3 + 75) & 0xFFFFFFF3 | ((v4 & 0x2000 | (v4 >> 1) & 0x4000) >> 11);
LABEL_47:
  v9 = 64;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)a2 || v5 )
  {
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v9,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      64,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return v6;
}
