ULONG __fastcall Crashdump_Register_LogRHPortInfo(__int64 a1, int a2)
{
  unsigned int v3; // ebx

  v3 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * ((unsigned int)(a2 - 1) + 64LL));
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Port %u: CCS: %u, PE: %u, OC: %u, PR: %u, PLS: %u, PP: %u, PS: %u, PIC: %u\n",
    a2,
    v3 & 1,
    (v3 >> 1) & 1,
    (v3 >> 3) & 1,
    (v3 >> 4) & 1,
    (v3 >> 5) & 0xF,
    (v3 >> 9) & 1,
    (v3 >> 10) & 0xF,
    (unsigned __int16)v3 >> 14);
  return DbgPrintEx(
           0x93u,
           3u,
           "XHCIDUMP: PortChange %u: CSC: %u, PEDC: %u, OCC: %u, PRC: %u, WPRC: %u, PLSC: %u, PCEC: %u\n",
           a2,
           (v3 >> 17) & 1,
           (v3 >> 18) & 1,
           (v3 >> 20) & 1,
           (v3 >> 21) & 1,
           (v3 >> 19) & 1,
           (v3 >> 22) & 1,
           (v3 >> 23) & 1);
}
