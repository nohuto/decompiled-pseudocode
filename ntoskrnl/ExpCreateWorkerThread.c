__int64 __fastcall ExpCreateWorkerThread(_QWORD *a1, int a2, __int64 a3, int a4)
{
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  int SystemThread; // edi
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+18h]

  Handle = 0LL;
  _m_prefetchw(a1 + 89);
  v5 = *((_DWORD *)a1 + 178);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v5 + 1) | 0x4000, v5);
  }
  while ( v6 != v5 );
  SystemThread = ExpPartitionCreateSystemThread(a1[86], a1[87], a2, a4);
  if ( SystemThread < 0 )
  {
    _m_prefetchw(a1 + 89);
    v9 = *((_DWORD *)a1 + 178);
    do
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 178, (v9 & 0x3FFF) - 1, v9);
    }
    while ( v10 != v9 );
  }
  else
  {
    Object = 0LL;
    if ( ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL) >= 0 )
    {
      KeBoostPriorityThread((__int64)Object, 8);
      ObfDereferenceObject(Object);
    }
    ZwClose(Handle);
  }
  return (unsigned int)SystemThread;
}
