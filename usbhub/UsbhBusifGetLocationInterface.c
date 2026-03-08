/*
 * XREFs of UsbhBusifGetLocationInterface @ 0x1C004C31C
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1C0055B70 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhBusIfLocationReference @ 0x1C004C050 (UsbhBusIfLocationReference.c)
 */

__int64 __fastcall UsbhBusifGetLocationInterface(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 result; // rax

  v4 = PdoExt(a2);
  v5 = *(_QWORD *)(a3 + 184);
  if ( *(_WORD *)(v5 + 16) < 0x28u )
  {
    v7 = -1073741823;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = 0;
    *(_QWORD *)(v6 + 16) = UsbhBusIfLocationReference;
    *(_QWORD *)(v6 + 24) = UsbhBusIfLocationDereference;
    *(_QWORD *)(v6 + 32) = UsbhBusIfLocationGetLocationStrings;
    *(_DWORD *)v6 = 65576;
    *(_QWORD *)(v6 + 8) = v4;
    UsbhBusIfLocationReference((__int64)v4);
  }
  *(_QWORD *)(a3 + 56) = 0LL;
  result = v7;
  *(_DWORD *)(a3 + 48) = v7;
  return result;
}
