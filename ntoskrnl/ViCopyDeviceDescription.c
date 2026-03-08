/*
 * XREFs of ViCopyDeviceDescription @ 0x140AC57A0
 * Callers:
 *     ViHookDmaAdapter @ 0x140AC6520 (ViHookDmaAdapter.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViCopyDeviceDescription(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  if ( *a2 > 3 )
  {
    ViHalPreprocessOptions(byte_140C0DCB4, "Unknown version %x for DEVICE_DESCRIPTION (%p)", 37, (const void *)*a2);
    VfReportIssueWithOptions(0xE6u, 0x25uLL, *a2, (ULONG_PTR)a2, 0LL, byte_140C0DCB4);
  }
  *(_BYTE *)(a1 + 4) = *((_BYTE *)a2 + 4);
  *(_BYTE *)(a1 + 5) = *((_BYTE *)a2 + 5);
  *(_BYTE *)(a1 + 6) = *((_BYTE *)a2 + 6);
  *(_BYTE *)(a1 + 7) = *((_BYTE *)a2 + 7);
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_BYTE *)(a1 + 9) = *((_BYTE *)a2 + 9);
  *(_BYTE *)(a1 + 10) = *((_BYTE *)a2 + 10);
  *(_BYTE *)(a1 + 11) = *((_BYTE *)a2 + 11);
  *(_DWORD *)(a1 + 12) = a2[3];
  *(_DWORD *)(a1 + 16) = a2[4];
  *(_DWORD *)(a1 + 20) = a2[5];
  *(_DWORD *)(a1 + 24) = a2[6];
  *(_DWORD *)(a1 + 28) = a2[7];
  *(_DWORD *)(a1 + 32) = a2[8];
  *(_DWORD *)(a1 + 36) = a2[9];
  result = *a2;
  *(_DWORD *)a1 = result;
  if ( *a2 == 3 )
  {
    *(_DWORD *)(a1 + 40) = a2[10];
    *(_DWORD *)(a1 + 44) = a2[11];
    *(_DWORD *)(a1 + 48) = a2[12];
    result = *((_QWORD *)a2 + 7);
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}
