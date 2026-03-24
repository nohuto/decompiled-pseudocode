/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029DA40
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029DAD0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C029DB10 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C029DB40 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C029DCC0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C029DD00 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C029DD70 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C029DDA0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C029DE00 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C029DE60 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C029DEB0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C029DF20 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C029DF50 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C029DFB0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032FC9C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032FC9C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032FC9C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C032FCA4) == 0 )
        return 1;
    }
  }
  return v0;
}
