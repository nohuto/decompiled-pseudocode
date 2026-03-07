__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 v4; // rdx
  __int64 *v5; // r14
  int v6; // ebp
  signed int v7; // edi
  unsigned __int64 *v8; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int32 v14; // eax
  signed __int64 i; // rcx
  signed __int64 v16; // rax
  LARGE_INTEGER *QuadPart; // rax
  _QWORD **v18; // rdi
  __int64 v19; // rbx
  __int64 *v20; // r15
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned __int16 v25; // r14
  unsigned int v26; // ebp
  _QWORD *v27; // rbx
  unsigned int *v28; // rdi
  unsigned int v29; // r15d
  unsigned __int64 v31; // rax
  __int64 v32; // r11
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  LARGE_INTEGER v38; // rcx
  char v39; // [rsp+20h] [rbp-148h]
  _BYTE v40[256]; // [rsp+30h] [rbp-138h] BYREF

  memset(v40, 0, sizeof(v40));
  if ( *((_QWORD *)a1 + 100) || *((_QWORD *)a1 + 45) )
  {
    v5 = (__int64 *)v40;
    v39 = 0;
    v6 = 0;
    if ( *((_QWORD *)a1 + 132) )
      v5 = (__int64 *)*((_QWORD *)a1 + 132);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v37 = _InterlockedExchange64((volatile __int64 *)a1 + 16, 0LL);
      if ( v37 )
      {
        *v5 = v37;
        v6 = 1;
      }
    }
    else
    {
      v7 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
      if ( v7 >= 0 )
      {
        v8 = (unsigned __int64 *)v5;
        v9 = (__int64)v7 << 6;
        do
        {
          if ( (a1[3] & 0x10000000) != 0 )
          {
            v12 = a1 + 32;
          }
          else
          {
            v10 = *((_QWORD *)a1 + 137);
            if ( v10 == EtwpHostSiloState )
              v11 = *(_QWORD *)(*(_QWORD *)(KeGetPrcb(v7) + 34472) + 320LL);
            else
              v11 = *(_QWORD *)(*(_QWORD *)(v10 + 4144) + v9);
            v12 = (_QWORD *)(v11 + 8LL * *a1);
          }
          v13 = *v12 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v13 )
            goto LABEL_23;
          if ( a2 )
          {
            v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), a1[1]);
            if ( v14 <= a1[1] )
              *(_DWORD *)(v13 + 4) = v14;
            _m_prefetchw(v12);
            for ( i = *v12; (v13 ^ i) <= 0xF; i = v16 )
            {
              v16 = _InterlockedCompareExchange64(v12, 0LL, i);
              if ( i == v16 )
                break;
            }
            QuadPart = (LARGE_INTEGER *)(i & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v13 )
            {
              _InterlockedExchangeAdd(&QuadPart[1].HighPart, -(i & 0xF));
              EtwpPrepareDirtyBuffer((__int64)a1, QuadPart);
            }
            else
            {
              if ( QuadPart )
              {
                do
                {
                  v38 = QuadPart[4];
                  if ( v38.QuadPart == v13 )
                    break;
                  QuadPart = (LARGE_INTEGER *)QuadPart[4].QuadPart;
                }
                while ( v38.QuadPart );
              }
              QuadPart[4].QuadPart = 0LL;
              v39 = 1;
            }
            *v8 = v13;
          }
          else
          {
            v31 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
            if ( !v31 )
              goto LABEL_23;
            *v8 = v31;
            *(_QWORD *)(v13 + 32) = 0LL;
          }
          ++v6;
          ++v8;
LABEL_23:
          v9 -= 64LL;
          --v7;
        }
        while ( v7 >= 0 );
      }
      EtwpLockUnlockBufferList((__int64)a1);
    }
    v18 = 0LL;
    if ( v6 > 0 )
    {
      v19 = v6;
      v20 = &v5[v6 - 1];
      do
      {
        v21 = 1LL;
        v22 = 0LL;
        if ( (unsigned __int64)v19 > 1 )
        {
          v32 = 0LL;
          do
          {
            v33 = 8 * v21;
            v34 = *(_QWORD *)(v5[v21] + 16);
            v35 = *(_QWORD *)(*(__int64 *)((char *)v5 + v32) + 16);
            v36 = v21;
            if ( v34 <= v35 )
              v36 = v22;
            ++v21;
            v22 = v36;
            if ( v34 <= v35 )
              v33 = v32;
            v32 = v33;
          }
          while ( v21 < v19 );
        }
        v4 = v5[v22];
        v23 = *(_QWORD *)(v4 + 32);
        v5[v22] = v23;
        if ( !v23 )
        {
          --v19;
          v5[v22] = *v20--;
        }
        if ( *(int *)(v4 + 12) <= 0 && (v24 = *(_DWORD *)(v4 + 4), v24 <= 0x48) && (v24 || *(_DWORD *)(v4 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer((__int64)a1, v4, 0);
        }
        else
        {
          *(_QWORD *)(v4 + 32) = v18;
          v18 = (_QWORD **)(v4 + 32);
        }
      }
      while ( v19 > 0 );
    }
    v25 = 0;
    v26 = 0;
    if ( v18 )
    {
      v27 = *v18;
      do
      {
        if ( !v27 )
          v25 = a2 != 0;
        v28 = (unsigned int *)(v18 - 4);
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount((__int64)v28);
        v29 = EtwpFlushBuffer((__int64)a1, v28, v25);
        EtwpCompleteBuffer((__int64)a1, (__int64)v28, v29);
        v18 = (_QWORD **)v27;
        if ( v27 )
          v27 = (_QWORD *)*v27;
        if ( v29 )
          v26 = v29;
      }
      while ( v18 );
      if ( a1[52] && a2 && ((a1[3] & 0x10000000) == 0 || v39) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( a2 && (a1[204] & 8) != 0 )
    {
      EtwpRealtimeSendEmptyMarker(a1, v4, 0LL);
    }
    return v26;
  }
  else
  {
    if ( a1[52] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}
