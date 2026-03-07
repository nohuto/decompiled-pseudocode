__int64 __fastcall Control_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(*(_QWORD *)(a4 + 344) + 96LL) = a3;
  return Control_Transfer_MapIntoRing(a4);
}
