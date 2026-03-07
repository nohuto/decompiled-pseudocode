__int16 *__fastcall PnpWatchdogExtractTriageInformation(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int16 **a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // r10d
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int16 *result; // rax

  v6 = *(_DWORD *)(a1 + 16);
  *a2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
            __fastfail(5u);
          v14 = *(_QWORD *)(a1 + 24);
          v9 = *(_QWORD *)(v14 + 8);
          *a3 = *(_QWORD *)(v14 + 16);
        }
        else
        {
          v15 = *(_QWORD **)(a1 + 24);
          v9 = v15[2];
          *a3 = v15[3];
          *a2 = v15[1];
        }
      }
      else
      {
        v16 = *(_QWORD **)(a1 + 24);
        *a3 = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
        v8 = v16[1];
        *a2 = *v16;
      }
    }
    else
    {
      *a3 = PnpDeviceActionThread;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      *a2 = v17;
      if ( v17 )
        v8 = *(_QWORD *)(v17 + 32);
    }
  }
  else
  {
    *a3 = *(_QWORD *)&PnpDeviceEventThread;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
    if ( v8 )
      *a2 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
  }
  if ( a5 )
    *a5 = v8;
  if ( a6 )
    *a6 = v9;
  result = &PnpEmptyUnicodeString;
  if ( *(_WORD *)(a1 + 40) )
    result = (__int16 *)(a1 + 40);
  *a4 = result;
  return result;
}
