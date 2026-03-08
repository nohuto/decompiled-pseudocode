/*
 * XREFs of ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00AB554
 * Callers:
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089BCC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A9EA8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C0105320 (-Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiSetPriorityForMemoryPages(struct _VIDMM_GLOBAL_ALLOC *a1, void *a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v9 = 4;
  if ( a1 && *(_WORD *)(*((_QWORD *)a1 + 67) + 4LL) == 3 )
  {
    v6 = *((_DWORD *)a1 + 114) - 1;
    if ( v6 )
    {
      if ( v6 == 2 )
        v9 = 5;
    }
    else
    {
      v9 = 3;
    }
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
         -1LL,
         1LL,
         1LL,
         v8,
         &v9,
         4);
  if ( v7 < 0 )
    WdLogSingleEntry4(3LL, a1, a2, a3, v7);
}
