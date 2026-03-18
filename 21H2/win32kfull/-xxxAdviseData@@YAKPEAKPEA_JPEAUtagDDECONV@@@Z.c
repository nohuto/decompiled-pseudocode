/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0215A00
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02170F0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C02176C8 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C0214D1C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C0214DD8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C0214E8C (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C0215088 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C02150DC (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021647C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C0216B18 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // r14
  void **v4; // r15
  void *v6; // rcx
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // r8d
  struct tagINTDDEINFO *v10; // rsi
  __int16 v11; // ax
  void *v12; // rdx
  int v14; // eax
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // edi
  unsigned int v18; // edi
  int v19; // eax
  void *v20; // rax
  struct tagDDECONV *v21; // rcx
  struct tagXSTATE *v22; // rax
  struct tagINTDDEINFO *v23; // [rsp+50h] [rbp-10h] BYREF
  void *v24; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v23 = 0LL;
  v4 = a2;
  v24 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
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
      29,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
  }
  v6 = *v4;
  v25 = 131;
  v7 = xxxCopyDdeIn(v6, &v25, &v24, &v23);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v23 )
      Win32FreePool(v23);
    return v7;
  }
  if ( v7 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    v10 = v23;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        14,
        30,
        (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
        *((_WORD *)v23 + 36));
    }
    v11 = *((_WORD *)v10 + 36);
    if ( (v11 & 0xA000) == 0 )
    {
      v11 |= 0x2000u;
      *((_WORD *)v10 + 36) = v11;
    }
    if ( (v11 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v10 + 6)) )
      {
        Win32FreePool(v10);
        return 3LL;
      }
      v14 = GiveObject(
              *((unsigned __int16 *)v10 + 37),
              v12,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) + 424LL) + 56LL));
      v17 = v25;
      if ( v14 )
        v17 = v25 | 0x4000;
      v18 = v17 | 0x400;
    }
    else
    {
      v19 = AddPublicObject(
              *((unsigned __int16 *)v10 + 37),
              *((void **)v10 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL) + 424LL) + 56LL));
      v18 = v25;
      if ( v19 )
        v18 = v25 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v10 + 36) >= 0 )
    {
      v21 = (struct tagDDECONV *)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (unsigned int)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
          4,
          14,
          31,
          (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids);
      }
      xxxFreeDDEHandle(v21, v24, v18 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
      {
        *v4 = 0LL;
        return 3;
      }
      v22 = Createpxs(0LL, 0LL, 0LL, v10, v18 | 0x200);
      if ( v22 )
      {
        *((_QWORD *)v22 + 2) = *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL);
        v20 = *(void **)v22;
      }
      else
      {
        v20 = 0LL;
      }
    }
    else
    {
      v20 = AnticipatePost(
              *((struct tagDDECONV **)v3 + 4),
              (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
              0LL,
              v24,
              v10,
              v18);
    }
    *v4 = v20;
    if ( !v20 )
      return 3;
  }
  return v7;
}
