/*
 * XREFs of ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB620
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD260 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01FA95C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAA18 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAACC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01FACC8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01FAD1C (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAXK@Z @ 0x1C01FC6B8 (-xxxFreeDDEHandle@@YAXPEAXK@Z.c)
 */

__int64 __fastcall xxxAdviseData(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // r14
  void **v4; // r15
  void *v6; // rcx
  unsigned int v7; // ebx
  char v8; // dl
  struct tagINTDDEINFO *v9; // rsi
  __int16 v10; // ax
  void *v11; // rdx
  int v13; // eax
  int v14; // edx
  int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // edi
  int v18; // eax
  void *v19; // rax
  struct tagXSTATE *v20; // rax
  struct tagINTDDEINFO *v21; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a3;
  v21 = 0LL;
  v4 = a2;
  v22 = 0LL;
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
      (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      4,
      14,
      29,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v6 = *v4;
  v23 = 131;
  v7 = xxxCopyDdeIn(v6, &v23, &v22, &v21);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v21 )
      Win32FreePool(v21);
    return v7;
  }
  if ( v7 == 2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v8 = 0;
    }
    v9 = v21;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0xEu,
        0x1Eu,
        (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
        *((unsigned __int16 *)v21 + 36));
    v10 = *((_WORD *)v9 + 36);
    if ( (v10 & 0xA000) == 0 )
    {
      v10 |= 0x2000u;
      *((_WORD *)v9 + 36) = v10;
    }
    if ( (v10 & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v9 + 6)) )
      {
        Win32FreePool(v9);
        return 3LL;
      }
      v13 = GiveObject(
              *((unsigned __int16 *)v9 + 37),
              v11,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) + 424LL) + 56LL));
      v16 = v23;
      if ( v13 )
        v16 = v23 | 0x4000;
      v17 = v16 | 0x400;
    }
    else
    {
      v18 = AddPublicObject(
              *((unsigned __int16 *)v9 + 37),
              *((void **)v9 + 6),
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL) + 424LL) + 56LL));
      v17 = v23;
      if ( v18 )
        v17 = v23 | 0x2000;
    }
    *a1 |= 0x80000000;
    if ( *((__int16 *)v9 + 36) >= 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          (unsigned int)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
          4,
          14,
          31,
          (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
      }
      xxxFreeDDEHandle(v22, v17 & 0xFFFFFFFE);
      if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
      {
        *v4 = 0LL;
        return 3;
      }
      v20 = Createpxs(0LL, 0LL, 0LL, v9, v17 | 0x200);
      if ( v20 )
      {
        *((_QWORD *)v20 + 2) = *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL);
        v19 = *(void **)v20;
      }
      else
      {
        v19 = 0LL;
      }
    }
    else
    {
      v19 = AnticipatePost(
              *((struct tagDDECONV **)v3 + 4),
              (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
              0LL,
              v22,
              v9,
              v17);
    }
    *v4 = v19;
    if ( !v19 )
      return 3;
  }
  return v7;
}
