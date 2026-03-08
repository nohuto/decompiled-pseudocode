/*
 * XREFs of ViDifCaptureDriverEntry @ 0x1405CCB2C
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403035E8 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x140ABDFA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ViDifFindIoCallbackContext @ 0x1405CCD64 (ViDifFindIoCallbackContext.c)
 */

char __fastcall ViDifCaptureDriverEntry(__int64 a1)
{
  __int64 IoCallbackContext; // rax
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // rax

  if ( (VfRuleClasses & 0x800000000LL) != 0 )
  {
    IoCallbackContext = ViDifFindIoCallbackContext(268435484LL, a1);
    if ( IoCallbackContext )
    {
      if ( (*(_DWORD *)(IoCallbackContext + 8) & 1) != 0 )
      {
        v4 = *(_QWORD *)(v2 + 88);
        if ( v4 )
        {
          *v3 = v4;
          *(_QWORD *)(v2 + 88) = pXdvDriverEntry;
        }
      }
    }
  }
  else
  {
    **(_QWORD **)(*(_QWORD *)(a1 + 48) + 64LL) = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 88) )
      *(_QWORD *)(a1 + 88) = pXdvDriverEntry;
  }
  return 1;
}
