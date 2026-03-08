/*
 * XREFs of ?HrFindInterface@CPathEmitterEdge@EmitterShapes@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180266ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterEdge::HrFindInterface(
        EmitterShapes::CPathEmitterEdge *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2cd9069e_12e2_11dc_9fed_001143a055f9.Data4;
  if ( v3 )
  {
    v4 = -2147467262;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467262, 0x60u, 0LL);
  }
  else
  {
    *a3 = this;
    return 0;
  }
  return v4;
}
