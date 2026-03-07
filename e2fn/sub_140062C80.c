__int64 __fastcall sub_140062C80(__int64 a1, ULONG a2)
{
  char v2; // r14
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  int v8; // esi
  unsigned int ProcessorNumberFromIndex; // r15d
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  void *v21; // r13
  void *v22; // rdi
  void *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  void *v26; // rax
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  struct _KDPC *v29; // rax
  void *v30; // r14
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  void *v35; // rax
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  _BYTE v39[8]; // [rsp+50h] [rbp-39h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-31h]
  _BYTE v41[8]; // [rsp+60h] [rbp-29h] BYREF
  volatile signed __int32 *v42; // [rsp+68h] [rbp-21h]
  _BYTE v43[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v44; // [rsp+78h] [rbp-11h]
  _BYTE v45[8]; // [rsp+80h] [rbp-9h] BYREF
  volatile signed __int32 *v46; // [rsp+88h] [rbp-1h]
  _BYTE v47[8]; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v48; // [rsp+98h] [rbp+Fh]
  _BYTE v49[8]; // [rsp+A0h] [rbp+17h] BYREF
  volatile signed __int32 *v50; // [rsp+A8h] [rbp+1Fh]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v52; // [rsp+100h] [rbp+77h]

  v2 = 0;
  ProcNumber = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeferredProcedureCall::SetTargetCpu", a1 - 352);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = a1 - 352;
  v52 = a1 - 352;
  ProcessorNumberFromIndex = sub_140061D70(a1 - 352, a2);
  if ( ProcessorNumberFromIndex )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                    a1 - 296,
                                    v41)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v39);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        v14,
        5,
        11,
        (__int64)&unk_1400D8318,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"CheckTargetCpu(targetCpu)",
        ProcessorNumberFromIndex);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v16 = v40;
      v2 &= ~2u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v17 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_140008390(v8, (__int64)L"CheckTargetCpu(targetCpu)", 75, 129, ProcessorNumberFromIndex);
  }
  else
  {
    ProcNumber = 0;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(a2, &ProcNumber);
    if ( ProcessorNumberFromIndex )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v18 = a1 - 296;
        v19 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(a1 - 296, v45);
        v21 = &unk_1400D44E0;
        v22 = &unk_1400D44E0;
        v23 = *(void **)(*(_QWORD *)v20 + 16LL);
        if ( v23 )
          v22 = v23;
        v24 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v43);
        v2 = 12;
        LOBYTE(v25) = 2;
        v26 = *(void **)(*(_QWORD *)v24 + 16LL);
        if ( v26 )
          v21 = v26;
        sub_1400A5E80(
          v19,
          v25,
          5,
          12,
          (__int64)&unk_1400D8318,
          (__int64)v21,
          (__int64)v22,
          (__int64)L"KeGetProcessorNumberFromIndex(targetCpu, &processorNumber)",
          ProcessorNumberFromIndex);
        v8 = v52;
      }
      if ( (v2 & 8) != 0 )
      {
        v27 = v44;
        v2 &= ~8u;
        if ( v44 )
        {
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v28 = v46;
        if ( v46 )
        {
          if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
      }
      sub_140028E54(
        v8,
        (__int64)L"KeGetProcessorNumberFromIndex(targetCpu, &processorNumber)",
        78,
        129,
        ProcessorNumberFromIndex);
    }
    else
    {
      v29 = (struct _KDPC *)(*(__int64 (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 920))(
                              qword_1400DF6A8,
                              *(_QWORD *)(a1 + 16));
      ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(v29, &ProcNumber);
      if ( ProcessorNumberFromIndex )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v30 = &unk_1400D44E0;
          v31 = &unk_1400D44E0;
          v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                        a1 - 296,
                                        v49)
                         + 16LL);
          if ( v32 )
            v31 = v32;
          v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v47);
          LOBYTE(v34) = 2;
          v35 = *(void **)(*(_QWORD *)v33 + 16LL);
          if ( v35 )
            v30 = v35;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
            v34,
            5,
            13,
            (__int64)&unk_1400D8318,
            (__int64)v30,
            (__int64)v31,
            (__int64)L"KeSetTargetProcessorDpcEx(WdfDpcWdmGetDpc(m_dpcHandle), &processorNumber)",
            ProcessorNumberFromIndex);
          v2 = 48;
        }
        if ( (v2 & 0x20) != 0 )
        {
          v36 = v48;
          v2 &= ~0x20u;
          if ( v48 )
          {
            if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
            }
          }
        }
        if ( (v2 & 0x10) != 0 )
        {
          v37 = v50;
          if ( v50 )
          {
            if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
              if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
            }
          }
        }
        sub_140039B9C(
          v8,
          (__int64)L"KeSetTargetProcessorDpcEx(WdfDpcWdmGetDpc(m_dpcHandle), &processorNumber)",
          79,
          129,
          ProcessorNumberFromIndex);
      }
      else
      {
        ProcessorNumberFromIndex = 0;
      }
    }
  }
  if ( v4 )
  {
    sub_14005A99C(v4);
    ExFreePool(v4);
  }
  return ProcessorNumberFromIndex;
}
