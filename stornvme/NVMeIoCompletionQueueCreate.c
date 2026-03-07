__int64 __fastcall NVMeIoCompletionQueueCreate(__int64 a1, __int64 a2, char a3)
{
  _WORD *v3; // rdi
  char v4; // bl
  __int64 v6; // r14
  _BYTE *v7; // r13
  char v8; // r15
  unsigned __int16 v9; // r12
  __int64 v10; // r9
  _BYTE *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r9
  char v17; // cl
  __int64 result; // rax
  __int64 SrbExtension; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r9
  _BYTE *v23; // [rsp+90h] [rbp+48h]
  void *v25; // [rsp+A8h] [rbp+60h]

  v3 = (_WORD *)(a1 + 338);
  v4 = a3;
  v23 = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 136) & 8) == 0 || (v8 = 1, *v3 >= *(_WORD *)(a1 + 332)) )
    v8 = 0;
  v9 = 1;
  if ( !*v3 )
  {
LABEL_29:
    if ( v8 && v6 )
      ProcessMultipleCommands(a1, v6);
    return 0LL;
  }
  while ( 1 )
  {
    if ( !v4 )
    {
      LocalCommandReuse(a1, a1 + 944);
      v11 = *(_BYTE **)(a1 + 1040);
      v23 = (_BYTE *)(a1 + 944);
      v4 = a3;
      v25 = v11;
      goto LABEL_10;
    }
    StorPortExtendedFunction(0LL, a1, 128LL, 1701672526LL);
    if ( !v23 )
      goto LABEL_35;
    memset(v23, 0, 0x80uLL);
    NVMeAllocateDmaBuffer(a1, 0x2000u);
    if ( !v25 )
      break;
    memset(v25, 0, 0x10A0uLL);
    v23[11] = 0;
    *((_DWORD *)v23 + 5) = 251658240;
    *((_QWORD *)v23 + 12) = v25;
    *((_QWORD *)v23 + 8) = v25;
    *((_QWORD *)v23 + 13) = 0LL;
    *v23 = 1;
    *((_QWORD *)v25 + 529) = v23;
    v11 = v25;
LABEL_10:
    v11[4253] |= 1u;
    *((_BYTE *)v25 + 4253) &= ~2u;
    *((_WORD *)v25 + 2122) = 0;
    v12 = *(_QWORD *)(a1 + 880);
    v13 = 392LL * v9;
    *((_BYTE *)v25 + 4096) = 5;
    *((_QWORD *)v25 + 515) = *(_QWORD *)(*(_QWORD *)(a1 + 880) + v13 - 384);
    *((_WORD *)v25 + 2068) = v9;
    *((_WORD *)v25 + 2069) = *(_WORD *)(a1 + 334) - 1;
    v14 = *((_DWORD *)v25 + 1035) | 1;
    *((_DWORD *)v25 + 1035) = v14;
    if ( *(_BYTE *)(a1 + 20) || *(_BYTE *)(v13 + v12 - 144) )
      v15 = v14 & 0xFFFFFFFD;
    else
      v15 = v14 | 2;
    *((_DWORD *)v25 + 1035) = v15;
    *((_WORD *)v25 + 2071) = *(_WORD *)(*(_QWORD *)(a1 + 880) + v13 - 216);
    if ( (v4 || v8) && (*((_QWORD *)v25 + 528) = NVMeIoCompletionQueueCreateCompletion, v8) )
    {
      if ( v7 )
        *((_QWORD *)v7 + 5) = v23 + 8;
      else
        v6 = (__int64)(v23 + 8);
      v7 = v23 + 8;
    }
    else
    {
      ProcessCommand(a1, (__int64)(v23 + 8));
      if ( v4 )
      {
        if ( *(_WORD *)(a1 + 472) == *(_WORD *)(a1 + 332) )
        {
          StorPortExtendedFunction(81LL, a1, 1000LL, v16);
          _InterlockedAdd((volatile signed __int32 *)(a1 + 932), 1u);
        }
      }
      else
      {
        WaitForCommandCompleteWithCustomTimeout(a1);
        v17 = v23[11];
        if ( v17 != 1 )
        {
          result = 3238002689LL;
          if ( v17 == 5 )
            return 3238002700LL;
          return result;
        }
      }
    }
    if ( ++v9 > *v3 )
      goto LABEL_29;
  }
  if ( v23 )
    StorPortExtendedFunction(1LL, a1, v23, v10);
LABEL_35:
  if ( v6 )
  {
    do
    {
      SrbExtension = GetSrbExtension(v6);
      v20 = *(_QWORD *)(v6 + 40);
      v21 = *(_QWORD *)(SrbExtension + 4232);
      NVMeFreeDmaBuffer(a1, 0x2000LL, (__int64 *)(v6 + 56), *(_QWORD *)(v21 + 104));
      StorPortExtendedFunction(1LL, a1, v21, v22);
      v6 = v20;
    }
    while ( v20 );
  }
  return 3238002689LL;
}
