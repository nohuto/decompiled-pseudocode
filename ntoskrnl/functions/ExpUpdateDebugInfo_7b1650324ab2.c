void __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  char v10; // si
  int v11; // eax
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  unsigned int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  volatile signed __int32 *v21; // rdx
  volatile signed __int32 *v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  volatile signed __int32 *v25; // r14
  ULONG v26; // edi
  ULONG v27; // edi
  ULONG v28; // eax

  v8 = ExReferenceHandleDebugInfo(a1);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    if ( (v8[2] & 3) != 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v8 + 4));
      v10 = 1;
    }
    v11 = *((_DWORD *)v9 + 2);
    if ( (v11 & 1) != 0 )
    {
      *((_DWORD *)v9 + 2) = v11 & 0x3FFFFFFE | 0x80000000;
      *((_DWORD *)v9 + 18) = 0;
      memset((void *)(v9 + 20), 0, 160LL * *((unsigned int *)v9 + 1) + 80);
    }
    v12 = *((_DWORD *)v9 + 2);
    if ( (v12 & 2) != 0 && a4 == 2 )
    {
      v13 = *((_DWORD *)v9 + 18);
      v14 = v13;
      if ( (v12 & 0x40000000) != 0 )
        v14 = *((_DWORD *)v9 + 1);
      v15 = 1;
      if ( v14 )
      {
        v16 = *((_DWORD *)v9 + 1);
        while ( 1 )
        {
          v17 = v15 % v16;
          v18 = 40 * v17;
          if ( v9[40 * (unsigned int)v17 + 26] == 1 && *(_QWORD *)&v9[v18 + 24] == a3 )
            break;
          if ( ++v15 > v14 )
            goto LABEL_25;
        }
        *((_DWORD *)v9 + 18) = v13 - 1;
        v19 = (v13 - 1) % v16;
        if ( (_DWORD)v19 )
        {
          v20 = 40 * v19;
          v21 = &v9[v18];
          v22 = &v9[v20];
          *((_OWORD *)v21 + 5) = *((_OWORD *)v22 + 5);
          *((_OWORD *)v21 + 6) = *((_OWORD *)v22 + 6);
          *((_OWORD *)v21 + 7) = *((_OWORD *)v22 + 7);
          *((_OWORD *)v21 + 8) = *((_OWORD *)v22 + 8);
          *((_OWORD *)v21 + 9) = *((_OWORD *)v22 + 9);
          *((_OWORD *)v21 + 10) = *((_OWORD *)v22 + 10);
          *((_OWORD *)v21 + 11) = *((_OWORD *)v22 + 11);
          *((_OWORD *)v21 + 12) = *((_OWORD *)v22 + 12);
          *((_OWORD *)v21 + 13) = *((_OWORD *)v22 + 13);
          *((_OWORD *)v21 + 14) = *((_OWORD *)v22 + 14);
        }
      }
    }
    else
    {
      v23 = (unsigned int)_InterlockedIncrement(v9 + 18) % *((_DWORD *)v9 + 1);
      if ( !v23 )
      {
        v24 = *((_DWORD *)v9 + 2) | 0x40000000;
        *((_DWORD *)v9 + 2) = v24;
        if ( (v24 & 4) != 0 )
          __debugbreak();
      }
      v25 = &v9[40 * v23 + 20];
      *(_OWORD *)v25 = *(_OWORD *)(a2 + 1224);
      *((_QWORD *)v25 + 2) = a3;
      *((_DWORD *)v25 + 6) = a4;
      v26 = RtlWalkFrameChain((PVOID *)v25 + 4, 0x10u, 0x300u);
      if ( v26 <= 3 )
        v27 = 0;
      else
        v27 = v26 - 3;
      v28 = RtlWalkFrameChain((PVOID *)&v25[2 * v27 + 8], 16 - v27, 1u);
      memset((void *)&v25[2 * v28 + 8 + 2 * v27], 0, 8LL * (16 - (v28 + v27)));
    }
LABEL_25:
    if ( v10 )
      ExReleaseFastMutex((PFAST_MUTEX)(v9 + 4));
    ExDereferenceHandleDebugInfo(a1, v9);
  }
}
