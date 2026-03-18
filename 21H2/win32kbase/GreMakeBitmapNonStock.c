/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C0064440
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001E824 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     HmgSetOwner @ 0x1C0028640 (HmgSetOwner.c)
 *     HmgLockAndModifyHandleType @ 0x1C00645F0 (HmgLockAndModifyHandleType.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C006478C (-bDIBSection@SURFACE@@QEAAHXZ.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  SURFACE *v4; // rax
  SURFACE *v5; // rbx
  struct OBJECT *v6; // rcx

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = (SURFACE *)HmgLockEx(a1, a2, 0LL);
  v5 = v4;
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v4) || !*((_WORD *)v5 + 50) && *((_DWORD *)v5 + 54))
      && (void *)a1 != gahStockObjects[21]
      && (a1 & 0x800000) != 0 )
    {
      v2 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *((_DWORD *)v5 + 42) )
      {
        if ( _bittest((const signed __int32 *)v5, 0x17u) )
          *((_WORD *)v5 + 51) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v6) )
      {
        _InterlockedIncrement(&gStockBitmapFree);
        *((_QWORD *)v5 + 4) = v2;
        *((_WORD *)v5 + 51) &= ~0x200u;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, 0x80000002, 5);
      }
      else
      {
        v2 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
  }
  return v2;
}
