__int64 __fastcall RtlpCopyKernelCetChunk(char a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *(_DWORD *)(a3 + 28) < 0x18u || *(_DWORD *)(a5 + 28) < 0x18u )
    return 2147483653LL;
  if ( a1 )
  {
    v6 = *(int *)(a5 + 24);
    v7 = *(int *)(a3 + 24);
    *(_OWORD *)(v7 + a2) = *(_OWORD *)(v6 + a4);
    *(_QWORD *)(v7 + a2 + 16) = *(_QWORD *)(v6 + a4 + 16);
  }
  return 0LL;
}
