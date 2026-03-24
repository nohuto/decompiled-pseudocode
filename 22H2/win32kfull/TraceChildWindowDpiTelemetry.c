/*
 * XREFs of TraceChildWindowDpiTelemetry @ 0x1C00010A4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0001168 (GetProcessImageFilename.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4@Z @ 0x1C01E3828 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

__int64 __fastcall TraceChildWindowDpiTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  const unsigned __int16 *v4; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rcx
  const unsigned __int16 *v11; // r14
  __int64 v12; // rsi
  const unsigned __int16 *v13; // [rsp+80h] [rbp+40h] BYREF
  const unsigned __int16 *v14; // [rsp+88h] [rbp+48h] BYREF
  const unsigned __int16 *v15; // [rsp+98h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = &word_1C02E497C;
  v13 = &word_1C02E497C;
  v14 = &word_1C02E497C;
  v7 = 0LL;
  v8 = *(_QWORD *)(v3 + 424);
  result = GetProcessImageFilename(v8, &v13);
  v11 = v13;
  v12 = result;
  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 16);
    v10 = *(_QWORD *)(result + 424);
    if ( v8 == v10 )
    {
      v4 = v13;
    }
    else
    {
      result = GetProcessImageFilename(v10, &v14);
      v4 = v14;
      v7 = result;
    }
  }
  if ( (unsigned int)dword_1C032A3D8 > 5 && (qword_1C032A3E8 & 0x400000000000LL) != 0 )
  {
    result = qword_1C032A3F0 & 0x400000000000LL;
    if ( (qword_1C032A3F0 & 0x400000000000LL) == qword_1C032A3F0 )
    {
      v14 = v4;
      v15 = v11;
      LODWORD(v13) = a3;
      result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                 v10,
                 &unk_1C02F1888);
    }
  }
  if ( v12 )
    result = FreeTmpBuffer(v12);
  if ( v7 )
    return FreeTmpBuffer(v7);
  return result;
}
