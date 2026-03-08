/*
 * XREFs of ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C0364818
 * Callers:
 *     ?ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C0364924 (-ReportState@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036A030 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C005A62C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     McTemplateK0ppxxqq_EtwWriteTransfer @ 0x1C005A6B0 (McTemplateK0ppxxqq_EtwWriteTransfer.c)
 *     McTemplateK0pxppqq_EtwWriteTransfer @ 0x1C005A770 (McTemplateK0pxppqq_EtwWriteTransfer.c)
 */

void __fastcall DXGK_VIRTUAL_GPU::ReportState(DXGK_VIRTUAL_GPU *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  _BYTE *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  BOOL v11; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( bTracingEnabled )
  {
    v5 = (char *)this + 152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v11 = *v5 != 0;
      v9 = *((_DWORD *)this + 6);
      McTemplateK0pxppqq_EtwWriteTransfer(
        (__int64)this,
        a2,
        a3,
        this,
        *(_QWORD *)((char *)this + 28),
        *((_QWORD *)this + 13),
        *((_QWORD *)this + 2),
        v9,
        v11);
    }
    if ( !*v5 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v7) = *((_DWORD *)this + 42);
        McTemplateK0ppq_EtwWriteTransfer((__int64)this, &EventVirtualGpup, a3, this, *((_QWORD *)this + 22), v7);
      }
      if ( *((_DWORD *)this + 42) )
      {
        do
        {
          v6 = *((_QWORD *)this + 23) + 32LL * v3;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          {
            LODWORD(v10) = *(_DWORD *)(v6 + 28);
            LODWORD(v8) = *(_DWORD *)(v6 + 24);
            McTemplateK0ppxxqq_EtwWriteTransfer(
              v6,
              a2,
              a3,
              this,
              *(_QWORD *)v6,
              *(_QWORD *)(v6 + 8),
              *(_QWORD *)(v6 + 16),
              v8,
              v10);
          }
          ++v3;
        }
        while ( v3 < *((_DWORD *)this + 42) );
      }
    }
  }
}
