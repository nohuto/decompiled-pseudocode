/*
 * XREFs of Crashdump_FreeDeviceContext @ 0x1C004C300
 * Callers:
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C004D0A0 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004D200 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     <none>
 */

void __fastcall Crashdump_FreeDeviceContext(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 120);
  v2 = 31LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0x43434858u);
    ++v1;
    --v2;
  }
  while ( v2 );
}
