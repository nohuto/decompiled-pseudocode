/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x1409561C8
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1408635A0 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeUserFlags @ 0x140680EF0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14096A1AC (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      PipSetDevNodeUserFlags(a1, 512);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = PiIrpQueryRemoveDevice(v6);
      if ( v7 < 0 )
      {
        IopRemoveDevice(v6, 3);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        PipSetDevNodeState(a1, 786);
      }
      PipClearDevNodeUserFlags(a1, 512);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
