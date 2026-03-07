NTSTATUS __fastcall MiZeroPageThread(__int64 a1)
{
  void *v2; // r15
  unsigned int v3; // r14d
  void *v4; // r12
  int v5; // ecx
  _QWORD *v6; // rax
  __int64 v7; // r8
  int v8; // esi
  unsigned int v9; // ebx
  __int64 i; // rbp
  NTSTATUS result; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  HANDLE *v14; // rdi
  HANDLE v15; // rsi
  PVOID Object[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-88h] BYREF

  v2 = (void *)(a1 + 104);
  v3 = 1;
  v4 = (void *)(a1 + 128);
  do
  {
    v5 = 0;
    if ( KeNumberNodes )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 23168LL);
      v7 = (unsigned __int16)KeNumberNodes;
      do
      {
        if ( !*v6 && *(v6 - 42) )
        {
          *v6 = 1LL;
          ++v5;
        }
        v6 += 3176;
        --v7;
      }
      while ( v7 );
      if ( v5 )
      {
        if ( v3 )
        {
          v8 = 1;
          *(_DWORD *)(a1 + 16484) = v5 + 2 * v5 + 1;
        }
        else
        {
          v8 = 0;
        }
        v9 = 0;
        for ( i = *(_QWORD *)(a1 + 16); v9 < (unsigned __int16)KeNumberNodes; i += 25408LL )
        {
          if ( *(_QWORD *)(i + 23168) == 1LL && (int)MiCreatePerNodeZeroingConductor(a1, v9, v3) < 0 )
          {
            *(_QWORD *)(i + 23168) = 0LL;
            if ( v8 )
              v8 += 3;
          }
          ++v9;
        }
        if ( v8 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16484), -v8) == v8 )
          KeSetEvent((PRKEVENT)(a1 + 16488), 0, 0);
      }
    }
    Object[0] = v2;
    Object[1] = v4;
    v3 = 0;
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( result );
  v12 = 0;
  v13 = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    v14 = (HANDLE *)(v13 + 23168);
    do
    {
      v15 = *v14;
      if ( *v14 )
      {
        ZwWaitForSingleObject(*v14, 0, 0LL);
        ObCloseHandle(v15, 0);
      }
      result = (unsigned __int16)KeNumberNodes;
      v14 += 3176;
      ++v12;
    }
    while ( v12 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
