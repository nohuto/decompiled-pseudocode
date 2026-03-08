/*
 * XREFs of ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC880
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD134 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01FA95C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAA18 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01FACC8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01FAD1C (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxPoke(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  struct tagDDECONV *v3; // rsi
  void **v4; // r14
  void *v6; // rcx
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rdi
  void *v9; // rdx
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // eax
  void *v14; // rax
  unsigned int v15; // ecx
  struct tagINTDDEINFO *v16; // [rsp+40h] [rbp-10h] BYREF
  void *v17; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = a3;
  v17 = 0LL;
  v4 = a2;
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
      42,
      4,
      14,
      42,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids);
  }
  v6 = *v4;
  v18 = 131;
  v7 = xxxCopyDdeIn(v6, &v18, &v17, &v16);
  if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) != 0 )
  {
    v7 = 3;
    if ( v16 )
      Win32FreePool(v16);
  }
  else if ( v7 == 2 )
  {
    v8 = (unsigned __int16 *)v16;
    if ( (*((_WORD *)v16 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v16 + 6)) )
      {
        Win32FreePool(v8);
        return 3LL;
      }
      v11 = (unsigned int)GiveObject(
                            v8[37],
                            v9,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL) + 424LL) + 56LL)) == 0;
      v12 = v18;
      if ( !v11 )
        v12 = v18 | 0x4000;
      v13 = v12 | 0x400;
    }
    else
    {
      v11 = (unsigned int)AddPublicObject(
                            *((unsigned __int16 *)v16 + 37),
                            *((void **)v16 + 6),
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 16LL) + 424LL) + 56LL)) == 0;
      v13 = v18;
      if ( !v11 )
        v13 = v18 | 0x2000;
    }
    *a1 |= 0x80000000;
    v14 = AnticipatePost(
            *((struct tagDDECONV **)v3 + 4),
            (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxPokeAck,
            v17,
            0LL,
            (struct tagINTDDEINFO *)v8,
            v13);
    v15 = 2;
    *v4 = v14;
    if ( !v14 )
      return 3;
    return v15;
  }
  return v7;
}
