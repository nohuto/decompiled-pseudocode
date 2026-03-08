/*
 * XREFs of ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C004298C
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004CE98 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 */

void __fastcall VidSchiDestroyNodeSchedulingLog(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rsi
  int i; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  bool v7; // cf
  ADAPTER_DISPLAY *v8; // rcx
  unsigned int v9; // edx
  void *v10; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+48h] [rbp-20h]

  v1 = *((_QWORD *)a1 + 3);
  for ( i = *((_DWORD *)a1 + 2810); i; i = *((_DWORD *)a1 + 2810) )
    KeWaitForSingleObject((char *)a1 + 11248, Executive, 0, 0, 0LL);
  if ( *((_QWORD *)a1 + 1396) )
  {
    v4 = *((unsigned __int16 *)a1 + 2);
    v5 = *(_QWORD *)(v1 + 632);
    v12 = 0LL;
    v13 = 0LL;
    v6 = v5 + 8 * v4;
    v7 = (unsigned int)v4 < *(_DWORD *)(v1 + 704);
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 704) )
      v6 = v5;
    v11[1] = *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL);
    if ( v7 )
      v5 += 8 * v4;
    v8 = *(ADAPTER_DISPLAY **)(v1 + 8);
    v11[0] = *(unsigned __int16 *)(*(_QWORD *)v5 + 8LL);
    DxgCoreInterface[20](v8, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v11);
    v10 = (void *)*((_QWORD *)a1 + 1396);
    if ( v10 )
      VIDMM_SCH_LOG::`scalar deleting destructor'(v10, v9);
    *((_QWORD *)a1 + 1396) = 0LL;
  }
}
