/*
 * XREFs of ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C00BD504
 * Callers:
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00194B0 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@@Z @ 0x1C00BC900 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     ?GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z @ 0x1C001929C (-GetGpuMmuCaps@ADAPTER_RENDER@@QEBAPEBUDXGADAPTER_GPUMMUCAPS@@I@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InitializeSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        __int64 a4)
{
  _BOOL8 v6; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r11
  unsigned int v11; // eax
  unsigned int v12; // r9d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  _DWORD *v19; // r9
  _QWORD *v20; // rcx
  __int64 v21; // r11
  __int64 v22; // r8
  _QWORD *v23; // rax
  const struct DXGADAPTER_GPUMMUCAPS *GpuMmuCaps; // rax
  _QWORD *v25; // r10
  int v26; // r11d
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rcx
  __int64 v31; // r11
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rax

  v6 = 0LL;
  v8 = *((_QWORD *)this + 5028) + 1616LL * a2;
  if ( a4 )
    v6 = (*(_BYTE *)(v8 + 445) & 0x20) != 0;
  *(_DWORD *)a3 = v6;
  v9 = *(_QWORD *)(v8 + 8 * v6);
  v10 = a4 + *(_QWORD *)(v8 + 24 * v6 + 512);
  if ( v9 && v10 >= v9 )
    v10 = *(_QWORD *)(v8 + 8 * v6);
  if ( a4 )
  {
    v11 = dword_1C00764D0;
    v12 = 0x20000000;
  }
  else
  {
    v11 = dword_1C00764CC;
    v12 = qword_1C00764D8;
  }
  v13 = v10 * v11 / 0x64;
  if ( v13 >= v12 )
    LODWORD(v13) = v12;
  v14 = v10 * (unsigned int)dword_1C00764D4;
  v15 = qword_1C00764E0;
  *((_QWORD *)a3 + 1) = v10;
  v16 = (_QWORD *)((char *)a3 + 48);
  v17 = v14 / 0x64;
  if ( v17 < v15 )
    v15 = (unsigned int)v17;
  v18 = v10 - (unsigned int)v13;
  *((_QWORD *)a3 + 2) = v18;
  *((_QWORD *)a3 + 3) = v18;
  v19 = (_DWORD *)((char *)a3 + 324);
  *((_QWORD *)a3 + 5) = v18 >> 1;
  v20 = (_QWORD *)((char *)a3 + 144);
  *((_QWORD *)a3 + 4) = v10 - v15 - (unsigned int)v13;
  v21 = 3LL;
  do
  {
    v22 = 3LL;
    do
    {
      *v16++ = *((_QWORD *)a3 + 4);
      --v22;
    }
    while ( v22 );
    v20[1] = v20;
    v23 = v20 + 6;
    *v20 = v20;
    v20[7] = v20 + 6;
    v20 += 2;
    *v23 = v23;
    *v19++ = 0;
    --v21;
  }
  while ( v21 );
  if ( (*((_BYTE *)this + 40936) & 4) != 0 )
  {
    GpuMmuCaps = ADAPTER_RENDER::GetGpuMmuCaps(*((ADAPTER_RENDER **)this + 2), a2);
    v27 = (unsigned int)(v26 + 2);
    v28 = 1LL << *((_DWORD *)GpuMmuCaps + 2);
    do
    {
      v29 = v25[3];
      v30 = v25 + 6;
      v31 = 3LL;
      if ( v29 >= v28 )
        v29 = v28;
      v25[3] = v29;
      v32 = v25[4];
      if ( v32 >= v28 )
        v32 = v28;
      v25[4] = v32;
      v33 = v25[5];
      if ( v33 >= v28 )
        v33 = v28;
      v25[5] = v33;
      do
      {
        v34 = 3LL;
        do
        {
          v35 = *v30;
          if ( *v30 >= v28 )
            v35 = v28;
          *v30++ = v35;
          --v34;
        }
        while ( v34 );
        --v31;
      }
      while ( v31 );
      --v27;
    }
    while ( v27 );
  }
}
