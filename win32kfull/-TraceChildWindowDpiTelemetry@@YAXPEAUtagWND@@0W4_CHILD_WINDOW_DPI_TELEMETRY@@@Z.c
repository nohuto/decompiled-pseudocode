__int64 __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const unsigned __int16 *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  const unsigned __int16 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  const unsigned __int16 *v16; // [rsp+80h] [rbp+40h] BYREF
  const unsigned __int16 *v17; // [rsp+88h] [rbp+48h] BYREF
  const unsigned __int16 *v18; // [rsp+98h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &word_1C03142AC;
  v16 = &word_1C03142AC;
  v17 = &word_1C03142AC;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 424);
  result = GetProcessImageFilename(v8, &v16);
  v12 = v16;
  v13 = result;
  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 16);
    v14 = *(_QWORD *)(result + 424);
    if ( v8 == v14 )
    {
      v4 = v16;
    }
    else
    {
      result = GetProcessImageFilename(v14, &v17);
      v4 = v17;
      v7 = result;
    }
  }
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    result = tlgKeywordOn(&dword_1C0357098, 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v17 = v4;
      v18 = v12;
      LODWORD(v16) = a3;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                 v15,
                 &unk_1C031ECA6);
    }
  }
  if ( v13 )
    result = FreeTmpBuffer(v13, v10, v11);
  if ( v7 )
    return FreeTmpBuffer(v7, v10, v11);
  return result;
}
