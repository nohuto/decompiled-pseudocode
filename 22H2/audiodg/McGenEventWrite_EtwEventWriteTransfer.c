/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x14003E868
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400021C0 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x14003E8CC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x14004A324 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14004AD1C (McTemplateU0zq_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventWrite_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_14008F058;
  v6 = 0;
  if ( qword_14008F058 )
  {
    *(_QWORD *)a5 = qword_14008F058;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, a4, a5);
}
