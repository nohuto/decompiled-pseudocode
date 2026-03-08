/*
 * XREFs of ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C03B3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C00023C4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::EnumPathTargetsFromSource(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  DMMVIDPNTOPOLOGY *v13; // rax
  unsigned int v14; // edx
  DMMVIDPNTOPOLOGY *v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]
  char v28; // [rsp+40h] [rbp-10h]
  unsigned int v29; // [rsp+88h] [rbp+38h] BYREF

  v26 = -1;
  v27 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7033);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7033);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = a3;
  v12[4] = v7;
  v12[5] = v6;
  v12[6] = a4;
  if ( a4 )
  {
    *a4 = -1;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v6);
    v15 = v13;
    if ( v13 )
    {
      v29 = v14;
      v16 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v13, (char *)(unsigned int)v7, a3, &v29);
      v6 = v16;
      if ( v16 >= 0 )
      {
        v22 = v29;
        if ( v16 == 1075708748 && v29 != -1 )
          WdLogSingleEntry0(1LL);
        *a4 = v22;
        LODWORD(v6) = 0;
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
        v21[3] = a3;
        v21[4] = v7;
        v21[5] = v15;
        v21[6] = v6;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      LODWORD(v6) = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry4(2LL, 0LL, a3, v6, v7);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  }
  return (unsigned int)v6;
}
