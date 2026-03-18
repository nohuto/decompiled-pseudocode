/*
 * XREFs of RIMInjectInput @ 0x1C01849A0
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0003B78 (rimProcessDeviceBufferAndStartRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall RIMInjectInput(char *a1, char *a2, int a3, char *a4, unsigned int Size)
{
  char *v6; // r13
  int v8; // edx
  int v9; // r8d
  int v10; // r14d
  struct RawInputManagerObject *v11; // r15
  int v12; // edx
  int v13; // edx
  PVOID v14; // r13
  char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rcx
  _UNKNOWN **v19; // r8
  _UNKNOWN **v20; // r8
  PVOID v22; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF
  int v24; // [rsp+A0h] [rbp+18h]

  v24 = a3;
  v6 = a2;
  v22 = 0LL;
  Object[0] = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      95,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v10 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &v22);
  if ( v10 >= 0 )
  {
    v11 = (struct RawInputManagerObject *)v22;
    RIMLockExclusive((__int64)v22 + 104);
    if ( !bRimDispositionNormal(v11) )
    {
      v10 = -1073741637;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v20 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          (_DWORD)v20,
          (_DWORD)gRimLog,
          3,
          1,
          98,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      goto LABEL_43;
    }
    v10 = RawInputManagerDeviceObjectResolveHandle(v6, 3u, 1, Object);
    if ( v10 < 0 )
    {
LABEL_43:
      *((_QWORD *)v11 + 14) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v11 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v11);
      goto LABEL_44;
    }
    v14 = Object[0];
    if ( Object[0] )
      v15 = (char *)Object[0] + 88;
    else
      v15 = 0LL;
    Object[1] = v15;
    if ( (*((_DWORD *)v15 + 46) & 0x2000) == 0 )
    {
      v10 = -1073741811;
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v19 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          (_DWORD)v19,
          (_DWORD)gRimLog,
          3,
          1,
          97,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      goto LABEL_26;
    }
    RIMLockExclusive((__int64)v11 + 792);
    *((_DWORD *)v15 + 64) = 0;
    v16 = *((_QWORD *)v15 + 57);
    v17 = *(unsigned __int16 *)(v16 + 44);
    if ( Size < (unsigned int)v17 )
      v17 = Size;
    *((_QWORD *)v15 + 33) = (unsigned int)v17;
    if ( v24 )
    {
      v18 = *(char **)(v16 + 24);
      if ( &a4[v17] < a4 || (unsigned __int64)&a4[v17] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    else
    {
      v18 = *(char **)(v16 + 24);
      if ( a4 == v18 )
      {
LABEL_25:
        rimProcessDeviceBufferAndStartRead(v11, (struct RIMDEV *)v15, 1);
        *((_QWORD *)v11 + 100) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v11 + 792, 0LL);
        KeLeaveCriticalRegion();
LABEL_26:
        ObfDereferenceObject(v14);
        goto LABEL_43;
      }
    }
    memmove(v18, a4, (unsigned int)v17);
    goto LABEL_25;
  }
LABEL_44:
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      99,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v10);
  }
  return (unsigned int)v10;
}
