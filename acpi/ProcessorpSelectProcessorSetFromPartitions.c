__int64 __fastcall ProcessorpSelectProcessorSetFromPartitions(__int16 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 result; // rax
  USHORT v8; // cx
  __int64 v9; // r14
  _QWORD *v10; // rax
  int NextAffinity; // ecx
  __int16 v12; // ax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( a1 != 6 )
    return 3221225485LL;
  ProcessorpSelectGroup(a2, 0, a4, &v13);
  v6 = v13;
  if ( *(_WORD *)(v13 + 32) )
    return 3221225485LL;
  if ( !ProcessorpDefaultIntPartitionArtiber )
  {
    result = IntPartArbInit();
    if ( (_DWORD)result == 259 )
    {
      if ( *(_BYTE *)a4 )
        return 3221226021LL;
      v8 = *(_WORD *)(v6 + 32);
      *(_OWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 8) = v8;
      *(_QWORD *)a3 = KeQueryGroupAffinity(v8);
      result = 0LL;
      *(_BYTE *)a4 = 1;
      *(_QWORD *)(a4 + 24) = v6;
      return result;
    }
    if ( (int)result < 0 )
      return result;
  }
  if ( !*(_BYTE *)a4 )
  {
    v9 = ProcessorpDefaultIntPartitionArtiber;
    v10 = (_QWORD *)IntPartAllocateAndZeroMemory(*(unsigned __int8 *)(*(_QWORD *)ProcessorpDefaultIntPartitionArtiber
                                                                    + 2LL) + 20LL);
    if ( v10 )
      *v10 = v9;
    *(_QWORD *)(a4 + 32) = v10;
  }
  NextAffinity = IntpArbGetNextAffinity(*(_QWORD *)(a4 + 32), &v14);
  if ( !*(_BYTE *)a4 )
  {
    *(_BYTE *)a4 = 1;
    *(_QWORD *)(a4 + 24) = v6;
  }
  if ( NextAffinity >= 0 )
  {
    v12 = *(_WORD *)(v6 + 32);
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v12;
    *(_QWORD *)a3 = v14;
  }
  return (unsigned int)NextAffinity;
}
