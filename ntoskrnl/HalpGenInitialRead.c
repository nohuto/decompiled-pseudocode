/*
 * XREFs of HalpGenInitialRead @ 0x140A88528
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140A880EC (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14029AA2C (HalpCheckAndReportGhes.c)
 *     HalpFindGhesEntry @ 0x14037D5E8 (HalpFindGhesEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall HalpGenInitialRead(__int64 a1)
{
  int v1; // ecx
  __int64 ***v2; // r9
  __int64 *GhesEntry; // rax
  int v4; // r8d
  __int64 v5; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 28);
  v7[0] = &HalpGenericPeiErrorSourceListHead;
  v2 = (__int64 ***)v7;
  v7[1] = &HalpGenericNmiErrorSourceListHead;
  v7[2] = &HalpGenericSeaErrorSourceListHead;
  v7[3] = &HalpGenericSdeiErrorSourceListHead;
  v7[4] = &HalpGenericSeiErrorSourceListHead;
  while ( 1 )
  {
    GhesEntry = HalpFindGhesEntry(v1, *v2);
    if ( GhesEntry )
      break;
    v2 = (__int64 ***)(v5 + 8);
    if ( (unsigned int)(v4 + 1) >= 5 )
      return (char)GhesEntry;
  }
  LOBYTE(GhesEntry) = HalpCheckAndReportGhes((__int64)GhesEntry);
  return (char)GhesEntry;
}
