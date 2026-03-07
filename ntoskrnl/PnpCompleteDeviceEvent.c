void __fastcall PnpCompleteDeviceEvent(PVOID P, int a2)
{
  __int32 i; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD *v7; // rax
  void (__fastcall *v8)(_QWORD); // rax
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -1000000LL;
  for ( i = _InterlockedExchange((volatile __int32 *)P + 17, 1); i; i = _InterlockedExchange(
                                                                          (volatile __int32 *)P + 17,
                                                                          1) )
    KeDelayExecutionThread(0, 0, &Interval);
  v5 = *((_QWORD *)P + 10);
  if ( v5 )
  {
    while ( _InterlockedExchange((volatile __int32 *)(v5 + 68), 1) )
    {
      KeDelayExecutionThread(0, 0, &Interval);
      v5 = *((_QWORD *)P + 10);
    }
  }
  if ( *((_BYTE *)P + 72) || (v6 = *((_QWORD *)P + 10)) != 0 && *(_BYTE *)(v6 + 72) )
  {
    v11 = (void *)*((_QWORD *)P + 6);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)P + 17);
    if ( *((_QWORD *)P + 3) )
    {
      *v7 = a2;
      KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
    }
    else if ( v7 && *((_DWORD *)P + 32) == 1 )
    {
      *v7 = a2;
    }
    v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)P + 4);
    if ( v8 )
      v8(*((_QWORD *)P + 5));
  }
  v9 = (void *)*((_QWORD *)P + 19);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x56706E50u);
  v10 = *((_QWORD *)P + 10);
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 64), 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(*((PVOID *)P + 10), 0x4B706E50u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
}
