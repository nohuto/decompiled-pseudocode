/*
 * XREFs of Simulator_RemoveNode @ 0x1C00498D0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0048FB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  DestinationString = 0LL;
  if ( !RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
  {
    GetNameSpaceObject(DestinationString.Buffer);
    RtlFreeAnsiString(&DestinationString);
  }
  return 3221225473LL;
}
