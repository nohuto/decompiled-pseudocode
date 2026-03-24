/*
 * XREFs of ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDF4
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C8DC (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021AB08 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021BC5C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxExecute(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // r14
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // edi
  __int64 v9; // rax
  struct tagINTDDEINFO *v10; // rsi
  void *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+18h] BYREF
  struct tagINTDDEINFO *v18; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 46, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 5);
  v7 = 2048;
  v17 = 2048;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 18LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 40LL) + 18LL) & 8) == 0 )
      v7 = 67584;
    v17 = v7;
  }
  v8 = xxxCopyDdeIn(*v4, &v17, &v16, &v18);
  v9 = _HMPheFromObject(a3);
  v10 = v18;
  if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
  {
    v8 = 3;
    if ( !v18 )
      return v8;
    Win32FreePool(v18);
  }
  if ( v8 == 2 )
  {
    *a1 |= 0x80000000;
    v11 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxExecuteAck, v16, 0LL, v10, v17);
    *v4 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      *(_DWORD *)(v13 + 488) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          v13,
          v12,
          2,
          47,
          (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
          *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL));
      }
      v14 = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
      *(_DWORD *)(v14 + 488) |= 0x20u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(
          v14,
          v12,
          2,
          48,
          (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
          *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL));
      }
    }
    else
    {
      return 3;
    }
  }
  return v8;
}
