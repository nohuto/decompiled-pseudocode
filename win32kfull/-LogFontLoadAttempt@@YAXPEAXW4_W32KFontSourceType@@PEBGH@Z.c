char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const unsigned __int16 **ProcessImageFileName; // rax
  const unsigned __int16 **v8; // rbx
  const unsigned __int16 *v9; // rcx
  char result; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v16[5]; // [rsp+34h] [rbp-14h] BYREF

  ProcessImageFileName = (const unsigned __int16 **)GetProcessImageFileName(a1);
  v8 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v9 = ProcessImageFileName[1];
  else
    v9 = &word_1C03142AC;
  result = EtwFontLoadAttemptEvent(v9, a2, a3, a4);
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000000LL);
    if ( result )
    {
      v15 = a4;
      v16[0] = a2;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 v13,
                 (int)&unk_1C032007E,
                 v12,
                 v14,
                 (__int64)v16,
                 (__int64)&v15);
    }
  }
  if ( v8 )
    return FreeTmpBuffer(v8, v11, v12);
  return result;
}
