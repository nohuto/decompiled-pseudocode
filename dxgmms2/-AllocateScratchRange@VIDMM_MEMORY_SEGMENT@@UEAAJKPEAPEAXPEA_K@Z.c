/*
 * XREFs of ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1C00F9040
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::AllocateScratchRange(
        VIDMM_LINEAR_POOL **this,
        unsigned int a2,
        void **a3,
        union _LARGE_INTEGER *a4)
{
  union _LARGE_INTEGER *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 result; // rax
  union _LARGE_INTEGER v7[3]; // [rsp+60h] [rbp-18h] BYREF

  v7[0].QuadPart = 0LL;
  v4 = a4;
  v5 = (unsigned __int64)a2 << 12;
  if ( v5 > 0xFFFFFFFF )
    return 3221225621LL;
  LOBYTE(a4) = 1;
  result = VIDMM_LINEAR_POOL::Allocate(this[19], (unsigned int)v5, 0LL, (__int64)a4, 0LL, 0LL, 0, 0, 0LL, v7, a3);
  if ( (int)result >= 0 )
    *v4 = v7[0];
  return result;
}
