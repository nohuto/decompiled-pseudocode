/*
 * XREFs of Crashdump_UsbDevice_PrepareForHibernate @ 0x1C00506E0
 * Callers:
 *     Crashdump_InitializeWithoutControllerReset @ 0x1C004CA8C (Crashdump_InitializeWithoutControllerReset.c)
 * Callees:
 *     memset @ 0x1C0020700 (memset.c)
 *     Crashdump_Endpoint_PrepareForHibernate @ 0x1C004F150 (Crashdump_Endpoint_PrepareForHibernate.c)
 */

__int64 __fastcall Crashdump_UsbDevice_PrepareForHibernate(__int64 a1)
{
  unsigned int v2; // esi
  void **v3; // rdi
  void *v4; // rbx
  ULONG_PTR v5; // r9
  int v6; // ebx

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate: begin\n");
  memset(*(void **)(a1 + 40), 0, *(unsigned int *)(a1 + 48));
  v2 = 1;
  v3 = (void **)(a1 + 120);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = 2048LL;
      if ( (*(_DWORD *)(**(_QWORD **)(a1 + 8) + 104LL) & 4) == 0 )
        v5 = 1024LL;
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(a1 + 64), v5, 0x43434858u);
      PoSetHiberRange(0LL, 0x10000u, v4, 0xC8uLL, 0x43434858u);
      v6 = Crashdump_Endpoint_PrepareForHibernate((__int64)v4);
      if ( v6 < 0 )
        break;
    }
    ++v2;
    ++v3;
    if ( v2 >= 0x20 )
    {
      v6 = 0;
      break;
    }
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_PrepareForHibernate: end 0x%X\n", v6);
  return (unsigned int)v6;
}
