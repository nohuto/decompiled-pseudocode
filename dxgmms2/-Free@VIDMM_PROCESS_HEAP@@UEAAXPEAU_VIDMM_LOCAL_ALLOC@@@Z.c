// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::Free(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // rbx
  int v7; // ecx
  __int64 v8; // r8
  __int64 *v9; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v11; // eax
  _QWORD *v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h]

  v4 = (_DWORD *)*((_QWORD *)a2 + 3);
  if ( PsGetCurrentProcess(this, a2, a3, a4) != **((_QWORD **)this + 1) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
  }
  if ( (*v4 & 1) != 0 )
  {
    v7 = v4[6];
    if ( (unsigned int)(v7 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v4 + 6));
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v9 = (__int64 *)(v4 + 14);
      (*((void (__fastcall **)(__int64, _DWORD *, _DWORD *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        v4 + 2,
        v4 + 14,
        0x8000LL);
    }
    else
    {
      if ( (unsigned int)(v7 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v4 + 1));
      ObCloseHandle(*((HANDLE *)v4 + 5), (*((_QWORD *)v4 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v4 + 4));
      v9 = (__int64 *)(v4 + 14);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) -= *v9;
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *v9;
    --*(_DWORD *)(*((_QWORD *)this + 1) + 156LL);
    v11 = v4[6];
    v12 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v11 == 1 )
    {
      v12[20] -= *v9;
      *(_QWORD *)(*((_QWORD *)this + 1) + 168LL) -= *v9;
    }
    else
    {
      v13 = v11 == 2;
      v14 = *v9;
      if ( v13 )
      {
        v12[22] -= v14;
        *(_QWORD *)(*((_QWORD *)this + 1) + 184LL) -= *v9;
      }
      else
      {
        v12[24] -= v14;
        *(_QWORD *)(*((_QWORD *)this + 1) + 200LL) -= *v9;
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v4[6] - 3) > 3 )
        v15 = *((_QWORD *)v4 + 1);
      else
        v15 = *((_QWORD *)v4 + 4);
      if ( (byte_1C00769C1 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v15,
          &EventDestroyProcessAllocationDetails,
          v8,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v4,
          *v9,
          v15);
      if ( bTracingEnabled )
      {
        v16 = (unsigned int)v4[6];
        if ( (unsigned int)(v16 - 3) > 3 )
          v17 = *((_QWORD *)v4 + 1);
        else
          v17 = *((_QWORD *)v4 + 4);
        if ( (byte_1C00769C2 & 2) != 0 )
        {
          LODWORD(v19) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v18) = v4[6];
          McTemplateK0pxqqt_EtwWriteTransfer(v16, &EventDestroyProcessAllocation, *v9, v17, *v9, v18, v19, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v4);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
