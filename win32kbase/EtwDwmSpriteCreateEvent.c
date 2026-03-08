/*
 * XREFs of EtwDwmSpriteCreateEvent @ 0x1C00C8F90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0px_EtwWriteTransfer @ 0x1C0165E44 (McTemplateK0px_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDwmSpriteCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0px_EtwWriteTransfer(a1, &DwmSpriteCreateEvent, a3, a1, a2);
  return result;
}
