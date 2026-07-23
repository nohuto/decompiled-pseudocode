/*
 * XREFs of SepFreeCapturedTokenSecurityAttributesInformation @ 0x140611B90
 * Callers:
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140600E20 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x140611B50 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeCapturedTokenSecurityAttributesInformation(_QWORD *P)
{
  PVOID *v1; // rbx
  unsigned int i; // ebp
  unsigned __int16 v4; // ax

  v1 = (PVOID *)P[1];
  for ( i = 0; i < *((_DWORD *)P + 1); ++i )
  {
    ExFreePoolWithTag(v1[5 * i + 1], 0);
    if ( LODWORD(v1[5 * i + 3]) )
    {
      v4 = (unsigned __int16)v1[5 * i + 2];
      if ( v4 )
      {
        if ( v4 <= 6u || v4 == 16 )
          ExFreePoolWithTag(v1[5 * i + 4], 0);
      }
    }
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(P, 0);
}
