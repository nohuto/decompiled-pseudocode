__int64 __fastcall TUNNEL_EvtIrpPreprocessQueryDevRelations(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned int v5; // ebx
  int v6; // esi
  unsigned int v7; // r12d
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int *v11; // rdi
  _DWORD *Pool2; // rsi
  unsigned int i; // r14d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A198);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 2744),
    0LL);
  v5 = 0;
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 44) & 0x20) != 0 && *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) == 2 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 112))(
           WdfDriverGlobals,
           *(_QWORD *)(v4 + 2736));
    v8 = 0;
    if ( v7 )
    {
      do
      {
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
               WdfDriverGlobals,
               *(_QWORD *)(v4 + 2736),
               v8);
        if ( !v9 )
          break;
        v10 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v9,
                            0LL)
                        + 32);
        if ( v10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *(_QWORD *)(v4 + 2520),
              4u,
              3u,
              0x24u,
              (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
              v10);
          ++v6;
        }
        ++v8;
      }
      while ( v8 < v7 );
      if ( v6 )
      {
        v11 = *(unsigned int **)(a2 + 56);
        if ( v11 )
          v6 += *v11;
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 8LL * (unsigned int)(v6 - 1) + 16, 1748191317LL);
        if ( Pool2 )
        {
          if ( v11 && *v11 )
            memmove(Pool2, v11, 8LL * (*v11 - 1) + 16);
          for ( i = 0; i < v7; ++i )
          {
            v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 144))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v4 + 2736),
                    i);
            v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                    WdfDriverGlobals,
                    v14,
                    0LL);
            v16 = *(_QWORD *)(v15 + 32);
            if ( v16 )
            {
              *(_QWORD *)&Pool2[2 * (*Pool2)++ + 2] = v16;
              ObfReferenceObject(*(PVOID *)(v15 + 32));
            }
          }
          *(_DWORD *)(a2 + 48) = 0;
          *(_QWORD *)(a2 + 56) = Pool2;
          if ( v11 )
            goto LABEL_26;
        }
        else if ( v11 )
        {
          if ( *v11 )
          {
            do
              ObfDereferenceObject(*(PVOID *)&v11[2 * v5++ + 2]);
            while ( v5 < *v11 );
          }
LABEL_26:
          ExFreePoolWithTag(v11, 0);
        }
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 2744));
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 272))(
           WdfDriverGlobals,
           a1,
           a2);
}
