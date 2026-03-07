__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  int ConnectionBatch; // eax
  unsigned int v7; // ecx
  struct UCE_RDP_HEADER *i; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  struct UCE_RDP_HEADER *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a3;
  v4 = 0;
  v5 = 0;
  ConnectionBatch = NtDCompositionGetConnectionBatch(*((_QWORD *)this + 1), &v13, &v14);
  if ( ConnectionBatch < 0 )
  {
    v4 = ConnectionBatch | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ConnectionBatch | 0x10000000, 0xACu, 0LL);
  }
  else
  {
    for ( i = v14; i; v14 = i )
    {
      v12 = 0;
      v9 = CComposition::ProcessPartitionCommand(a2, i, &v12);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xB1u, 0LL);
        return v4;
      }
      v5 += v12;
      i = (struct UCE_RDP_HEADER *)*((_QWORD *)v14 + 1);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0q_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED,
        v5);
  }
  return v4;
}
