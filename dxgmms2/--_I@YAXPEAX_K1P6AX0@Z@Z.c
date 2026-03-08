/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012530
 * Callers:
 *     ??_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0012078 (--_EVIDMM_DEVICE_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0018890 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0030FB0 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ??1VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C0101824 (--1VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     VidSchTerminateAdapter @ 0x1C0108B80 (VidSchTerminateAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *v7; // rdi

  if ( a3 )
  {
    v5 = a3;
    v7 = &a1[a3 * a2];
    do
    {
      v7 -= a2;
      a4(v7);
      --v5;
    }
    while ( v5 );
  }
}
