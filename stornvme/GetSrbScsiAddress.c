/*
 * XREFs of GetSrbScsiAddress @ 0x1C0007B00
 * Callers:
 *     NVMeHwStartIo @ 0x1C0001DD0 (NVMeHwStartIo.c)
 *     FormInquiryStandardData @ 0x1C0012754 (FormInquiryStandardData.c)
 * Callees:
 *     <none>
 */

void __fastcall GetSrbScsiAddress(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v4; // r10
  int v5; // eax

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v4 = *(unsigned int *)(a1 + 52);
    if ( a2 )
      *a2 = *(unsigned __int8 *)(v4 + a1 + 8);
    if ( a3 )
      *a3 = *(unsigned __int8 *)(v4 + a1 + 9);
    if ( a4 )
    {
      v5 = *(unsigned __int8 *)(v4 + a1 + 10);
LABEL_14:
      *a4 = v5;
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(unsigned __int8 *)(a1 + 5);
    if ( a3 )
      *a3 = *(unsigned __int8 *)(a1 + 6);
    if ( a4 )
    {
      v5 = *(unsigned __int8 *)(a1 + 7);
      goto LABEL_14;
    }
  }
}
