__int64 __fastcall PspCopyAndFixupParameters(ULONG_PTR a1, void **a2, __int64 a3)
{
  unsigned int *v4; // rsi
  size_t v5; // r14
  char *v6; // rbx
  _KPROCESS *Process; // r10
  char PreviousMode; // r9
  signed __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  int v23; // eax
  unsigned __int64 *v24; // r14
  unsigned int v25; // r15d
  void **v26; // rdi
  void *v27; // rdx
  unsigned __int64 v28; // rcx
  size_t v29; // [rsp+40h] [rbp-48h]
  ULONG_PTR v30; // [rsp+90h] [rbp+8h]
  char v31; // [rsp+98h] [rbp+10h]
  unsigned __int64 v32; // [rsp+A0h] [rbp+18h] BYREF
  _KPROCESS *v33; // [rsp+A8h] [rbp+20h]

  v30 = a1;
  v32 = 0LL;
  v4 = *(unsigned int **)(a3 + 208);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v29 = v5;
  v6 = *(char **)(a3 + 216);
  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v23 = ObDuplicateObject(a1, *((void **)v4 + 2), (ULONG_PTR)Process, &v32, 0, 0, 6, PreviousMode);
    a1 = v30;
    Process = v33;
    PreviousMode = v31;
    if ( v23 >= 0 )
      *((_QWORD *)v4 + 2) = v32;
  }
  if ( a2 )
  {
    v24 = (unsigned __int64 *)(v4 + 8);
    v25 = 0;
    v26 = a2;
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 )
      {
        if ( (int)v27 < 0 )
        {
          v28 = 0LL;
          v32 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v27, (ULONG_PTR)Process, &v32, 0, 0, 6, PreviousMode);
          v28 = v32;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == (void **)(v4 + 8) )
            return result;
        }
        else
        {
          *v24 = v28;
        }
      }
      ++v24;
      ++v25;
      ++v26;
      if ( v25 >= 3 )
        break;
      a1 = v30;
      Process = v33;
      PreviousMode = v31;
    }
    v5 = v29;
  }
  v9 = v6 - (char *)v4;
  memmove(v6, v4, v5);
  v10 = *((_QWORD *)v6 + 8);
  if ( v10 )
    *((_QWORD *)v6 + 8) = v9 + v10;
  v11 = *((_QWORD *)v6 + 11);
  if ( v11 )
    *((_QWORD *)v6 + 11) = v9 + v11;
  v12 = *((_QWORD *)v6 + 13);
  if ( v12 )
    *((_QWORD *)v6 + 13) = v9 + v12;
  v13 = *((_QWORD *)v6 + 15);
  if ( v13 )
    *((_QWORD *)v6 + 15) = v9 + v13;
  v14 = *((_QWORD *)v6 + 23);
  if ( v14 )
    *((_QWORD *)v6 + 23) = v9 + v14;
  v15 = *((_QWORD *)v6 + 25);
  if ( v15 )
    *((_QWORD *)v6 + 25) = v9 + v15;
  v16 = *((_QWORD *)v6 + 27);
  if ( v16 )
    *((_QWORD *)v6 + 27) = v9 + v16;
  v17 = *((_QWORD *)v6 + 29);
  if ( v17 )
    *((_QWORD *)v6 + 29) = v9 + v17;
  v18 = *((_QWORD *)v6 + 131);
  if ( v18 )
    *((_QWORD *)v6 + 131) = v9 + v18;
  v19 = *((_QWORD *)v6 + 133);
  if ( v19 )
    *((_QWORD *)v6 + 133) = v9 + v19;
  v20 = *((_QWORD *)v6 + 134);
  if ( v20 )
    *((_QWORD *)v6 + 134) = v9 + v20;
  v21 = *((_QWORD *)v6 + 16);
  if ( v21 )
    *((_QWORD *)v6 + 16) = v9 + v21;
  *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[24] + 32) = v6;
  return 0LL;
}
