/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A923C
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02A92E0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C02A9320 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C02A9350 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C02A94E0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C02A9520 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C02A9590 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C02A95C0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C02A9620 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C02A9680 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C02A96D0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C02A9740 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C02A9770 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C02A97D0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  int v3; // eax

  v1 = 0;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( (*(_DWORD *)(v2 + 23592) & 4) != 0 )
  {
    if ( *(_DWORD *)(v2 + 23596) )
      goto LABEL_6;
    v3 = MEMORY[0xFFFFF78000000014];
    if ( MEMORY[0xFFFFF78000000014] > *(_QWORD *)(v2 + 23584) + 0x117D78400LL )
    {
      *(_DWORD *)(v2 + 23596) = 1;
      *(_DWORD *)(v2 + 23600) = v3;
    }
    if ( *(_DWORD *)(v2 + 23596) )
    {
LABEL_6:
      if ( (RtlRandom((PULONG)(v2 + 23600)) & *(_DWORD *)(v2 + 23604)) == 0 )
        return 1;
    }
  }
  return v1;
}
