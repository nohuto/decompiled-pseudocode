/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800BCC10
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180056B00 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800BCA20 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18023A040 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180054C80 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x1800555A0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180057DA8 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800AE258 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800E197C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023BA18 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(
        CBaseExpression *this,
        const struct CExpressionValue *a2,
        __int64 a3)
{
  bool v3; // bl
  unsigned int v6; // ecx
  char v7; // al
  __int64 v8; // rax
  struct CResource *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int TracingCookie; // eax
  HRESULT v14; // eax
  unsigned int v15; // ecx
  HANDLE EventW; // rbx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-B8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-A8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
    v3 = (unsigned __int8)CExpressionValue::operator==((_DWORD *)this + 18, a2, a3) == 0;
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 72), a2);
  if ( v3 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v14 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x276u, 0LL);
      return v11;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v7 = *((_BYTE *)this + 216);
  if ( (v7 & 2) != 0 && (v7 & 1) != 0 )
  {
    v8 = *((_QWORD *)this + 23);
    if ( v8 && (v9 = *(struct CResource **)(v8 + 16)) != 0LL )
    {
      v10 = CBaseExpression::SetOutputValueOnTarget(this, v9);
      v11 = v10;
      if ( v10 >= 0 )
        return 0;
      v17 = v10;
      v18 = 648;
    }
    else
    {
      v11 = -2147024890;
      v17 = -2147024890;
      v18 = 647;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v17, v18, 0LL);
    return v11;
  }
  return 0;
}
