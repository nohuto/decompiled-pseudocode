/*
 * XREFs of ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0364C90
 * Callers:
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONINFO@@@Z @ 0x1C0363898 (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETGPUPARTITIONIN.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C03663B8 (DxgkDdiSetGpuPartitionCount.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C03634E0 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetGpuPartitionCount(ADAPTER_RENDER *a1, int a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a4 || (result = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1), (int)result >= 0) )
  {
    if ( a2 == 1 )
    {
      v8 = *((_QWORD *)a1 + 234);
      if ( !v8 )
      {
        v9 = operator new[](0x78uLL, 0x4B677844u, 256LL);
        v8 = v9;
        if ( v9 )
        {
          *(_BYTE *)(v9 + 8) = 1;
          *(_QWORD *)v9 = &DXGVIRTUALGPUMANAGER::`vftable';
          *(_QWORD *)(v9 + 32) = a1;
          *(_DWORD *)(v9 + 64) = -1;
          *(_QWORD *)(v9 + 40) = 0LL;
          *(_QWORD *)(v9 + 48) = 0LL;
          *(_DWORD *)(v9 + 56) = 0;
          *(_DWORD *)(v9 + 60) = 23;
          *(_DWORD *)(v9 + 96) = -1;
          *(_QWORD *)(v9 + 72) = 0LL;
          *(_QWORD *)(v9 + 80) = 0LL;
          *(_DWORD *)(v9 + 88) = 0;
          *(_DWORD *)(v9 + 92) = 22;
          *(_QWORD *)(v9 + 112) = v9 + 104;
          *(_QWORD *)(v9 + 104) = v9 + 104;
          *(_QWORD *)v9 = &DXGVIRTUALGPUMANAGER_PARAV::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 234) = v8;
        goto LABEL_9;
      }
    }
    else
    {
      v8 = *((_QWORD *)a1 + 233);
      if ( !v8 )
      {
        v10 = operator new[](0x78uLL, 0x4B677844u, 256LL);
        v8 = v10;
        if ( v10 )
        {
          *(_BYTE *)(v10 + 8) = 0;
          *(_QWORD *)v10 = &DXGVIRTUALGPUMANAGER::`vftable';
          *(_QWORD *)(v10 + 32) = a1;
          *(_DWORD *)(v10 + 64) = -1;
          *(_QWORD *)(v10 + 40) = 0LL;
          *(_QWORD *)(v10 + 48) = 0LL;
          *(_DWORD *)(v10 + 56) = 0;
          *(_DWORD *)(v10 + 60) = 23;
          *(_DWORD *)(v10 + 96) = -1;
          *(_QWORD *)(v10 + 72) = 0LL;
          *(_QWORD *)(v10 + 80) = 0LL;
          *(_DWORD *)(v10 + 88) = 0;
          *(_DWORD *)(v10 + 92) = 22;
          *(_QWORD *)(v10 + 112) = v10 + 104;
          *(_QWORD *)(v10 + 104) = v10 + 104;
          *(_QWORD *)v10 = &DXGVIRTUALGPUMANAGER_GPUP::`vftable';
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)a1 + 233) = v8;
LABEL_9:
        if ( !v8 )
          return 3221225495LL;
      }
    }
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, a3);
  }
  return result;
}
