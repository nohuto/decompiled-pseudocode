/*
 * XREFs of ?LogFontLoadAttempt@@YAXPEAXW4_W32KFontSourceType@@PEBGH@Z @ 0x1C02704FC
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C00F7AC8 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 * Callees:
 *     GetProcessImageFileName @ 0x1C0002F1C (GetProcessImageFileName.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C0159258 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const unsigned __int16 **ProcessImageFileName; // rax
  const unsigned __int16 **v8; // rbx
  const unsigned __int16 *v9; // rcx
  char result; // al
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
    v9 = &word_1C02E3794;
  result = EtwFontLoadAttemptEvent(v9, a2, a3, a4);
  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000000LL);
    if ( result )
    {
      v14 = a4;
      v15[0] = a2;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 v11,
                 byte_1C02F24D1,
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
