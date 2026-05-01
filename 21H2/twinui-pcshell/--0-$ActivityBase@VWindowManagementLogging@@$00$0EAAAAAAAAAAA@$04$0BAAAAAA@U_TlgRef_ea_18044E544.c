/*
 * XREFs of ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044E544
 * Callers:
 *     ??$Start@AEAIAEAI@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@AEAI0@Z @ 0x1800F3C34 (--$Start@AEAIAEAI@WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@SA-AV01@AEAI0@Z.c)
 *     ??$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA?AV01@$$QEAH0@Z @ 0x1800F3C8C (--$Start@HH@WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@SA-AV01@$$QEAH0@Z.c)
 *     ??0WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800F4544 (--0WindowTabHostLivePreviewThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 *     ??0WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ @ 0x1800F4574 (--0WindowTabHostThumbnailRequested@WindowTabHostTelemetry@@QEAA@XZ.c)
 *     ?ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180451F50 (-ResizeView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180019EFC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}
