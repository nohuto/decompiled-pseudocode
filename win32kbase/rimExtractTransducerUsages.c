__int64 __fastcall rimExtractTransducerUsages(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // esi
  __int64 v6; // rdi
  __int64 v11; // rbx
  int UsageValue; // ebx
  __int64 v13; // r9
  int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // r15d
  unsigned __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v27; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v28; // [rsp+8Ch] [rbp-Dh] BYREF
  unsigned int v29; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v30; // [rsp+94h] [rbp-5h] BYREF
  int v31; // [rsp+98h] [rbp-1h] BYREF
  int v32; // [rsp+9Ch] [rbp+3h] BYREF
  int v33; // [rsp+A0h] [rbp+7h] BYREF
  unsigned int v34; // [rsp+A4h] [rbp+Bh] BYREF
  unsigned int v35; // [rsp+A8h] [rbp+Fh] BYREF
  BOOL v36; // [rsp+ACh] [rbp+13h] BYREF
  int v37; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+C0h] [rbp+27h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+5Fh] BYREF

  v5 = 0;
  v6 = a5;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 16LL);
  v38 = *(_QWORD *)(a1 + 472);
  v40 = v11;
  if ( !*(_QWORD *)(a5 + 2848) )
  {
    v28 = 0;
    v27 = 0;
    v29 = 0;
    LODWORD(a5) = rimHidP_GetUsageValue(0LL, 13LL, a2, 145LL, (__int64)&v29, v11, a3, a4);
    UsageValue = rimHidP_GetUsageValue(0LL, 13LL, a2, 91LL, (__int64)&v28, v11, a3, a4);
    v14 = rimHidP_GetUsageValue(0LL, 13LL, a2, 110LL, (__int64)&v27, v40, a3, a4);
    if ( UsageValue >= 0 )
    {
      v15 = v38;
      v16 = v29;
      v17 = a5;
      v18 = v28 | ((unsigned __int64)v27 << 32);
      *(_WORD *)(v6 + 2856) = v29;
      *(_QWORD *)(v6 + 2848) = v18;
      if ( (*(_DWORD *)(v15 + 360) & 0x10000) != 0 && v17 >= 0 && (_WORD)v16 && v18 )
      {
        *(_DWORD *)(v6 + 2860) = 1;
        *(_WORD *)(v6 + 2590) = v16;
        *(_QWORD *)(v6 + 2592) = v18;
      }
      else if ( !v18 )
      {
        return 0LL;
      }
      v19 = *(_DWORD *)(v6 + 2496);
      v21 = *(_QWORD *)(SGDGetUserSessionState(v18, v18, v16, v13) + 456);
      if ( *(_QWORD *)(v6 + 2848) != v21 || (v20 = v19 / 0x64, v21 = v19 % 0x64, (unsigned int)v21 < 2) )
      {
        if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x800000000000LL) )
        {
          v24 = *(_QWORD *)(a1 + 456);
          v31 = *(_DWORD *)(v6 + 64);
          v32 = *(_DWORD *)(v6 + 2860);
          v33 = *(unsigned __int16 *)(v6 + 2856);
          v34 = v27;
          v35 = v28;
          v39 = 2048LL;
          v30 = v19;
          LOWORD(a5) = *(_WORD *)(v24 + 112);
          LOWORD(v40) = *(_WORD *)(v24 + 110);
          LODWORD(v38) = 1;
          v36 = v17 >= 0;
          LOBYTE(v5) = v14 >= 0;
          v37 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v24,
            byte_1C0298A6E,
            v22,
            v23,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v40,
            (__int64)&a5,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&v39);
        }
        v25 = *(_QWORD *)(v6 + 2848);
        *(_QWORD *)(SGDGetUserSessionState(v21, v20, v22, v23) + 456) = v25;
      }
    }
  }
  return 0LL;
}
