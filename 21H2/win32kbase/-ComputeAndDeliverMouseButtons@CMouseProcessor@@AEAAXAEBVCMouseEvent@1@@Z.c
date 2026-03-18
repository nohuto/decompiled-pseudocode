/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00426D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00427EC (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0042918 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  unsigned int v8; // esi
  unsigned int i; // ebp
  _BOOL8 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-50h]
  _BYTE v17[48]; // [rsp+40h] [rbp-48h] BYREF

  v6 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xF3FF;
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v7);
  v8 = 1;
  for ( i = *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 30LL); v6; i >>= 2 )
  {
    if ( (v6 & 3) != 0 )
    {
      if ( (v6 & 1) != 0 )
      {
        v10 = gbClientDoubleClickSupport && (i & 1) != 0;
        CMouseProcessor::CButtonEvent::CButtonEvent(v17, v8, 1LL, v10, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v17, v11);
      }
      if ( (v6 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent(v17, v8, 2LL, 0LL, a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v17, v12);
      }
      v13 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v13 + 112) & 1) == 0 && *(_DWORD *)(v13 + 108) != 1 )
      {
        v14 = *(_DWORD *)(v13 + 140);
        v15 = *(_QWORD *)(v13 + 132);
        v16 = v14;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v15, v4, 0LL) )
          break;
      }
    }
    v8 *= 2;
    v6 >>= 2;
  }
}
