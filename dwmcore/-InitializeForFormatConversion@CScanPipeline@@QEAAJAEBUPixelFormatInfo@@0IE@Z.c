__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        void **this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r14
  _QWORD *v13; // rdx
  __int64 *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rcx
  int appended; // eax
  __int64 v18; // rcx
  void (__fastcall *v19)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-78h]
  _QWORD v25[2]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v26; // [rsp+40h] [rbp-58h]
  char v27; // [rsp+42h] [rbp-56h]
  int v28; // [rsp+44h] [rbp-54h]
  __m128i si128; // [rsp+48h] [rbp-50h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  operator delete(this[80]);
  this[80] = 0LL;
  v8 = a4;
  v9 = HrMalloc(0x30uLL, a4, this + 80);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x33u, 0LL);
    v24 = 66;
    goto LABEL_23;
  }
  v12 = 16 * v8;
  v13 = this + 81;
  v14 = (__int64 *)(this + 80);
  v15 = 2LL;
  do
  {
    v16 = *v14++;
    *v13++ = v12 + v16;
    --v15;
  }
  while ( v15 );
  v28 = 0;
  v26 = 257;
  v27 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v25[0] = this;
  v25[1] = this + 80;
  appended = ScanPipelineBuilder::Append_Convert(v25, a2, a3, v14);
  v11 = appended;
  if ( appended < 0 )
  {
    v24 = 81;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(v25[0] + 32LL) )
  {
    if ( *(_DWORD *)a2 == 2 )
    {
      v19 = Copy_128;
    }
    else if ( *(_DWORD *)a2 == 10 || *(_DWORD *)a2 == 11 )
    {
      v19 = Copy_64;
    }
    else
    {
      v19 = *(_DWORD *)a2 == 24 || *(_DWORD *)a2 == 28 || (unsigned int)(*(_DWORD *)a2 - 87) < 2 ? Copy_32 : 0LL;
    }
    appended = ScanPipelineBuilder::AddOp_Binary(v25, v19);
    v11 = appended;
    if ( appended < 0 )
    {
      v24 = 93;
LABEL_18:
      v20 = appended;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v20, v24, 0LL);
      return v11;
    }
  }
  v21 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v25);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x95u, 0LL);
    v24 = 96;
LABEL_23:
    v20 = v11;
    goto LABEL_24;
  }
  return v11;
}
