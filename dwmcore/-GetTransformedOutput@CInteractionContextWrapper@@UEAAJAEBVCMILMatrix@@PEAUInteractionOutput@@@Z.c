__int64 __fastcall CInteractionContextWrapper::GetTransformedOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        struct InteractionOutput *a3)
{
  char *v3; // rbx
  unsigned int v4; // r14d
  int v7; // eax
  __int128 v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+80h] [rbp+7h] BYREF
  int v14; // [rsp+84h] [rbp+Bh] BYREF
  int v15; // [rsp+88h] [rbp+Fh] BYREF
  int v16; // [rsp+8Ch] [rbp+13h] BYREF
  int v17; // [rsp+90h] [rbp+17h] BYREF
  int v18; // [rsp+94h] [rbp+1Bh] BYREF
  int v19; // [rsp+98h] [rbp+1Fh] BYREF
  CInteractionContextWrapper *v20; // [rsp+A0h] [rbp+27h] BYREF
  unsigned int v21; // [rsp+E0h] [rbp+67h] BYREF
  int v22; // [rsp+F0h] [rbp+77h] BYREF
  int v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (char *)this + 152;
  v4 = 0;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 184);
  *((_QWORD *)a3 + 6) = *((_QWORD *)this + 25);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this + 52);
  if ( *((_BYTE *)this + 148) )
  {
    v7 = CInteractionContextWrapper::TransformOutput(
           this,
           a2,
           (CInteractionContextWrapper *)((char *)this + 24),
           (CInteractionContextWrapper *)((char *)this + 152));
    v8 = *(_OWORD *)v3;
    *((_BYTE *)this + 148) = 0;
    v4 = v7;
    *(_OWORD *)a3 = v8;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v3 + 2);
    *((_QWORD *)a3 + 6) = *((_QWORD *)v3 + 6);
    *((_DWORD *)a3 + 14) = *((_DWORD *)v3 + 14);
    if ( (unsigned int)dword_1803E07D0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v22 = *((_DWORD *)this + 49);
        v23 = *((_DWORD *)this + 48);
        v13 = *((_DWORD *)this + 47);
        v14 = *((_DWORD *)this + 46);
        v15 = *((_DWORD *)this + 45);
        v16 = *((_DWORD *)this + 44);
        v17 = *((_DWORD *)this + 42);
        v18 = *((_DWORD *)this + 41);
        v19 = *((_DWORD *)this + 40);
        v21 = v4;
        v20 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          byte_18037F290,
          v10,
          v11,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21);
      }
    }
  }
  return v4;
}
