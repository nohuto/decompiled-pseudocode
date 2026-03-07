__int64 __fastcall CRenderTargetBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  void (__fastcall ***v12)(_QWORD, unsigned int *); // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)); // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+70h] [rbp-61h] BYREF
  __int64 (__fastcall ***v28)(_QWORD); // [rsp+78h] [rbp-59h] BYREF
  __int64 v29; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v30[2]; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v31[12]; // [rsp+90h] [rbp-41h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 80LL))(a2, v31);
  v12 = (void (__fastcall ***)(_QWORD, unsigned int *))(a1 + *(int *)(*(_QWORD *)(a1 - 104) + 20LL) - 104LL);
  (**v12)(v12, v30);
  v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v29);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x13Cu, 0LL);
  }
  else
  {
    v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)(a1 + 16)
                                                                                      + 8LL
                                                                                      + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL)
                                                                                               + 4LL));
    v17 = (**v16)(v16, &GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f, &v28);
    v15 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x13Eu, 0LL);
    }
    else
    {
      v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(**v28)(v28);
      v20 = (**v19)(v19, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v27);
      v15 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x140u, 0LL);
      }
      else
      {
        v22 = *(_QWORD *)(a1 + 16) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 8LL);
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        v24 = CD3DDevice::VideoProcessorBlt(v23, v29, a3, a4, v31[0], v31[1], a5, a6, a7, v27, v30[0], v30[1], a8);
        v15 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x15Au, 0LL);
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v29);
  return v15;
}
