/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x1801F6BB0
 * Callers:
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801F6AF0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800EB7CC (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1801DCA60 (McTemplateU0xxq_EventWriteTransfer.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2, __int64 a3)
{
  CChannelContext *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int128 v12; // [rsp+34h] [rbp-24h]
  __int64 v13; // [rsp+44h] [rbp-14h]

  v11 = 17;
  v12 = 0LL;
  v13 = 0LL;
  v5 = (CChannelContext *)*((_QWORD *)this + 5);
  DWORD1(v12) = a2;
  v6 = CChannelContext::PostMessageToChannel(v5, (const struct MIL_MESSAGE *)&v11, a3);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x7Bu, 0LL);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    LODWORD(v10) = a2;
    McTemplateU0xxq_EventWriteTransfer(
      v7,
      &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 211) + 1840LL),
      *((_QWORD *)this + 212),
      v10);
  }
  return v8;
}
