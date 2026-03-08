/*
 * XREFs of ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FF1BC
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00E7460 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0pppttxqx_EtwWriteTransfer @ 0x1C0032BA8 (McTemplateK0pppttxqx_EtwWriteTransfer.c)
 *     ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDCA8 (-LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReportSegmentState(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // r15
  char *v5; // rdi
  char *v6; // r12
  _QWORD **v7; // r12
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  _QWORD **v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  __int64 **v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rcx
  char *v16; // rdi
  char *i; // rbx
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+48h] [rbp-40h]

  v3 = (char *)this + 136;
  v5 = (char *)*((_QWORD *)this + 17);
  while ( v5 != v3 )
  {
    v6 = v5;
    v5 = *(char **)v5;
    v7 = (_QWORD **)(v6 + 16);
    v8 = *v7;
    if ( *v7 != v7 )
    {
      do
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
        v10 = (_QWORD **)(v9 + 2);
        v11 = *v10;
        if ( *v10 != v10 )
        {
          v12 = v10;
          do
          {
            v13 = (__int64 **)(v11 - 7);
            v11 = (_QWORD *)*v11;
            v14 = **v13;
            if ( *(VIDMM_SEGMENT **)(v14 + 120) == this )
            {
              a2 = (unsigned int)(*((_DWORD *)this + 4) + 1);
              a3 = *(_DWORD *)(*(_QWORD *)(v14 + 536) + 12LL) != 0;
              if ( (byte_1C00769C1 & 1) != 0 )
              {
                LODWORD(v20) = *((_DWORD *)this + 4) + 1;
                LODWORD(v19) = 0;
                LODWORD(v18) = *(_DWORD *)(*(_QWORD *)(v14 + 536) + 12LL) != 0;
                McTemplateK0pppttxqx_EtwWriteTransfer(
                  (__int64)v13[1],
                  a2,
                  a3,
                  *(_QWORD *)((*v13)[1] + 8),
                  v13[1][3],
                  v13,
                  v18,
                  v19,
                  *(_QWORD *)(v14 + 16),
                  v20,
                  *(_QWORD *)(v14 + 128));
              }
            }
            if ( *(VIDMM_SEGMENT **)(v14 + 240) == this )
            {
              a3 = (unsigned int)(*((_DWORD *)this + 4) + 1);
              v15 = *(unsigned int *)(*(_QWORD *)(v14 + 536) + 12LL);
              if ( (byte_1C00769C1 & 1) != 0 )
              {
                LODWORD(v20) = *((_DWORD *)this + 4) + 1;
                LODWORD(v19) = 1;
                LODWORD(v18) = v15 != 0;
                McTemplateK0pppttxqx_EtwWriteTransfer(
                  v15,
                  (__int64)v13[1],
                  a3,
                  *(_QWORD *)((*v13)[1] + 8),
                  v13[1][3],
                  v13,
                  v18,
                  v19,
                  *(_QWORD *)(v14 + 16),
                  v20,
                  *(_QWORD *)(v14 + 128));
              }
            }
            if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
              VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw((struct _VIDMM_GLOBAL_ALLOC *)v14, a2, a3);
          }
          while ( v11 != v12 );
        }
      }
      while ( v8 != v7 );
      v3 = (char *)this + 136;
    }
  }
  v16 = (char *)this + 176;
  for ( i = (char *)*((_QWORD *)this + 22); i != v16; i = *(char **)i )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(
        (unsigned int)(*(_DWORD *)(*((_QWORD *)i - 36) + 16LL) + 1),
        &EventReportMarkedGlobalAllocation,
        a3);
  }
}
