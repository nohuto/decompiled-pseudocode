/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C009CC80
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0043318 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C009CDA0 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int i; // edi
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF
  int v12; // [rsp+48h] [rbp-60h]
  _BYTE v13[48]; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v5 = *(_WORD *)(v2 + 28) & 0xF3FF;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3270LL);
    v2 = *((_QWORD *)a2 + 1);
  }
  v6 = *(unsigned __int16 *)(v2 + 30);
  for ( i = 1; v5; i *= 2 )
  {
    if ( (v5 & 3) != 0 )
    {
      if ( (v5 & 1) != 0 )
      {
        if ( !gbClientDoubleClickSupport || (v8 = 1LL, (v6 & 1) == 0) )
          v8 = 0LL;
        CMouseProcessor::CButtonEvent::CButtonEvent(v13, i, 1LL, v8, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v13);
      }
      if ( (v5 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v13, i, 2LL, 0LL, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v13);
      }
      v9 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v9 + 112) & 1) == 0 && *(_DWORD *)(v9 + 108) != 1 )
      {
        v10 = *(_DWORD *)(v9 + 140);
        v11 = *(_QWORD *)(v9 + 132);
        v12 = v10;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v11, (__int64)a2, 0) )
          break;
      }
    }
    v5 >>= 2;
    v6 >>= 2;
  }
}
