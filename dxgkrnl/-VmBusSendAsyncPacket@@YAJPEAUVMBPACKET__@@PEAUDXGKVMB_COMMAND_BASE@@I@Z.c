__int64 __fastcall VmBusSendAsyncPacket(struct VMBPACKET__ *a1, struct DXGKVMB_COMMAND_BASE *a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // r8
  signed __int64 v7; // rcx
  bool v8; // zf
  char v9; // al
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  char v17; // [rsp+40h] [rbp-18h]

  LODWORD(v15) = -1;
  v3 = a3;
  v16 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    LODWORD(v15) = 2219;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2219);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2219);
  if ( v3 - 24 > 0x1FFE7 )
  {
    v11 = -1073741823;
    goto LABEL_18;
  }
  v7 = _InterlockedIncrement64(&qword_1C013D3A0);
  v8 = bTracingEnabled == 0;
  *(_QWORD *)a2 = v7;
  if ( !v8 )
  {
    v9 = *((_BYTE *)a2 + 12);
    if ( v9 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v10 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketGlobalAsync;
LABEL_15:
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v10,
          v6,
          a1,
          v7,
          *((_DWORD *)a2 + 4),
          v15,
          v16);
      }
    }
    else if ( v9 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      {
        v10 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketHostToVmAsync;
        goto LABEL_15;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      v10 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketAsync;
      goto LABEL_15;
    }
  }
  v11 = ((__int64 (__fastcall *)(struct VMBPACKET__ *, struct DXGKVMB_COMMAND_BASE *, _QWORD, _QWORD, int))qword_1C013CF30)(
          a1,
          a2,
          v3,
          0LL,
          1);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  return v11;
}
