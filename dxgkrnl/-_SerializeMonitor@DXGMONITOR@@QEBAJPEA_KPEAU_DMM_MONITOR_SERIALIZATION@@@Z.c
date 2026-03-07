__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DxgMonitor::MonitorModes **this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  __int64 ModesSerializationSizeInBytes; // r14
  __int64 FrequencyRangeSerializationSizeInBytes; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rcx
  __int16 v12; // cx
  __int16 v13; // ax
  __int16 v14; // dx
  bool IsAddressValid; // al
  __int16 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  char v20; // cl
  __int64 v21; // rbx
  __int64 result; // rax
  _BYTE v23[13]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+2Dh] [rbp-2Bh]
  int v25; // [rsp+35h] [rbp-23h]
  __int16 v26; // [rsp+39h] [rbp-1Fh]
  char v27; // [rsp+3Bh] [rbp-1Dh]

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  ModesSerializationSizeInBytes = DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(this[29]);
  FrequencyRangeSerializationSizeInBytes = DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(this[29]);
  v8 = *((_QWORD *)this[27] + 16);
  if ( v8 && (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8)) != 0 )
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  else
    v10 = 0;
  v11 = FrequencyRangeSerializationSizeInBytes + v10 + ModesSerializationSizeInBytes + 56;
  if ( a3 && v11 <= *a2 )
  {
    *(_DWORD *)a3 = v11;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 45);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 87);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 78) != 1;
    *((_BYTE *)a3 + 13) = *((_BYTE *)this[29] + 116) != 0;
    v12 = *((_WORD *)a3 + 7) & 0xFFFE | DXGMONITOR::_SupportSyncLockIdentical((DXGMONITOR *)this);
    *((_WORD *)a3 + 7) = v12;
    v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*((_DWORD *)this + 90) >> 1)) & 2;
    *((_WORD *)a3 + 7) = v13;
    v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(2 * *((_WORD *)this + 180))) & 4;
    *((_WORD *)a3 + 7) = v14;
    *((_WORD *)a3 + 7) = v14 & 0xFFEF | (*((_BYTE *)this[33] + 8) != 0 ? 0x10 : 0);
    IsAddressValid = DxgMonitor::MonitorDisplayPortState::IsAddressValid(this[34]);
    *((_WORD *)a3 + 7) = v16 & 0xFFF7 | (8 * IsAddressValid);
    *((_DWORD *)a3 + 4) = *((_DWORD *)this[29] + 28);
    v17 = *((_QWORD *)this[25] + 1);
    if ( v17 )
      LODWORD(v17) = *(_DWORD *)(*(_QWORD *)(v17 + 64) + 284LL);
    *((_DWORD *)a3 + 5) = v17;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 78);
    if ( DxgMonitor::MonitorDisplayPortState::IsAddressValid(this[34]) )
    {
      DxgMonitor::MonitorDisplayPortState::GetAddress(v18, (__int64)v23);
      v19 = v25;
      v20 = v23[12];
      *(_QWORD *)((char *)a3 + 41) = v24;
      *(_DWORD *)((char *)a3 + 49) = v19;
      *(_WORD *)((char *)a3 + 53) = v26;
      *((_BYTE *)a3 + 55) = v27;
      *((_BYTE *)a3 + 40) = v20;
    }
    DxgMonitor::MonitorModes::SerializeModesToBuffer(
      this[29],
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + 56),
      ModesSerializationSizeInBytes);
    *((_DWORD *)a3 + 6) = 56;
    DxgMonitor::MonitorModes::SerializeFrequencyRangesToBuffer(
      this[29],
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + ModesSerializationSizeInBytes + 56),
      FrequencyRangeSerializationSizeInBytes);
    *((_DWORD *)a3 + 7) = ModesSerializationSizeInBytes + 56;
    v21 = FrequencyRangeSerializationSizeInBytes + ModesSerializationSizeInBytes + 56;
    DxgMonitor::MonitorDescriptorState::SerializeToBuffer(
      this[27],
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + v21),
      v10);
    result = 0LL;
    *((_DWORD *)a3 + 8) = v21;
  }
  else
  {
    *a2 = v11;
    return 3221225507LL;
  }
  return result;
}
