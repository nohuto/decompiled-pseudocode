__int64 __fastcall MmGetNodeChannelRanges(_QWORD *a1, SIZE_T *a2)
{
  unsigned int *v4; // rdi
  SIZE_T v5; // rbp
  _DWORD *Pool; // rax
  unsigned int v7; // ebx
  _DWORD *v8; // rsi
  __int64 *v9; // r11
  char *v10; // r10
  unsigned int v11; // r14d
  __int64 v12; // rcx
  unsigned int *v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 result; // rax

  v4 = (unsigned int *)MiReferencePageRuns((__int64)MiSystemPartition, 1u);
  v5 = 32LL * (*v4 - 1) + 48;
  Pool = MiAllocatePool(64, v5, 0x68506D4Du);
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    v9 = (__int64 *)(v4 + 4);
    *(_QWORD *)Pool = *v4;
    v10 = (char *)(Pool + 4);
    v11 = 0;
    Pool[2] = (unsigned __int16)KeNumberNodes;
    Pool[3] = MmNumberOfChannels;
    v12 = *v4;
    v13 = &v4[4 * v12 + 4];
    if ( (_DWORD)v12 )
    {
      do
      {
        v14 = *v9;
        v9 += 2;
        *((_QWORD *)v10 + 1) = v14;
        *((_QWORD *)v10 + 2) = *(v9 - 1);
        v15 = *v13;
        v13 += 2;
        *(_DWORD *)v10 = v15;
        v10 += 32;
        v16 = *(v13 - 1);
        *((_DWORD *)v10 - 7) = v16;
        ++v11;
        *((_QWORD *)v10 - 1) = *(_BYTE *)(v16 + qword_140C6B0D0 + 25408 * v15 + 23041) == 1;
      }
      while ( v11 < *v4 );
    }
  }
  else
  {
    v7 = -1073741670;
  }
  MiDereferencePageRuns((__int64)v4);
  result = v7;
  *a1 = v8;
  *a2 = v5;
  return result;
}
