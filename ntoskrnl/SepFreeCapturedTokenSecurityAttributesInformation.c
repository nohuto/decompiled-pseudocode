/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x14074339C
 * Callers:
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140742BAC (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140742BEC (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeCapturedTokenSecurityAttributesInformation(_QWORD *P)
{
  PVOID *v1; // rbx
  __int64 i; // rbp

  v1 = (PVOID *)P[1];
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 1); i = (unsigned int)(i + 1) )
  {
    ExFreePoolWithTag(v1[5 * i + 1], 0);
    if ( LODWORD(v1[5 * i + 3])
      && (LOWORD(v1[5 * i + 2]) == 1
       || LOWORD(v1[5 * i + 2]) == 2
       || LOWORD(v1[5 * i + 2]) == 3
       || LOWORD(v1[5 * i + 2]) == 4
       || LOWORD(v1[5 * i + 2]) == 5
       || LOWORD(v1[5 * i + 2]) == 6
       || LOWORD(v1[5 * i + 2]) == 16) )
    {
      ExFreePoolWithTag(v1[5 * i + 4], 0);
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(P, 0);
}
