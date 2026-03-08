/*
 * XREFs of ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FBD3C
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB410 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB960 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCA60 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD030 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01FAACC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01FACC8 (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C01FAEC8 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FC044 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxCopyAckIn(unsigned int *a1, void **a2, struct tagDDECONV *a3, struct tagINTDDEINFO **a4)
{
  __int64 v4; // rbp
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct tagINTDDEINFO *v11; // rbp
  __int64 v12; // rdx
  struct tagXSTATE *v13; // rax
  __int64 v14; // rax
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v4 = *((_QWORD *)a3 + 7);
  v16 = 4097;
  v9 = xxxCopyDdeIn(*a2, &v16, 0LL, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 || *((_QWORD *)a3 + 7) != v4 )
  {
    v9 = 3;
    if ( *a4 )
      Win32FreePool(*a4);
    return v9;
  }
  if ( v9 == 2 )
  {
    v10 = *((_QWORD *)a3 + 7);
    v11 = *a4;
    if ( (*(_DWORD *)(v10 + 64) & 0x4000) != 0 && *((__int16 *)v11 + 36) >= 0 )
      GiveObject(
        *(unsigned __int16 *)(*(_QWORD *)(v10 + 56) + 74LL),
        *(void **)(*(_QWORD *)(v10 + 56) + 48LL),
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL));
    v12 = *((_QWORD *)a3 + 7);
    if ( (*(_DWORD *)(v12 + 64) & 0x2000) != 0 )
    {
      RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(v12 + 56) + 74LL), *(void **)(*(_QWORD *)(v12 + 56) + 48LL));
      *(_DWORD *)(*((_QWORD *)a3 + 7) + 64LL) &= ~0x2000u;
    }
    v13 = Createpxs(0LL, 0LL, 0LL, v11, v16 | 0x200);
    if ( v13 )
    {
      *((_QWORD *)v13 + 2) = *(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL);
      v14 = *(_QWORD *)v13;
      *a2 = (void *)v14;
      if ( v14 )
      {
        *a1 |= 0x80000000;
        return v9;
      }
    }
    else
    {
      *a2 = 0LL;
    }
    return 3LL;
  }
  return v9;
}
