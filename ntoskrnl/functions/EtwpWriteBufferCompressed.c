__int64 __fastcall EtwpWriteBufferCompressed(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  ULONG v4; // eax
  int v6; // r10d
  __int64 v7; // r9
  UCHAR *v8; // r9
  ULONG v9; // r10d
  int v10; // r8d
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebp
  ULONG v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  int v17; // ecx
  ULONG v18; // ecx
  ULONG Length; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  __int64 v24; // r9
  int v25; // edx
  int v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  int v29; // eax
  char *v30; // rcx
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-30h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  ULONG v34; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 52);
  v4 = *(_DWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 40) + 72LL;
  v34 = 0;
  v8 = (UCHAR *)(v2 + v7);
  v9 = v6 - v2 - 72;
  v10 = *((_DWORD *)a2 + 12);
  if ( v9 >= v4 )
    v9 = v4;
  ByteOffset = *(PLARGE_INTEGER *)(a1 + 32);
  IoStatusBlock = 0LL;
  v11 = RtlCompressBuffer(3u, (PUCHAR)a2 + 72, v10 - 72, v8, v9, 0, &v34, ByteOffset);
  v12 = v11;
  if ( v11 == -1073741789 )
  {
    v13 = *((_DWORD *)a2 + 12);
    memmove((void *)(*(_QWORD *)(a1 + 40) + *(unsigned int *)(a1 + 52)), a2, v13);
  }
  else
  {
    if ( v11 < 0 )
    {
      ++*(_DWORD *)(a1 + 24);
      return (unsigned int)v12;
    }
    *((_WORD *)a2 + 26) |= 0x40u;
    v14 = *(unsigned int *)(a1 + 52);
    v15 = *(_QWORD *)(a1 + 40);
    *(_OWORD *)(v14 + v15) = *a2;
    *(_OWORD *)(v14 + v15 + 16) = a2[1];
    *(_OWORD *)(v14 + v15 + 32) = a2[2];
    *(_OWORD *)(v14 + v15 + 48) = a2[3];
    *(_QWORD *)(v14 + v15 + 64) = *((_QWORD *)a2 + 8);
    v13 = v34 + 72;
  }
  v16 = 1;
  *(_DWORD *)(*(unsigned int *)(a1 + 52) + *(_QWORD *)(a1 + 40)) = v13;
  v17 = *(_DWORD *)(a1 + 52);
  ++*(_DWORD *)(a1 + 56);
  v18 = v13 + v17;
  Length = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 52) = v18;
  if ( v18 >= Length )
  {
    v12 = ZwWriteFile(
            *(HANDLE *)a1,
            0LL,
            0LL,
            0LL,
            &IoStatusBlock,
            *(PVOID *)(a1 + 40),
            Length,
            (PLARGE_INTEGER)(a1 + 8),
            0LL);
    if ( v12 >= 0 )
    {
      v24 = *(unsigned int *)(a1 + 16);
      v25 = *(_DWORD *)(a1 + 52);
      *(_QWORD *)(a1 + 8) += v24;
      v26 = *(_DWORD *)(a1 + 56);
      v27 = v25 - v24;
      v28 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 52) = v27;
      *(_DWORD *)(a1 + 60) = v27;
      if ( v27 )
      {
        v29 = v28 - 1 + v26;
        *(_DWORD *)(a1 + 56) = 1;
        v30 = *(char **)(a1 + 40);
        *(_DWORD *)(a1 + 20) = v29;
        memmove(v30, &v30[v24], v27);
      }
      else
      {
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 20) = v28 + v26;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 60);
      v21 = *(_DWORD *)(a1 + 56);
      v22 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 52) = v20;
      if ( v20 )
      {
        v23 = v22 + v21 - 1;
      }
      else
      {
        v16 = 0;
        v23 = v22 + v21;
      }
      *(_DWORD *)(a1 + 24) = v23;
      *(_DWORD *)(a1 + 56) = v16;
    }
  }
  return (unsigned int)v12;
}
