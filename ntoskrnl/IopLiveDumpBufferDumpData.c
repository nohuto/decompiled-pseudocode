__int64 __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  _QWORD *v11; // r12
  __int64 v12; // rdx
  _DWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  _DWORD *v17; // rdi
  unsigned __int64 v18; // rcx
  _DWORD *v19; // rsi
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  _QWORD *v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v25; // [rsp+B0h] [rbp+18h]
  _DWORD *v26; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v24 = 0LL;
  v23 = 0;
  result = *a2;
  v4 = v2 + 680;
  v21 = v2 + 680;
  if ( (unsigned int)result < *(_DWORD *)(v2 + 888) && (unsigned int)result < *(_DWORD *)(v2 + 1112) )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v2 + 1120) + 8LL * (unsigned int)result);
    v6 = *(_QWORD *)(v2 + 896) + 16LL * (unsigned int)result;
    v22 = v5;
    v25 = v2 + 544;
    v7 = *(_QWORD *)(v6 + 8) + 48LL;
    v20 = v7;
    while ( 1 )
    {
      v8 = BufferChunkSizeInPages;
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 32));
      IopLiveDumpGetCapturePagesNoLock(v25, v4, (_DWORD)v5, v8, (__int64)&v23, (__int64)&v24);
      result = KxReleaseSpinLock((volatile signed __int64 *)(v4 + 32));
      v9 = v23;
      if ( !v23 )
        break;
      v10 = 0;
      v11 = v5;
      v26 = *(_DWORD **)(*(_QWORD *)(v4 + 72) + 8 * v24);
      LODWORD(v12) = 0;
      v13 = v26;
      do
      {
        v14 = (unsigned int)v12;
        v12 = (unsigned int)(v12 + 1);
        *(_QWORD *)(v7 + 8 * v14) = *v11;
        if ( (_DWORD)v12 == 16 || (_DWORD)v12 && v10 == v9 - 1 )
        {
          v15 = *(_QWORD *)(v6 + 8);
          v16 = (unsigned int)((_DWORD)v12 << 12);
          *(_QWORD *)v15 = 0LL;
          *(_WORD *)(v15 + 10) = 0;
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_QWORD *)(v15 + 40) = (unsigned int)v16;
          *(_WORD *)(v15 + 8) = 8 * ((v16 >> 12) + 6);
          MmMapMemoryDumpMdlEx(*(_QWORD *)v6, v12, *(_QWORD *)(v6 + 8), 0);
          v17 = v13;
          v13 = (_DWORD *)((char *)v13 + v16);
          v18 = (unsigned __int64)(unsigned int)v16 >> 2;
          v19 = *(_DWORD **)(*(_QWORD *)(v6 + 8) + 24LL);
          while ( v18 )
          {
            *v17++ = *v19++;
            --v18;
          }
          v7 = v20;
          LODWORD(v12) = 0;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < v9 );
      v4 = v21;
      v5 = v22;
    }
  }
  return result;
}
