/*
 * XREFs of PopPepDeviceDState @ 0x1403A0370
 * Callers:
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     PoFxReportDevicePoweredOn @ 0x14039FDD0 (PoFxReportDevicePoweredOn.c)
 *     PopIrpWorker @ 0x14039FFC0 (PopIrpWorker.c)
 * Callees:
 *     PopFxUpdateDeviceAccountingEnhanced @ 0x14038CBA4 (PopFxUpdateDeviceAccountingEnhanced.c)
 *     PopPlNotifyDeviceDState @ 0x1403A05EC (PopPlNotifyDeviceDState.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 *     PopFxUpdateComponentAccountingEnhanced @ 0x1403A0934 (PopFxUpdateComponentAccountingEnhanced.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A09B4 (PopPepUpdateIdleStateRefCount.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x14056D6F0 (PopFxUpdateComponentPerfStateNominalChange.c)
 */

void __fastcall PopPepDeviceDState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  int v6; // ebx
  char v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // rcx
  unsigned int v13; // r13d
  int v14; // eax
  bool v15; // cl
  __int64 v16; // rbx
  unsigned int v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  int v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+2Ch] [rbp-3Ch]
  __int16 v26; // [rsp+2Dh] [rbp-3Bh]
  char v27; // [rsp+2Fh] [rbp-39h]
  unsigned int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (_BYTE)a3 )
  {
    if ( a2 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 132), 0xFFFFFFFF) == 1 )
    {
      LOBYTE(a3) = 1;
      PopPepUpdateConstraints(a1, 4LL, a3);
    }
  }
  else
  {
    if ( a2 > 1 )
    {
      _InterlockedExchange((volatile __int32 *)(a1 + 132), 2);
      PopPepUpdateConstraints(a1, 4LL, 0LL);
      if ( (unsigned int)(v6 - 1) <= 1 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 132));
    }
    v9 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v9 != (_DWORD)v5 )
      PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v9, (unsigned int)v5, 0LL);
  }
  if ( !*(_BYTE *)(a1 + 124) && !*(_BYTE *)(a1 + 384) )
    goto LABEL_7;
  v11 = 0;
  if ( (_DWORD)v5 != 4 )
    v11 = *(_DWORD *)(a1 + 4 * v5 + 140);
  v12 = *(int *)(a1 + 168);
  v28 = v11;
  v13 = 0;
  if ( (_DWORD)v12 != 4 )
    v13 = *(_DWORD *)(a1 + 4 * v12 + 140);
  if ( !v7 && (_DWORD)v12 != (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 1 )
    {
      v17 = 0;
      if ( *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v18 = 200LL * v17;
          v19 = *(unsigned int *)(v18 + a1 + 360);
          PopPepUpdateIdleStateRefCount(0LL, *(unsigned int *)(*(_QWORD *)(v18 + a1 + 376) + 24 * v19 + 16), 1LL);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v18 + a1 + 192),
            (unsigned int)v19,
            0LL);
          ++v17;
        }
        while ( v17 < *(_DWORD *)(a1 + 180) );
        v6 = v29;
        v4 = 0;
      }
      v11 = v28;
    }
    PopPepUpdateIdleStateRefCount(v13, v11, 1LL);
    PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v5, 0);
  }
  if ( *(_BYTE *)(a1 + 124) )
  {
    v20 = *(_QWORD *)(a1 + 32);
    v27 = 0;
    v24 = v5;
    v25 = v7;
    v26 = v6 == 1;
    v23 = *(_QWORD *)(v20 + 72);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v20 + 64) + 96LL))(5LL, &v23);
  }
  if ( v7 )
  {
    v14 = *(_DWORD *)(a1 + 168);
    if ( v14 != (_DWORD)v5 )
    {
      v15 = 0;
      if ( PopFxPerfQueryOnDevicePowerChanges )
      {
        if ( *(_BYTE *)(a1 + 177) )
          goto LABEL_41;
        if ( *(_BYTE *)(a1 + 176) )
          v15 = (_DWORD)v5 == 1;
        if ( v15 )
        {
LABEL_41:
          v21 = 0;
          if ( *(_DWORD *)(a1 + 180) )
          {
            do
            {
              v22 = 200LL * v21;
              if ( *(_BYTE *)(v22 + a1 + 368) )
              {
                LOBYTE(a3) = 1;
                PopFxUpdateComponentPerfStateNominalChange(
                  *(_QWORD *)(a1 + 32),
                  *(unsigned int *)(v22 + a1 + 192),
                  a3,
                  (unsigned int)v5);
              }
              ++v21;
            }
            while ( v21 < *(_DWORD *)(a1 + 180) );
            v14 = *(_DWORD *)(a1 + 168);
          }
        }
      }
      if ( v14 == 1 && *(_DWORD *)(a1 + 180) )
      {
        do
        {
          v16 = 200LL * v4;
          PopPepUpdateIdleStateRefCount(
            *(unsigned int *)(*(_QWORD *)(v16 + a1 + 376) + 24LL * *(unsigned int *)(v16 + a1 + 360) + 16),
            0LL,
            0LL);
          PopFxUpdateComponentAccountingEnhanced(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v16 + a1 + 192),
            (unsigned int)(*(_DWORD *)(v16 + a1 + 372) - 1),
            1LL);
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a1 + 180) );
      }
      PopPepUpdateIdleStateRefCount(v13, v11, 0LL);
      PopFxUpdateDeviceAccountingEnhanced(*(_QWORD *)(a1 + 32), v5, 1);
    }
LABEL_7:
    if ( v7 )
    {
      v10 = *(unsigned int *)(a1 + 168);
      if ( (_DWORD)v10 != (_DWORD)v5 )
      {
        LOBYTE(a4) = v7;
        PopPlNotifyDeviceDState(*(_QWORD *)(a1 + 32), v10, (unsigned int)v5, a4);
        *(_DWORD *)(a1 + 168) = v5;
      }
    }
  }
}
