/*
 * XREFs of ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x1C00DCEE4
 * Callers:
 *     ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C00DCE50 (-DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CMouseQueue::_Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  char *v6; // rcx
  char *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v5 = *((unsigned __int16 *)this + 1345);
  if ( !(_WORD)v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    LOWORD(v5) = *((_WORD *)this + 1345);
  }
  v6 = (char *)this + 168 * (((unsigned __int8)*((_WORD *)this + 1344) - (unsigned __int8)v5 + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v6 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v6 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v6 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v6 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v6 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v6 + 6);
  v7 = (char *)a2 + 128;
  *((_OWORD *)v7 - 1) = *((_OWORD *)v6 + 7);
  *(_OWORD *)v7 = *((_OWORD *)v6 + 8);
  *((_OWORD *)v7 + 1) = *((_OWORD *)v6 + 9);
  *((_QWORD *)v7 + 4) = *((_QWORD *)v6 + 20);
  memset(v6, 0, 0xA8uLL);
  if ( --*((_WORD *)this + 1345) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
}
