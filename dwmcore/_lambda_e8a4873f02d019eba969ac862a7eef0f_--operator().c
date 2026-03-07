__int64 __fastcall lambda_e8a4873f02d019eba969ac862a7eef0f_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        char a6)
{
  int v7; // eax
  __int64 result; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  bool v12; // [rsp+50h] [rbp-21h] BYREF
  char v13; // [rsp+51h] [rbp-20h] BYREF
  bool v14[2]; // [rsp+52h] [rbp-1Fh] BYREF
  int v15; // [rsp+54h] [rbp-1Dh] BYREF
  int v16; // [rsp+58h] [rbp-19h] BYREF
  __int64 v17; // [rsp+60h] [rbp-11h] BYREF
  _WORD v18[4]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+70h] [rbp-1h]
  int v20; // [rsp+78h] [rbp+7h]
  int v21; // [rsp+7Ch] [rbp+Bh]
  void *retaddr; // [rsp+B8h] [rbp+47h]

  v20 = a3;
  v18[3] = 0;
  v7 = *(_DWORD *)(a2 + 8);
  v19 = a4;
  v21 = v7;
  v18[0] = (a6 & 4) != 0;
  v18[1] = (a6 & 2) != 0;
  v18[2] = a6 & 1;
  result = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(a2 + 16, v18, 1LL);
  if ( (int)result < 0 )
    ModuleFailFastForHRESULT((unsigned int)result, retaddr);
  if ( (unsigned int)dword_1803E0B40 > 5 && (byte_1803E0B50 & 1) != 0 )
  {
    result = qword_1803E0B58 & 1;
    if ( result == qword_1803E0B58 )
    {
      v15 = v21;
      v17 = v19;
      v12 = (a6 & 4) != 0;
      v13 = a6 & 1;
      v14[0] = (a6 & 2) != 0;
      v16 = a3;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
               v9,
               (unsigned int)&unk_18037C057,
               v10,
               v11,
               (__int64)&v16,
               (__int64)v14,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v17,
               (__int64)&v15);
    }
  }
  return result;
}
