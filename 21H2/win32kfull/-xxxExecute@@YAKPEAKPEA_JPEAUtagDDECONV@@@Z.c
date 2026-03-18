/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02166F8
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0217594 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C0214DD8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021647C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rsi
  void **v4; // r14
  char v6; // di
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  void *v11; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // edx
  void *v17; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v19; // [rsp+A8h] [rbp+20h] BYREF

  v19 = 0LL;
  v3 = a3;
  v17 = 0LL;
  v4 = a2;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      4,
      14,
      46,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
  }
  v7 = *((_QWORD *)v3 + 5);
  v8 = 2048;
  v18 = 2048;
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 18LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 40LL) + 18LL) & 8) == 0 )
      v8 = 67584;
    v18 = v8;
  }
  v9 = xxxCopyDdeIn(*v4, &v18, &v17, &v19);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v9 = 3;
    if ( v19 )
      Win32FreePool(v19);
  }
  else if ( v9 == 2 )
  {
    v10 = v18;
    *a1 |= 0x80000000;
    v11 = AnticipatePost(*((struct tagDDECONV **)v3 + 4), xxxExecuteAck, v17, 0LL, v19, v10);
    *v4 = v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL) + 488LL) |= 0x20u;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          47,
          4,
          2,
          47,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
          *(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL));
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) + 488LL) |= 0x20u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 48;
        LOBYTE(v15) = v6;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v13,
          v14,
          4,
          2,
          48,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL));
      }
    }
    else
    {
      return 3;
    }
  }
  return v9;
}
