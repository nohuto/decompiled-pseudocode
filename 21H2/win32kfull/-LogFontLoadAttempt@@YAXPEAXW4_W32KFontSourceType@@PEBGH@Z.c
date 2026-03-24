/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C0272868
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0134FCC (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     GetProcessImageFileName @ 0x1C0001218 (GetProcessImageFileName.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01D0F54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const unsigned __int16 **ProcessImageFileName; // rax
  const unsigned __int16 **v8; // rbx
  const unsigned __int16 *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15[5]; // [rsp+34h] [rbp-14h] BYREF

  ProcessImageFileName = (const unsigned __int16 **)GetProcessImageFileName(a1);
  v8 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v9 = ProcessImageFileName[1];
  else
    v9 = &word_1C02E597C;
  result = EtwFontLoadAttemptEvent(v9, a2, a3, a4);
  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x200000000000LL) != 0 )
  {
    result = qword_1C032B3F0 & 0x200000000000LL;
    if ( (qword_1C032B3F0 & 0x200000000000LL) == qword_1C032B3F0 )
    {
      v14 = a4;
      v15[0] = a2;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 v11,
                 (int)&unk_1C02F50C7,
                 v12,
                 v13,
                 (__int64)v15,
                 (__int64)&v14);
    }
  }
  if ( v8 )
    return FreeTmpBuffer(v8);
  return result;
}
