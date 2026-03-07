__int64 __fastcall VidSchiEnsureRootPageTableUpdated(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  VIDMM_PROCESS *v9; // rdi
  unsigned int v10; // edx
  bool v11; // zf
  DXGK_MULTIPLANE_OVERLAY_PLANE3 **ppPlanes; // rcx
  unsigned int v13; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 var28; // [rsp+58h] [rbp-28h] BYREF

  v1 = a1[1];
  v3 = a1[2];
  v4 = *(_QWORD *)(v1 + 32);
  if ( !(unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
    || (result = *(unsigned int *)(v3 + 12), (result & 0x10) != 0) )
  {
    ExAcquirePushLockExclusiveEx(a1 + 31, 0LL);
    v6 = *(_QWORD *)(v1 + 40);
    v15 = 0LL;
    v14 = 0;
    v16 = 0LL;
    v7 = *(_QWORD *)(v6 + 8);
    v13 = 0;
    v8 = *(_QWORD *)(v7 + 64);
    if ( v8 )
    {
      v9 = *(VIDMM_PROCESS **)(v8 + 8);
      if ( v9 )
      {
        VIDMM_PROCESS::GetPageDirectoryData(
          v9,
          *(_DWORD *)(*(_QWORD *)(v4 + 16) + 240LL),
          *(unsigned __int16 *)(v3 + 6),
          &v15,
          &v13,
          &v14,
          &v16);
        if ( a1[32] != v15 )
        {
          v10 = v13;
          if ( v13 )
          {
            var28.PlaneCount = 0;
            HIDWORD(var28.pPostComposition) = 0;
            v11 = (a1[7] & 0x1000) == 0;
            ppPlanes = (DXGK_MULTIPLANE_OVERLAY_PLANE3 **)v16;
            a1[32] = v15;
            *(_QWORD *)&var28.VidPnSourceId = a1[6];
            var28.OutputFlags.Value = v14;
            var28.ppPlanes = ppPlanes;
            LODWORD(var28.pPostComposition) = v10;
            if ( v11 )
            {
              ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v4 + 8), &var28);
              ppPlanes = var28.ppPlanes;
            }
            a1[33] = ppPlanes;
            VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
              *(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 768LL),
              v9,
              (struct _DXGKARG_SETROOTPAGETABLE *)&var28,
              a1);
          }
        }
      }
    }
    return ExReleasePushLockExclusiveEx(a1 + 31, 0LL);
  }
  return result;
}
