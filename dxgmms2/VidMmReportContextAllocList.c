/*
 * XREFs of VidMmReportContextAllocList @ 0x1C00F1B20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppppppppppppq_EtwWriteTransfer @ 0x1C002E560 (McTemplateK0ppppppppppppq_EtwWriteTransfer.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C00C4460 (-VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z.c)
 */

void __fastcall VidMmReportContextAllocList(struct DXGDEVICE *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // r14
  struct _VIDMM_GLOBAL_ALLOC ***v6; // rax
  struct _VIDMM_GLOBAL_ALLOC **v7; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = (_QWORD *)*a2;
  while ( v2 != a2 )
  {
    v5 = v2 + 3;
    v6 = (struct _VIDMM_GLOBAL_ALLOC ***)v2[3];
    v2 = (_QWORD *)*v2;
    v7 = *v6;
    VidMmReportGlobalAlloc(a1, **v6, 0LL);
    if ( bTracingEnabled )
    {
      v8 = *v7;
      if ( (**((_DWORD **)*v7 + 67) & 8) != 0 )
        v9 = *((_QWORD *)v8 + 49);
      else
        v9 = (__int64)v7[2];
      if ( (byte_1C00769C1 & 8) != 0 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) + 80LL);
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          v10,
          &EventReportDeviceAllocation,
          v9,
          v10,
          a1,
          *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL),
          *v5,
          v8,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL,
          v9,
          v7[3]);
      }
    }
  }
}
