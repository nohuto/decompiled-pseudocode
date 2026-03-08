/*
 * XREFs of ?VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z @ 0x1C00B21AC
 * Callers:
 *     VidMmGetAllocationGpuVirtualAddress @ 0x1C0016F70 (VidMmGetAllocationGpuVirtualAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmGetAllocationGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        char a3,
        int a4)
{
  __int64 v4; // r10
  __int64 **v5; // rdx
  __int64 *i; // rcx

  v4 = 0LL;
  if ( a3 )
    return *((_QWORD *)a2 + 18);
  v5 = (__int64 **)((char *)a2 + 128);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == a4 )
      return i[9];
  }
  return v4;
}
