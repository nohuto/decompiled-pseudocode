/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x1409AB53C
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x1409AD4BC (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     MmMapMemoryDumpMdlEx @ 0x140383670 (MmMapMemoryDumpMdlEx.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1409AC9C4 (IopLiveDumpGetCapturePagesNoLock.c)
 */

void __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // r15d
  unsigned int v9; // edi
  unsigned int v10; // ebp
  _QWORD *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _DWORD *v15; // rsi
  _DWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  _QWORD *v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  _DWORD *v24; // [rsp+B0h] [rbp+18h]
  PRTL_BITMAP_EX BitMapHeader; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v23 = 0LL;
  LODWORD(v22) = 0;
  v3 = *a2;
  v4 = v2 + 680;
  v20 = v2 + 680;
  if ( *a2 < *(_DWORD *)(v2 + 784) && v3 < *(_DWORD *)(v2 + 1008) )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v2 + 1016) + 8LL * v3);
    v6 = (__int64 *)(*(_QWORD *)(v2 + 792) + 16LL * v3);
    v21 = v5;
    BitMapHeader = (PRTL_BITMAP_EX)(v2 + 544);
    v7 = v6[1] + 48;
    v19 = v7;
    while ( 1 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 32));
      IopLiveDumpGetCapturePagesNoLock(BitMapHeader, (__int64)&v22, (__int64)&v23);
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 32));
      v8 = v22;
      if ( !(_DWORD)v22 )
        break;
      v9 = 0;
      v10 = 0;
      v24 = *(_DWORD **)(*(_QWORD *)(v4 + 72) + 8 * v23);
      v11 = v5;
      do
      {
        v12 = v9++;
        *(_QWORD *)(v7 + 8 * v12) = *v11;
        if ( v9 == 16 || v9 && v10 == v8 - 1 )
        {
          v13 = v6[1];
          *(_DWORD *)(v13 + 40) = v9 << 12;
          *(_QWORD *)v13 = 0LL;
          *(_WORD *)(v13 + 10) = 0;
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_DWORD *)(v13 + 44) = 0;
          *(_WORD *)(v13 + 8) = 8 * (((unsigned __int64)(v9 << 12) >> 12) + 6);
          v14 = v9 << 12;
          MmMapMemoryDumpMdlEx(*v6, v9, v6[1], 0);
          v15 = *(_DWORD **)(v6[1] + 24);
          v16 = v24;
          v17 = (unsigned __int64)(unsigned int)v14 >> 2;
          v18 = v24;
          while ( v17 )
          {
            *v18++ = *v15++;
            --v17;
          }
          v7 = v19;
          v24 = (_DWORD *)((char *)v16 + v14);
          v9 = 0;
        }
        ++v10;
        ++v11;
      }
      while ( v10 < v8 );
      v4 = v20;
      v5 = v21;
    }
  }
}
