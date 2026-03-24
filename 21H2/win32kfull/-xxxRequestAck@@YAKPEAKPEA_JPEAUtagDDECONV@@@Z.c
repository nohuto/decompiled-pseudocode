/*
 * XREFs of ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C021AA4C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021AB08 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C021ABB8 (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C021AC94 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C021AD4C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C021ADA0 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021AEA4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B4D8 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C021BA1C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021BC5C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9C0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientGetDDEFlags @ 0x1C0232C70 (xxxClientGetDDEFlags.c)
 */

unsigned int __fastcall xxxRequestAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  __int64 *v4; // r12
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int16 v9; // si
  int v10; // r13d
  __int64 v11; // rax
  struct tagINTDDEINFO *v12; // rsi
  __int16 v13; // ax
  void *v14; // rdx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // edi
  int v20; // eax
  struct tagXSTATE *v21; // rax
  int v22; // edi
  void *v23; // [rsp+30h] [rbp-10h] BYREF
  struct tagINTDDEINFO *v24; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+30h] BYREF
  int DDEFlags; // [rsp+88h] [rbp+48h]

  v24 = 0LL;
  v4 = a2;
  v23 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      (unsigned int)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids,
      (_DWORD)a2,
      14,
      40,
      (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
  }
  if ( *a1 != 996 )
  {
    if ( *a1 != 997 )
      return xxxUnexpectedServerPost(a1, v4, a3);
    v7 = *v4;
    v8 = *((_QWORD *)a3 + 7);
    v25 = 131;
    DDEFlags = xxxClientGetDDEFlags(v7);
    v9 = DDEFlags;
    if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v8 )
      return 3;
    if ( (v9 & 0x1000) == 0 )
      return xxxAdviseData(a1, (void **)v4, a3);
    v10 = xxxCopyDdeIn((void *)*v4, &v25, &v23, &v24);
    v11 = _HMPheFromObject(a3);
    v12 = v24;
    if ( (*(_BYTE *)(v11 + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v8 )
    {
      v10 = 3;
      if ( !v24 )
        return v10;
      Win32FreePool(v24);
    }
    if ( v10 == 2 )
    {
      v13 = *((_WORD *)v12 + 36);
      if ( (v13 & 0xA000) == 0 )
        *((_WORD *)v12 + 36) = v13 | 0x2000;
      if ( (DDEFlags & 0x2000) != 0 )
      {
        if ( IsObjectPublic(*((void **)v12 + 6)) )
        {
          Win32FreePool(v12);
          return 3;
        }
        v15 = GiveObject(
                *((unsigned __int16 *)v12 + 37),
                v14,
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL));
        v18 = v25;
        if ( v15 )
          v18 = v25 | 0x4000;
        v19 = v18 | 0x400;
      }
      else
      {
        v20 = AddPublicObject(
                *((unsigned __int16 *)v12 + 37),
                *((void **)v12 + 6),
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL));
        v19 = v25;
        if ( v20 )
          v19 = v25 | 0x2000;
      }
      *a1 |= 0x80000000;
      if ( (DDEFlags & 0x8000) != 0 )
      {
        v21 = (struct tagXSTATE *)AnticipatePost(
                                    *((struct tagDDECONV **)a3 + 4),
                                    (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxAdviseDataAck,
                                    0LL,
                                    v23,
                                    v12,
                                    v19);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_(v17, v16, 14, 41, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids);
        }
        FreeListAdd((PETHREAD **)a3, v23, v19 & 0xFFFFFFFE);
        v21 = Createpxs(0LL, 0LL, 0LL, v12, v19 | 0x200);
        if ( v21 )
        {
          *((_QWORD *)v21 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
          v21 = *(struct tagXSTATE **)v21;
        }
      }
      *v4 = (__int64)v21;
      if ( v21 )
        PopState(a3);
      else
        return 3;
    }
    return v10;
  }
  v22 = xxxCopyAckIn(a1, (void **)v4, a3, &v24);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v22 = 0;
  if ( v22 != 2 )
    return v22;
  PopState(a3);
  return 2;
}
