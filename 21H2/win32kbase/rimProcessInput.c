/*
 * XREFs of rimProcessInput @ 0x1C00CA6AC
 * Callers:
 *     rimStackAttachAndProcessInput @ 0x1C0004590 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00077DC (rimObsDeliverToNonExclusiveObservers.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     RIMAllocKernelMem @ 0x1C0189440 (RIMAllocKernelMem.c)
 *     RIMAllocUserMem @ 0x1C0189590 (RIMAllocUserMem.c)
 *     RIMFreeUserMem @ 0x1C01895C0 (RIMFreeUserMem.c)
 *     RIMFixUpCompleteFrames @ 0x1C01A6A04 (RIMFixUpCompleteFrames.c)
 */

void __fastcall rimProcessInput(__int64 a1, __int64 a2, const void *a3, __m128i *a4, int a5)
{
  char v8; // r14
  __m128i v9; // xmm6
  int v10; // r13d
  size_t v11; // rcx
  size_t v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  char v16; // al
  __int64 v17; // rax
  int v18; // edx
  _QWORD *v19; // r8
  _UNKNOWN **v20; // r8
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _OWORD *v24; // rcx
  char *v25; // rcx
  __m128i v26; // [rsp+50h] [rbp-58h]

  v8 = 0;
  v9 = *a4;
  v26 = *a4;
  v10 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v11 = *(unsigned int *)(a1 + 920);
  v12 = _mm_srli_si128(v9, 8).m128i_u64[0];
  if ( *(_DWORD *)(a1 + 880) )
  {
    if ( v12 > v11 )
    {
      v17 = RIMAllocUserMem(a1, v12);
      if ( v17 )
      {
        v19 = *(_QWORD **)(a1 + 912);
        if ( (unsigned __int64)v19 >= MmUserProbeAddress )
          v19 = (_QWORD *)MmUserProbeAddress;
        *v19 = v17;
      }
      else
      {
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v20 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            (_DWORD)v20,
            (_DWORD)gRimLog,
            4,
            1,
            14,
            (__int64)&WPP_a2b4b56089d43a30275be3b006f568a3_Traceguids);
        }
        v26.m128i_i32[0] = -1073741801;
        v9 = v26;
      }
    }
    if ( v26.m128i_i32[0] < 0 )
    {
      *(_BYTE *)(a1 + 808) = 1;
    }
    else
    {
      v21 = *(_DWORD **)(a1 + 888);
      if ( (unsigned __int64)v21 >= MmUserProbeAddress )
        v21 = (_DWORD *)MmUserProbeAddress;
      *v21 = v10;
      v22 = *(_QWORD *)(a2 + 344);
      if ( !v22 )
        v22 = *(_QWORD *)(a2 + 16);
      v23 = *(_QWORD **)(a1 + 896);
      if ( (unsigned __int64)v23 >= MmUserProbeAddress )
        v23 = (_QWORD *)MmUserProbeAddress;
      *v23 = v22;
      v24 = *(_OWORD **)(a1 + 904);
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v24 = (_OWORD *)MmUserProbeAddress;
      *v24 = v9;
      v25 = **(char ***)(a1 + 912);
      if ( (unsigned __int64)&v25[v12] > MmUserProbeAddress || &v25[v12] <= v25 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v25, a3, v12);
      if ( a5 )
        goto LABEL_18;
      v8 = 1;
    }
  }
  else
  {
    if ( v12 > v11 )
    {
      v13 = RIMAllocKernelMem(v12, 1701661522LL);
      if ( v13 )
      {
        **(_QWORD **)(a1 + 912) = v13;
      }
      else
      {
        v26.m128i_i32[0] = -1073741801;
        v9 = v26;
      }
    }
    *(__m128i *)*(_QWORD *)(a1 + 904) = v9;
    if ( v26.m128i_i32[0] >= 0 )
    {
      **(_DWORD **)(a1 + 888) = v10;
      if ( _bittest((const signed __int32 *)(a2 + 184), 0xDu) )
      {
        v14 = *(_QWORD *)(a2 + 24);
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 344);
        if ( !v14 )
          v14 = *(_QWORD *)(a2 + 16);
      }
      **(_QWORD **)(a1 + 896) = v14;
      memmove(**(void ***)(a1 + 912), a3, v12);
      v15 = *(_DWORD *)(a2 + 184);
      if ( (v15 & 0x2000) != 0 || (v15 & 0x40) != 0 )
      {
        v16 = *(_BYTE *)(a2 + 48);
        if ( v16 )
        {
          if ( v16 == 1 )
            *(_DWORD *)(a2 + 688) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 912) = 0;
        }
      }
      if ( a5 )
      {
LABEL_18:
        RIMFixUpCompleteFrames(a1, a2, **(_QWORD **)(a1 + 912), (_DWORD)a3, v26.m128i_i32[2]);
        goto LABEL_49;
      }
      v8 = 1;
    }
  }
LABEL_49:
  if ( v8 )
    rimObsDeliverToNonExclusiveObservers(a2);
}
