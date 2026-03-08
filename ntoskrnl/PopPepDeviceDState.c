/*
 * XREFs of PopPepDeviceDState @ 0x1402B9C4C
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x1402B90C0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x1402B9440 (PopIrpWorker.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0 (PopHandleDevicePowerIrpCompletion.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1402B9328 (PopPepUpdateConstraints.c)
 *     PopPlNotifyDeviceDState @ 0x1402B9D3C (PopPlNotifyDeviceDState.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1402F28E0 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1402F295C (PopPepUpdateIdleStateRefCount.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140589C50 (PopFxUpdateComponentPerfStateNominalChange.c)
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x140589D38 (PopFxUpdateDeviceAccountingEnhanced.c)
 */

NTSTATUS __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v6; // ebx
  char v7; // r12
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rcx
  unsigned int v14; // r13d
  unsigned int v15; // r12d
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int i; // ebx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+2Ch] [rbp-3Ch]
  __int16 v25; // [rsp+2Dh] [rbp-3Bh]
  char v26; // [rsp+2Fh] [rbp-39h]
  unsigned int v27; // [rsp+70h] [rbp+8h]
  char v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 )
    {
      result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF);
      if ( result == 1 )
        result = PopPepUpdateConstraints(a1, 4, 1);
    }
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      PopPepUpdateConstraints(a1, 4, 0);
      result = v6 - 1;
      if ( (unsigned int)(v6 - 1) <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v10 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v10 != (_DWORD)v5 )
    {
      LOBYTE(a4) = 0;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v10, (unsigned int)v5, a4);
    }
  }
  if ( !*(_BYTE *)(a1 + 124) && !*(_BYTE *)(a1 + 188) )
  {
    if ( !v7 )
      return result;
    goto LABEL_10;
  }
  v12 = 0;
  if ( (_DWORD)v5 != 4 )
    v12 = *(_DWORD *)(a1 + 4 * v5 + 140);
  v13 = *(int *)(a1 + 168);
  v27 = v12;
  v14 = 0;
  if ( (_DWORD)v13 != 4 )
    v14 = *(_DWORD *)(a1 + 4 * v13 + 140);
  if ( !v7 && (_DWORD)v13 != (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 && *(_DWORD *)(a1 + 180) )
    {
      v15 = 0;
      do
      {
        v16 = 208LL * v15;
        v17 = *(unsigned int *)(v16 + a1 + 368);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(unsigned int *)(*(_QWORD *)(v16 + a1 + 392) + 24 * v17 + 16),
          1LL,
          v16 + a1 + 384);
        PopFxUpdateComponentAccountingEnhanced(
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(v16 + a1 + 200),
          (unsigned int)v17,
          0LL);
        ++v15;
      }
      while ( v15 < *(_DWORD *)(a1 + 180) );
      v7 = v28;
      v12 = v27;
      v6 = v29;
    }
    PopPepUpdateIdleStateRefCount(v14, v12, 1LL, a1 + 184);
    result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v5, 0LL);
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    v18 = *(_QWORD *)(a1 + 32);
    v26 = 0;
    v23 = v5;
    v24 = v7;
    v25 = v6 == 1;
    v22 = *(_QWORD *)(v18 + 72);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v18 + 64) + 96LL))(5LL, &v22);
  }
  if ( v7 )
  {
    if ( *(_DWORD *)(a1 + 168) != (_DWORD)v5 )
    {
      if ( PopFxPerfQueryOnDevicePowerChanges && (*(_BYTE *)(a1 + 177) || *(_BYTE *)(a1 + 176) && (_DWORD)v5 == 1) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
        {
          v20 = 208LL * i;
          if ( *(_BYTE *)(v20 + a1 + 376) )
          {
            LOBYTE(a3) = 1;
            PopFxUpdateComponentPerfStateNominalChange(
              *(_QWORD *)(a1 + 32),
              *(unsigned int *)(v20 + a1 + 200),
              a3,
              (unsigned int)v5);
          }
        }
      }
      if ( *(_DWORD *)(a1 + 168) == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v21 = 208LL * v4;
          PopPepUpdateIdleStateRefCount(
            *(unsigned int *)(*(_QWORD *)(v21 + a1 + 392) + 24LL * *(unsigned int *)(v21 + a1 + 368) + 16),
            0LL,
            0LL,
            v21 + a1 + 384);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v21 + a1 + 200),
            (unsigned int)(*(_DWORD *)(v21 + a1 + 380) - 1),
            1LL);
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 180) );
      }
      PopPepUpdateIdleStateRefCount(v14, v12, 0LL, a1 + 184);
      result = PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), (unsigned int)v5, 1LL);
    }
LABEL_10:
    v11 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v11 != (_DWORD)v5 )
    {
      LOBYTE(a4) = v7;
      result = PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v11, (unsigned int)v5, a4);
      *(_DWORD *)(a1 + 168) = v5;
    }
  }
  return result;
}
