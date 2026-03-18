/*
 * XREFs of ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA8F4
 * Callers:
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FAE68 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ?AddPublicObject@@YAHIPEAXK@Z @ 0x1C01F976C (-AddPublicObject@@YAHIPEAXK@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F9828 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?GiveObject@@YAHIPEAXK@Z @ 0x1C01F9A1C (-GiveObject@@YAHIPEAXK@Z.c)
 *     ?IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z @ 0x1C01F9A70 (-IsObjectPublic@@YAPEAUtagPUBOBJ@@PEAX@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01FA48C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxPoke(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v6; // ebx
  unsigned __int16 *v7; // rdi
  void *v8; // rdx
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *v13; // rax
  unsigned int v14; // ecx
  struct tagINTDDEINFO *v15; // [rsp+30h] [rbp-10h] BYREF
  void *v16; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+48h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 131;
  v6 = xxxCopyDdeIn(*a2, &v17, &v16, &v15);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
  {
    v6 = 3;
    if ( v15 )
      Win32FreePool(v15);
  }
  else if ( v6 == 2 )
  {
    v7 = (unsigned __int16 *)v15;
    if ( (*((_WORD *)v15 + 36) & 0x2000) != 0 )
    {
      if ( IsObjectPublic(*((void **)v15 + 6)) )
      {
        Win32FreePool(v7);
        return 3LL;
      }
      v10 = (unsigned int)GiveObject(
                            v7[37],
                            v8,
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 6) + 16LL) + 424LL) + 56LL)) == 0;
      v11 = v17;
      if ( !v10 )
        v11 = v17 | 0x4000;
      v12 = v11 | 0x400;
    }
    else
    {
      v10 = (unsigned int)AddPublicObject(
                            *((unsigned __int16 *)v15 + 37),
                            *((void **)v15 + 6),
                            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL) + 424LL) + 56LL)) == 0;
      v12 = v17;
      if ( !v10 )
        v12 = v17 | 0x2000;
    }
    *a1 |= 0x80000000;
    v13 = AnticipatePost(*((struct tagDDECONV **)a3 + 4), xxxPokeAck, v16, 0LL, (struct tagINTDDEINFO *)v7, v12);
    v14 = 2;
    *a2 = v13;
    if ( !v13 )
      return 3;
    return v14;
  }
  return v6;
}
