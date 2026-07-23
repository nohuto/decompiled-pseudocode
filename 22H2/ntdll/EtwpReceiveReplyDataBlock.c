/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x1800016FC
 * Callers:
 *     EtwSendNotification @ 0x180051690 (EtwSendNotification.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A0D70 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        char *ReturnLength,
        ULONG OutputBufferLength,
        unsigned int *a7,
        _DWORD *a8,
        int OutputBuffer)
{
  char *v9; // r13
  unsigned int v10; // r14d
  unsigned __int32 v11; // ebx
  char *v12; // rdi
  __int64 v13; // r15
  char *Heap; // r12
  _DWORD *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // rbx
  NTSTATUS v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  ULONG v22; // eax
  _DWORD *v23; // r8
  __int64 v24; // r9
  _DWORD *v25; // rax
  int v26; // [rsp+30h] [rbp-28h]
  ULONG v27; // [rsp+34h] [rbp-24h] BYREF
  _DWORD InputBuffer[2]; // [rsp+38h] [rbp-20h] BYREF
  char *v29; // [rsp+40h] [rbp-18h]
  _DWORD *v30; // [rsp+48h] [rbp-10h]
  char v31; // [rsp+A0h] [rbp+48h]

  v29 = 0LL;
  v9 = 0LL;
  v30 = 0LL;
  v10 = 0;
  v26 = 0;
  v11 = 0;
  v12 = ReturnLength;
  v13 = 0LL;
  Heap = 0LL;
  v31 = 0;
  v15 = 0LL;
  InputBuffer[0] = a1;
  v16 = a4;
  if ( OutputBuffer == 4 || OutputBuffer == 11 )
  {
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, OutputBufferLength);
    if ( !Heap )
      return 8;
    v9 = v12 + 72;
    v29 = v12;
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8LL * a4);
    if ( !v15 )
    {
      v11 = 8;
      goto LABEL_16;
    }
    v16 = a4;
  }
  if ( !v16 )
    goto LABEL_11;
  do
  {
    InputBuffer[1] = a2;
    v17 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
    v18 = NtTraceControl(EtwReceiveReplyDataBlock, InputBuffer, 8u, v12, OutputBufferLength, (PULONG)&ReturnLength);
    v19 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32) * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
        - v17;
    if ( a2 <= v19 )
    {
      v11 = 1460;
      goto LABEL_16;
    }
    a2 -= v19;
    v20 = ((_DWORD)ReturnLength + 7) & 0xFFFFFFF8;
    LODWORD(ReturnLength) = v20;
    if ( !v18 )
    {
      v11 = 0;
LABEL_7:
      if ( !a3 )
      {
        if ( v29 )
        {
          if ( *((_DWORD *)v12 + 1) >= 0xF8u )
          {
            if ( *((_DWORD *)v12 + 19) == 1 )
            {
              v15[2 * v13] = *((_DWORD *)v12 + 8);
              LOWORD(v15[2 * v13 + 1]) = *((_WORD *)v12 + 40);
              HIWORD(v15[2 * v13 + 1]) = *((_WORD *)v12 + 118);
              v20 = (unsigned int)ReturnLength;
            }
            v13 = (unsigned int)(v13 + 1);
            if ( (_DWORD)v13 == 1 )
            {
              v12 = Heap;
            }
            else if ( *((_DWORD *)v12 + 19) != 1 )
            {
              v23 = v9 + 104;
              v24 = 4LL;
              do
              {
                *v23 += *(_DWORD *)((char *)v23 + v12 + 72 - v9);
                ++v23;
                --v24;
              }
              while ( v24 );
            }
          }
        }
        else
        {
          v25 = v12 + 8;
          *((_DWORD *)v12 + 2) = v20;
          v20 = (unsigned int)ReturnLength;
          v12 += (unsigned int)ReturnLength;
          v30 = v25;
          OutputBufferLength -= (unsigned int)ReturnLength;
        }
      }
      v26 += v20;
      goto LABEL_9;
    }
    v22 = RtlNtStatusToDosError(v18);
    v11 = v22;
    if ( !v22 )
    {
      v20 = (unsigned int)ReturnLength;
      goto LABEL_7;
    }
    if ( v22 != 122 )
      break;
    v26 += (int)ReturnLength;
    v31 = 1;
LABEL_9:
    ++v10;
  }
  while ( v10 < a4 );
  if ( (_DWORD)v13 )
  {
    if ( *((_DWORD *)v9 + 1) == 1 )
    {
      v11 = NtTraceControl(EtwGetPrivateSessionTraceHandle, v15, 8 * v13, &OutputBuffer, 2u, &v27);
      if ( !v11 && v27 == 2 )
        *((_WORD *)v9 + 4) = OutputBuffer;
    }
  }
LABEL_11:
  *a7 = v10;
  *a8 = v26;
  if ( v30 )
    *v30 = 0;
  if ( !v11 && v31 )
    v11 = 122;
LABEL_16:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  return v11;
}
