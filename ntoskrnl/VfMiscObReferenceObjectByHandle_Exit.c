/*
 * XREFs of VfMiscObReferenceObjectByHandle_Exit @ 0x140ADD530
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfMiscObReferenceObjectByHandle_Exit(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // rdx

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result == -1073741816 || (_DWORD)result == -1073741788 )
  {
    v2 = *(_BYTE *)(a1 + 24);
    if ( !v2 || (result = (__int64)KeGetCurrentThread(), (*(_DWORD *)(result + 116) & 0x400) != 0) )
    {
      v3 = *(_QWORD *)(a1 + 48);
      if ( v3 )
      {
        if ( v2 && (v3 & 0xFFFFFFFF80000000uLL) != 0 && v3 <= 0xFFFFFFFFFFFFFFFDuLL )
          return VerifierBugCheckIfAppropriate(0xC4u, 0xF7uLL, v3, *(_QWORD *)(a1 + 32), *(char *)(a1 + 24));
        v4 = 60LL;
      }
      else
      {
        v4 = 245LL;
      }
      return VerifierBugCheckIfAppropriate(0xC4u, v4, v3, *(_QWORD *)(a1 + 32), 0LL);
    }
  }
  return result;
}
