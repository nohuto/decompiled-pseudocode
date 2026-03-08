/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0070DEC
 * Callers:
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C0070B50 (-GetSpriteFillColor@@YAKXZ.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D6948 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0070EA0 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 v5; // r9
  unsigned __int16 *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8
  size_t v10; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
    {
      v8 = (a2 - v5) & -(__int64)(v5 != 0);
      return (unsigned int)RtlStringCopyWorkerW(&a1[v8], a2 - v8, (size_t *)v8, a3, v10);
    }
  }
  return v7;
}
