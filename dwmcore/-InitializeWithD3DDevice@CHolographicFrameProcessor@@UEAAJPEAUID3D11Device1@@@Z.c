__int64 __fastcall CHolographicFrameProcessor::InitializeWithD3DDevice(
        CHolographicFrameProcessor *this,
        struct ID3D11Device1 *a2)
{
  unsigned int v2; // ebp
  __int64 *v3; // rdi
  int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, char *); // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  __int64 v14; // rbx
  __int64 *v15; // r14
  int (__fastcall *v16)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  unsigned int v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 48);
  v21 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
    v7 = OpenFlipConsumer(*((_QWORD *)this + 10), (char *)this + 88, (char *)this + 40);
    v6 = v7;
    if ( v7 < 0 )
    {
      v20 = 116;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device1>::operator=(v3, (__int64)a2);
      v9 = *v3;
      v10 = *(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 320LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
      v10(v9, (char *)this + 56);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 7);
      v12 = **v11;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
      v7 = v12(v11, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 64);
      v6 = v7;
      if ( v7 < 0 )
      {
        v20 = 121;
      }
      else
      {
        QueryInterface = a2->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
        v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))QueryInterface)(
               a2,
               &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
               &v21);
        v6 = v7;
        if ( v7 < 0 )
        {
          v20 = 123;
        }
        else
        {
          v14 = v21;
          v15 = (__int64 *)((char *)this + 96);
          v16 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
          if ( v16(v14, 0LL, 0LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v15) >= 0 )
            goto LABEL_14;
          v17 = v21;
          v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
          v7 = v18(v17, 0LL, 8LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v15);
          v6 = v7;
          if ( v7 >= 0 )
            goto LABEL_14;
          v20 = 132;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v20, 0LL);
LABEL_14:
    v2 = v6;
    goto LABEL_15;
  }
  if ( (struct ID3D11Device1 *)*v3 != a2 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x71u, 0LL);
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return v2;
}
