// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  void *v7; // rdi
  __int64 v8; // rdx
  VIDMM_SEGMENT *v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]
  __int16 v13; // [rsp+42h] [rbp-16h]
  int v14; // [rsp+44h] [rbp-14h]

  v2 = (_QWORD *)((char *)a2 + 480);
  v4 = *((_QWORD *)a2 + 60);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 480)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 61), (_QWORD *)*v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  *((_QWORD *)a2 + 61) = 0LL;
  v7 = (void *)*((_QWORD *)a2 + 59);
  v8 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 125));
  v14 = 0;
  v9 = (VIDMM_SEGMENT *)*((_QWORD *)this + 6);
  v11[0] = v8;
  v11[1] = v7;
  v12 = VIDMM_SEGMENT::DriverId(v9);
  v13 = *(_WORD *)(v10 + 380);
  if ( (int)DxgCoreInterface[52](
              *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2928LL),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v11) < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 46LL, this, a2, v11);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)a2 + 59) = 0LL;
}
