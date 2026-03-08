/*
 * XREFs of ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800EB4C0
 * Callers:
 *     ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x1800EB4B0 (-OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800EB4FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CAsyncFlushResponse::SendResponse(CAsyncFlushResponse *this, int a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx

  v2 = 0;
  if ( !*((_BYTE *)this + 33) )
  {
    *((_BYTE *)this + 33) = 1;
    v3 = CAsyncFlushResponse::SendResponseWorker(*((struct CChannelContext **)this + 5), *((_DWORD *)this + 12), a2);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x58u, 0LL);
  }
  return v2;
}
