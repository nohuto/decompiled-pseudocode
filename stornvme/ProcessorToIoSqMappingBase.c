__int64 __fastcall ProcessorToIoSqMappingBase(__int64 a1, unsigned int a2, unsigned __int16 a3, int a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx

  v4 = a2;
  result = *(_QWORD *)(a1 + 288);
  v6 = *(_QWORD *)(result + 24LL * a3 + 16);
  if ( v6 )
  {
    if ( !a4 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192)
                     + 8LL
                     * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 184), 1u)
                      % *(_DWORD *)(v6 + 180)));
      result = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(result + 72 * v4 + 56) = v7;
LABEL_8:
      ++*(_WORD *)(v7 + 52);
      return result;
    }
    if ( a4 == 1 && *(_QWORD *)(v6 + 224) && *(_DWORD *)(v6 + 212) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 224)
                     + 8LL
                     * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 216), 1u)
                      % *(_DWORD *)(v6 + 212)));
      result = *(_QWORD *)(a1 + 272);
      *(_QWORD *)(result + 72 * v4 + 64) = v7;
      goto LABEL_8;
    }
  }
  return result;
}
