/*
 * XREFs of VerifierObReferenceObjectByHandle @ 0x1409E8B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierObReferenceObjectByHandle(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // ebp
  ULONG_PTR v11; // r8
  ULONG_PTR v12; // rdx

  v8 = (char)a4;
  v9 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, __int64, __int64))pXdvObReferenceObjectByHandle)(
         BugCheckParameter2,
         a2,
         a3,
         a4,
         a5,
         a6);
  v10 = v9;
  if ( (v9 == -1073741816 || v9 == -1073741788)
    && (!(_BYTE)v8 || (KeGetCurrentThread()->MiscFlags & 0x400) != 0)
    && (MmVerifierData & 0x800) != 0 )
  {
    if ( !BugCheckParameter2 )
    {
      v11 = 0LL;
      v12 = 245LL;
LABEL_13:
      VerifierBugCheckIfAppropriate(0xC4u, v12, v11, a3, 0LL);
      return v10;
    }
    if ( !(_BYTE)v8 || (BugCheckParameter2 & 0xFFFFFFFF80000000uLL) == 0 || BugCheckParameter2 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v11 = BugCheckParameter2;
      v12 = 60LL;
      goto LABEL_13;
    }
    VerifierBugCheckIfAppropriate(0xC4u, 0xF7uLL, BugCheckParameter2, a3, v8);
  }
  return v10;
}
