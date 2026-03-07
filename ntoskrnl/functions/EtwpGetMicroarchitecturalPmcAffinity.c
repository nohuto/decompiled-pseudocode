_DWORD *__fastcall EtwpGetMicroarchitecturalPmcAffinity(__int64 a1, unsigned __int16 *a2)
{
  _DWORD *result; // rax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  _DWORD v13[4]; // [rsp+20h] [rbp-38h] BYREF

  result = (_DWORD *)KeQueryActiveProcessorAffinity2((__int64)a2);
  v5 = 0;
  v6 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v7 = a1 - (_QWORD)v13;
    v8 = KiProcessorBlock;
    do
    {
      v9 = *v8;
      v13[0] = *(char *)(*v8 + 64);
      v13[1] = *(unsigned __int8 *)(v9 + 67);
      v10 = *(unsigned __int8 *)(v9 + 66);
      v11 = 0;
      v13[2] = v10;
      result = v13;
      do
      {
        v12 = *(_DWORD *)((char *)result + v7);
        if ( v12 == -1 )
          break;
        if ( v12 != *result )
        {
          result = (_DWORD *)KeRemoveProcessorAffinityEx(a2, v5);
          break;
        }
        ++v11;
        ++result;
      }
      while ( v11 < 3 );
      ++v5;
      ++v8;
    }
    while ( v5 < v6 );
  }
  return result;
}
