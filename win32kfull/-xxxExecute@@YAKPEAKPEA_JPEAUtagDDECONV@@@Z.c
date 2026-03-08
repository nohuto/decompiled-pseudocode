/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC298
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD134 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAA18 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
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
  __int64 v12; // r9
  char v13; // dl
  void *v15; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v17; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0LL;
  v3 = a3;
  v15 = 0LL;
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
      (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      4,
      14,
      46,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v7 = *((_QWORD *)v3 + 5);
  v8 = 2048;
  v16 = 2048;
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 18LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 40LL) + 18LL) & 8) == 0 )
      v8 = 67584;
    v16 = v8;
  }
  v9 = xxxCopyDdeIn(*v4, &v16, &v15, &v17);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v9 = 3;
    if ( v17 )
      Win32FreePool(v17);
  }
  else if ( v9 == 2 )
  {
    v10 = v16;
    *a1 |= 0x80000000;
    v11 = AnticipatePost(*((struct tagDDECONV **)v3 + 4), xxxExecuteAck, v15, 0LL, v17, v10);
    *v4 = v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL) + 488LL) |= 0x20u;
      v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v13,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          47LL,
          4u,
          2u,
          0x2Fu,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
          *(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL));
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) + 488LL) |= 0x20u;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v12,
          4u,
          2u,
          0x30u,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL));
    }
    else
    {
      return 3;
    }
  }
  return v9;
}
