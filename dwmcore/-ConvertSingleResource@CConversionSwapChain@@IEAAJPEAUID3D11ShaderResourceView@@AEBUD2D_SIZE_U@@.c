__int64 __fastcall CConversionSwapChain::ConvertSingleResource(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        enum DXGI_MODE_ROTATION a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v11; // r14
  char v13; // si
  int v15; // ebp
  float v16; // xmm6_4
  __int64 (__fastcall ***v17)(_QWORD, __int64 *); // rcx
  int *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v25; // [rsp+70h] [rbp-48h] BYREF
  int v26; // [rsp+78h] [rbp-40h]
  int v27; // [rsp+7Ch] [rbp-3Ch]

  v9 = *(_QWORD *)(a1 + 128);
  v11 = *(_QWORD *)(a1 + 80);
  v13 = *(_BYTE *)(a1 + 108);
  v15 = *(_DWORD *)(a1 + 284);
  v25 = *(_QWORD *)a8;
  v26 = *(_DWORD *)(a8 + 8);
  v27 = *(_DWORD *)(a8 + 12);
  v16 = *(float *)(a1 + 104);
  v17 = (__int64 (__fastcall ***)(_QWORD, __int64 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 16LL));
  v18 = (int *)(**v17)(v17, &a8);
  v19 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 24LL) + *(_QWORD *)(a1 + 128) + 8LL;
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  v21 = CD3DDevice::HDRConvert(v11, a2, a3, a4, a5, a6, a7, v20, v18, v15, v16, v13, (__int64)&v25);
  v23 = v21;
  if ( v21 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x37Bu, 0LL);
  return v23;
}
