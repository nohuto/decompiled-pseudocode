/*
 * XREFs of ??$EM_ToastCenterWindowSize@AEBHAEAHJJ@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBHAEAH$$QEAJ2@Z @ 0x18009A794
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234504 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@NotificationCenterLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18001DFD0 (-Provider@NotificationCenterLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18023057C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

const struct _tlgProvider_t *__fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ToastCenterWindowSize<int const &,int &,long,long>(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *result; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // r9d
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v15[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  result = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a3;
    v10 = *a2;
    v11 = *a4;
    v15[0] = *a1;
    v13 = v9;
    v14 = v10;
    v12 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_180578C4D,
                                            0,
                                            v11,
                                            (__int64)v15,
                                            (__int64)&v14,
                                            (__int64)&v13,
                                            (__int64)&v12);
  }
  return result;
}
