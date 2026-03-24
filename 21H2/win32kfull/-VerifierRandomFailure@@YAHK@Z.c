/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029E070
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029E100 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C029E140 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C029E170 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C029E2F0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C029E330 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C029E3A0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C029E3D0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C029E430 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C029E490 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C029E4E0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C029E550 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C029E580 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C029E5E0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C0330C9C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C0330C9C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C0330C9C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C0330CA4) == 0 )
        return 1;
    }
  }
  return v0;
}
