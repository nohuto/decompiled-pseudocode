__int64 __fastcall CChannel::DuplicateSharedResource(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // eax
  unsigned int v15; // r8d
  unsigned int FreeHandle; // eax
  __int64 v18; // rdx
  unsigned int *v19; // [rsp+20h] [rbp-60h]
  unsigned int v20; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-3Ch] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  unsigned __int32 v24; // [rsp+58h] [rbp-28h] BYREF
  __int64 v25; // [rsp+5Ch] [rbp-24h]
  unsigned int v26; // [rsp+64h] [rbp-1Ch]
  _BYTE v27[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v27, (struct CChannel *)a1);
  v9 = CChannel::MilTypeFromDwmType(a3, &v21);
  v11 = v9;
  if ( v9 < 0 )
  {
    v18 = 803LL;
    goto LABEL_11;
  }
  v23 = 0LL;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
  {
    v22 = 0LL;
    v13 = v21;
    v19 = (unsigned int *)&v22 + 1;
    v14 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 72), a2, v21, &v22);
    if ( v14 < 0 )
    {
      v11 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x339,
              v15,
              (const char *)(unsigned int)v14,
              (int)&v22 + 4);
      goto LABEL_6;
    }
    FreeHandle = CChannel::GetFreeHandle((CChannel *)a1);
    v24 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v25 = v22;
    v20 = FreeHandle;
    v26 = FreeHandle;
    v9 = CChannel::SendCommand((CChannel *)a1, &v24, 0x10u);
    v11 = v9;
    if ( v9 >= 0 )
      goto LABEL_5;
    v18 = 832LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      (int)v19);
    goto LABEL_6;
  }
  LOBYTE(v10) = a4;
  v13 = v21;
  v19 = &v20;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 40LL))(v12, a2, v21, v10);
  v11 = v9;
  if ( v9 < 0 )
  {
    v18 = 814LL;
    goto LABEL_11;
  }
LABEL_5:
  CChannel::CreateNewHandleTableEntry(a1, v20, v13, v23);
  v11 = 0;
  *a5 = v20;
LABEL_6:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v27);
  return v11;
}
