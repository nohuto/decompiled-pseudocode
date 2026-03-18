/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029C964
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C029C9F0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C029CA30 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C029CA60 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C029CBD0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C029CC10 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C029CC80 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C029CCB0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C029CD10 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C029CD70 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C029CDC0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C029CE30 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C029CE60 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C029CEC0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032BFCC )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032BFCC = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032BFCC )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C032BFD4) == 0 )
        return 1;
    }
  }
  return v0;
}
