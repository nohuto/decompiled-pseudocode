__int64 __fastcall CSuperWetInkScribbleBase::Scribble(
        CSuperWetInkScribbleBase *this,
        struct ID3D12GraphicsCommandList *a2,
        struct ID3D12Resource *a3,
        struct IDCompositionDirectInkSuperWetRenderer *a4,
        struct IUnknown *a5,
        enum D3D12_RESOURCE_STATES *a6,
        struct ComputeScribbleLatencyData *a7,
        struct tagRECT *a8)
{
  int v12; // esi
  __int64 v13; // rdx
  struct tagRECT *v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  __int64 v23; // rax
  bool v24[4]; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  int v27; // [rsp+7Ch] [rbp-84h] BYREF
  enum D3D12_RESOURCE_STATES *v28; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT *v29; // [rsp+88h] [rbp-78h] BYREF
  int v30[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t *v35; // [rsp+B8h] [rbp-48h] BYREF
  int v36; // [rsp+C0h] [rbp-40h] BYREF
  int v37; // [rsp+C4h] [rbp-3Ch]
  int v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  _QWORD v42[2]; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v28 = a6;
  v29 = a8;
  v25 = 0;
  v32 = 0LL;
  v31 = 0LL;
  *(_QWORD *)v30 = 0LL;
  v12 = (*(__int64 (__fastcall **)(CSuperWetInkScribbleBase *, int *, __int64 *, __int64 *, int *))(*(_QWORD *)this
                                                                                                  + 88LL))(
          this,
          &v25,
          &v32,
          &v31,
          v30);
  if ( v12 < 0 )
  {
    v13 = 32LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  *((_QWORD *)a7 + 6) = *(_QWORD *)v30;
  *((_QWORD *)a7 + 2) = v31;
  *((_QWORD *)a7 + 1) = v32;
  v15 = (struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 2) + 24LL))(
                            *((_QWORD *)this + 2),
                            v42);
  *v29 = *v15;
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct IDCompositionDirectInkSuperWetRenderer *, struct ID3D12GraphicsCommandList *, struct ID3D12Resource *, struct IUnknown *, enum D3D12_RESOURCE_STATES *, int *))(**((_QWORD **)this + 2) + 48LL))(
          *((_QWORD *)this + 2),
          a4,
          a2,
          a3,
          a5,
          v28,
          &v36);
  if ( v12 < 0 )
  {
    v13 = 46LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
  *((_DWORD *)this + 6) = v25;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0qqqxx_EventWriteTransfer(v17, v16, v38, v36, v37, v39, v40);
  if ( (unsigned int)dword_1803E0798 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E0798, 2LL) )
    {
      v26 = v37;
      v27 = v36;
      v33 = v40;
      v34 = v39;
      LODWORD(v28) = v41;
      v35 = (wchar_t *)*((_QWORD *)this + 6);
      v22 = *((_DWORD *)this + 10) == v18;
      LODWORD(v29) = *((_DWORD *)this + 10);
      v23 = *((_QWORD *)this + 4);
      v24[0] = v22;
      v42[0] = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v19,
        byte_18037F973,
        v20,
        v21,
        (__int64)v42,
        (__int64)v24,
        (__int64)&v29,
        &v35,
        (__int64)&v28,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v27,
        (__int64)&v26);
    }
  }
  *(_DWORD *)a7 = v36;
  *((_DWORD *)a7 + 1) = v37;
  *((_QWORD *)a7 + 3) = v39;
  *((_QWORD *)a7 + 5) = *((_QWORD *)this + 4);
  return 0LL;
}
