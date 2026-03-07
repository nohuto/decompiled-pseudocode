void __fastcall ManipulationThreadTelemetryData::Update(
        LARGE_INTEGER *this,
        const struct tagPOINTER_INFO *a2,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a3,
        DWORD a4)
{
  QueryPerformanceCounter(this + 20);
  this->LowPart = *(_DWORD *)a2;
  this->HighPart = *((_DWORD *)a2 + 2);
  this[1].LowPart = a4;
  *(_OWORD *)&this[2].LowPart = *(_OWORD *)a3;
  *(_OWORD *)&this[4].LowPart = *((_OWORD *)a3 + 1);
  *(_OWORD *)&this[6].LowPart = *((_OWORD *)a3 + 2);
  *(_OWORD *)&this[8].LowPart = *((_OWORD *)a3 + 3);
  *(_OWORD *)&this[10].LowPart = *((_OWORD *)a3 + 4);
  *(_OWORD *)&this[12].LowPart = *((_OWORD *)a3 + 5);
  *(_OWORD *)&this[14].LowPart = *((_OWORD *)a3 + 6);
  *(_OWORD *)&this[16].LowPart = *((_OWORD *)a3 + 7);
  *(_OWORD *)&this[18].LowPart = *((_OWORD *)a3 + 8);
  this[22].LowPart = *((_DWORD *)a2 + 17) - 1;
}
