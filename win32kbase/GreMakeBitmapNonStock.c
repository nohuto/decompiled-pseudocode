/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C001D190
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0046684 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001D270 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgLockAndModifyHandleType @ 0x1C001D290 (HmgLockAndModifyHandleType.c)
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  struct OBJECT *v7; // rcx
  __int64 v8; // r8

  LOBYTE(a2) = 5;
  v2 = 0LL;
  v4 = HmgLockEx(a1, a2, 0LL);
  v6 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
  if ( v4 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v4) || !*(_WORD *)(v4 + 100) && *(_DWORD *)(v4 + 216))
      && a1 != *(_QWORD *)(*(_QWORD *)(v6 + 3168) + 168LL)
      && (a1 & 0x800000) != 0 )
    {
      v2 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *(_DWORD *)(v4 + 168) )
      {
        if ( _bittest((const signed __int32 *)v4, 0x17u) )
          *(_WORD *)(v4 + 102) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v7) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 6484));
        *(_QWORD *)(v4 + 32) = v2;
        *(_WORD *)(v4 + 102) &= ~0x200u;
        LOBYTE(v8) = 5;
        HmgSetOwner(a1 & 0xFFFFFFFFFF7FFFFFuLL, 2147483650LL, v8);
      }
      else
      {
        v2 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
  }
  return v2;
}
