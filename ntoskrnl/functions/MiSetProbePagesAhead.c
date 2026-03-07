char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  unsigned __int64 CurrentThread; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  BOOL v5; // r15d
  int v6; // r12d
  __int64 v7; // rbp
  unsigned __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r8
  char v22; // cl
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(CurrentThread) = *(_DWORD *)(a1 + 72) & 0xF;
  if ( (_BYTE)CurrentThread == 1 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v26 = v3;
    CurrentThread = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v26) >> 12) & 0xFFFFFFFFFFLL;
    if ( CurrentThread > qword_140C65820 )
    {
      v5 = 0;
    }
    else
    {
      v4 = *(_QWORD *)(48 * CurrentThread - 0x21FFFFFFFFD8LL);
      LOBYTE(CurrentThread) = 1;
      v5 = (v4 & 0x40000000000000LL) != 0;
    }
    v6 = *(_DWORD *)(a1 + 96);
    if ( v6 != 3 )
    {
      v7 = 0LL;
      v26 = v3 & 0xF0F0000000000FFFuLL;
      for ( i = *(_QWORD *)(a1 + 24) + 8LL; (i & 0xFFF) != 0 && i <= *(_QWORD *)(a1 + 32); i += 8LL )
      {
        v9 = *(_QWORD *)i;
        LOBYTE(CurrentThread) = 0;
        if ( i >= 0xFFFFF6FB7DBED000uLL )
        {
          LOBYTE(CurrentThread) = -8;
          if ( i <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x600000) != 0 )
          {
            CurrentThread = (unsigned __int64)KeGetCurrentThread();
            if ( *(_BYTE *)(*(_QWORD *)(CurrentThread + 184) + 912LL) != 1
              && (v9 & 1) != 0
              && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
            {
              CurrentThread = (unsigned __int64)KeGetCurrentThread();
              v18 = *(_QWORD *)(*(_QWORD *)(CurrentThread + 184) + 1928LL);
              if ( v18 )
              {
                CurrentThread = *(_QWORD *)(v18 + 8 * ((i >> 3) & 0x1FF));
                v19 = v9 | 0x20;
                if ( (CurrentThread & 0x20) == 0 )
                  v19 = *(_QWORD *)i;
                v9 = v19;
                if ( (CurrentThread & 0x42) != 0 )
                  v9 = v19 | 0x42;
              }
            }
          }
        }
        v24 = v9;
        if ( (v9 & 0xF0F0000000000FFFuLL) != v26 )
          break;
        CurrentThread = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFFLL;
        if ( CurrentThread <= qword_140C65820
          && (v10 = 48 * CurrentThread,
              LOBYTE(CurrentThread) = 40,
              (*(_QWORD *)(v10 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0) )
        {
          if ( !v5 )
            break;
          v11 = (_QWORD *)qword_140C69508;
          v12 = v10 - 0x220000000000LL;
          if ( qword_140C69508 )
          {
            if ( ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 1 )
            {
              v20 = 0xAAAAAAAAAAAAAAABuLL * (v10 >> 4);
              if ( qword_140C69508 )
              {
                do
                {
                  v21 = v11[3];
                  if ( v20 >= v21 )
                  {
                    LOBYTE(CurrentThread) = v20 - v21;
                    if ( v20 - v21 < v11[4] )
                      goto LABEL_23;
                    v11 = (_QWORD *)v11[1];
                  }
                  else
                  {
                    v11 = (_QWORD *)*v11;
                  }
                }
                while ( v11 );
              }
            }
          }
          LOBYTE(CurrentThread) = v12;
          v13 = *(_QWORD *)(v12 + 40);
          v14 = (__int64 *)(v12 + 40);
          if ( v13 >= 0 )
          {
            if ( (v13 & 0x10000000000LL) != 0 )
            {
              LODWORD(v24) = 0;
              v25 = 0;
              LODWORD(CurrentThread) = MiGetPfnPageSizeIndexUnsynchronized(v12, &v24, &v25);
              if ( (_DWORD)CurrentThread == 3 || (_DWORD)v24 != 6 )
                break;
            }
            else
            {
              v15 = (__int64)(*(_QWORD *)(v12 + 8) << 25) >> 16;
              LOBYTE(CurrentThread) = 0;
              if ( v15 >= 0xFFFFF68000000000uLL )
              {
                LOBYTE(CurrentThread) = -1;
                if ( v15 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  LOBYTE(CurrentThread) = -2;
                  if ( (v13 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
                  {
                    v22 = *(_BYTE *)(v12 + 34);
                    if ( ((v22 & 0x20) == 0
                       || (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
                       || !*(_WORD *)(v12 + 32))
                      && (v22 & 8) == 0 )
                    {
                      CurrentThread = (*(_QWORD *)v12 >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
                      if ( CurrentThread != 0xFFFF800000000030uLL )
                        break;
                    }
                  }
                }
              }
            }
          }
          if ( !v6 )
          {
            v16 = *v14;
            LOBYTE(CurrentThread) = ((unsigned __int64)*v14 >> 60) & 7;
            if ( (_BYTE)CurrentThread != 1 && (v16 & 0x10000000000LL) == 0 )
            {
              CurrentThread = *(_QWORD *)(v12 + 8);
              if ( (CurrentThread & 0x8000000000000000uLL) == 0LL )
              {
                if ( CurrentThread )
                  break;
              }
            }
            if ( v16 < 0 )
            {
              LODWORD(CurrentThread) = *(_DWORD *)(a1 + 72);
              if ( (CurrentThread & 0x10) != 0 )
                break;
            }
          }
        }
        else if ( v5 )
        {
          break;
        }
        ++v7;
      }
LABEL_23:
      if ( v7 )
      {
        v17 = (__int64)(*(_QWORD *)(a1 + 24) << 25) >> 16;
        *(_QWORD *)(a1 + 152) = v17;
        *(_QWORD *)(a1 + 168) = -1LL;
        CurrentThread = v17 + (v7 << 12) + 4095;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 160) = CurrentThread;
      }
    }
  }
  return CurrentThread;
}
