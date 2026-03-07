__int64 __fastcall MiMakeIoRangePermanentDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v6; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned int v9; // ebx
  int v10; // [rsp+48h] [rbp+10h] BYREF
  int i; // [rsp+58h] [rbp+20h] BYREF

  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x7FFFFFFF) != 0 )
  {
    v10 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v7 )
      KeYieldProcessorEx(&v10);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v7;
    *(_DWORD *)(a2 + 8) = MiMakeIoRangePermanent(*(_QWORD *)a2);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v9 )
        break;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v9;
  }
  _InterlockedDecrement(a3);
  return result;
}
