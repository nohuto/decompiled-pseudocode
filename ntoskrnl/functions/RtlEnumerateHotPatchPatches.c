__int64 __fastcall RtlEnumerateHotPatchPatches(
        _DWORD *a1,
        unsigned int *a2,
        __int64 (__fastcall *a3)(__int64, unsigned int *, _QWORD, __int64),
        __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int *v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // ebp
  int v14; // ebx

  result = RtlGetHotPatchSize(a1);
  v10 = *v9;
  v11 = (unsigned int)result;
  while ( v10 )
  {
    v12 = v10 >> 31;
    v13 = v10 & 0xFC000;
    ++a2;
    v14 = v10 & 0xFFF;
    if ( v14 )
    {
      do
      {
        LOBYTE(v8) = v12;
        result = a3(a4, a2, v13, v8);
        if ( (_BYTE)result )
          return result;
        a2 += v11;
      }
      while ( --v14 );
    }
    v10 = *a2;
  }
  return result;
}
