/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0046F30
 * Callers:
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0046C98 (-GetSpriteFillColor@@YAKXZ.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D2A8C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0047380 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v4; // r9
  unsigned __int16 *v5; // rax
  __int64 v6; // r8
  NTSTATUS result; // eax
  size_t v8; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return -1073741811;
  v4 = a2;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
  {
    v6 = (a2 - v4) & -(__int64)(v4 != 0);
    return RtlStringCopyWorkerW(&a1[v6], a2 - v6, (size_t *)v6, a3, v8);
  }
  return result;
}
