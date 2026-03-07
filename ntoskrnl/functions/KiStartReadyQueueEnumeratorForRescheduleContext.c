__int64 __fastcall KiStartReadyQueueEnumeratorForRescheduleContext(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  __int64 v5; // r10
  unsigned __int8 *v6; // r11
  int *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  unsigned __int8 v12; // r15
  char v13; // cl
  int v14; // ebp
  int v15; // r13d
  int v16; // r12d
  __int64 v17; // rax
  _DWORD *v18; // r9
  int v19; // edi
  unsigned int v20; // r11d
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned int v23; // r15d
  _DWORD *v24; // rax
  __int64 v25; // r11
  __int64 v26; // r9
  __int64 result; // rax
  __int64 v28; // r15
  __int64 v29; // rcx
  int v30; // r12d
  _DWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+50h] [rbp+8h]

  v2 = *a2;
  v4 = a1;
  v5 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 16;
    v7 = (int *)(a1 + 88);
    v8 = 1LL;
    v9 = v2;
    do
    {
      v10 = *((_QWORD *)v6 + 2);
      v33 = *(_QWORD *)v6;
      v11 = *(_QWORD *)(v10 + 104);
      if ( v11 )
      {
        v11 += *(unsigned int *)(*(_QWORD *)v6 + 216LL);
        if ( v11 )
        {
          v28 = v11;
          if ( !KiIsThreadConstrainedBySchedulingGroup(v10)
            || (v6[32] & 4) != 0 && (unsigned __int8)KiShouldPreemptionBeDeferred(v29) )
          {
            goto LABEL_32;
          }
          if ( !(unsigned __int8)KiCheckForMaxOverQuotaScb(v11) )
          {
            do
            {
              v30 = *(_DWORD *)(v28 + 116);
              if ( v30 )
                break;
              v28 = *(_QWORD *)(v28 + 408);
            }
            while ( v28 );
            if ( !v30 )
LABEL_32:
              v11 = 0LL;
          }
        }
      }
      v12 = v6[32];
      if ( (v12 & (unsigned __int8)v8) != 0 )
      {
        v14 = -1;
        v15 = -1;
        v16 = -1;
      }
      else
      {
        v13 = *(_BYTE *)(v10 + 195);
        if ( v13 == 63 )
        {
          v14 = 0;
          v15 = 0;
          v16 = 0;
        }
        else if ( (v12 & 0x10) != 0 )
        {
          if ( v13 )
            v14 = -2;
          else
            v14 = -1;
          v15 = -1;
          v16 = -1;
        }
        else if ( v11 )
        {
          v14 = -1;
          v16 = ~(((_DWORD)v8 << v13) - 1);
          v15 = *(_DWORD *)(*(_QWORD *)(v11 + 416) + 116LL);
          if ( (v12 & 8) == 0 )
            v16 &= ~((_DWORD)v8 << v13);
        }
        else
        {
          v14 = ~(((_DWORD)v8 << v13) - 1);
          if ( (v12 & 8) == 0 )
            v14 &= ~(1 << v13);
          v15 = 0;
          v16 = 0;
        }
      }
      *((_QWORD *)v7 - 5) = v33;
      v17 = *((_QWORD *)v6 + 1);
      v6 += 40;
      *((_QWORD *)v7 - 4) = v17;
      *v7 = v14;
      *((_QWORD *)v7 - 2) = v11;
      *(v7 - 2) = v15;
      *(v7 - 1) = v16;
      v7 += 12;
      v9 -= v8;
    }
    while ( v9 );
    v18 = (_DWORD *)(v4 + 92);
    LOBYTE(v19) = 0;
    v20 = v8;
    v21 = v5;
    do
    {
      if ( ((unsigned __int8)v19 & (unsigned __int8)v8) == 0 )
      {
        v22 = *(_QWORD *)(v18 - 9);
        if ( v22 )
        {
          v23 = v20;
          *v18 = *(v18 - 1);
          if ( v20 < v2 )
          {
            v31 = (_DWORD *)(v4 + 48LL * v20 + 88);
            do
            {
              if ( *((_QWORD *)v31 - 4) == v22 )
              {
                *v18 |= *v31;
                v19 = (unsigned __int8)v19 | (1 << v23);
              }
              ++v23;
              v31 += 12;
            }
            while ( v23 < v2 );
          }
        }
        v19 = (unsigned __int8)v19 | (1 << (v20 - 1));
      }
      ++v20;
      LODWORD(v8) = __ROL4__(v8, 1);
      v18 += 12;
      --v21;
    }
    while ( v21 );
    v24 = (_DWORD *)(v4 + 88);
    v25 = v5;
    do
    {
      v26 = *((_QWORD *)v24 - 4);
      *v24 &= *(_DWORD *)(*((_QWORD *)v24 - 5) + 32472LL);
      if ( v26 )
        v24[1] &= *(_DWORD *)(v26 + 8);
      v24 += 12;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v25 = *a2;
  }
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 && v2 )
  {
    v32 = v4 + 92;
    do
    {
      *(_QWORD *)(v32 - 4) = 0LL;
      *(_QWORD *)(v32 - 20) = 0LL;
      *(_QWORD *)(v32 - 12) = 0LL;
      v32 += 48LL;
      --v25;
    }
    while ( v25 );
  }
  *(_DWORD *)v4 = v2;
  *(_BYTE *)(v4 + 13) = 0;
  result = a2[1];
  *(_BYTE *)(v4 + 9) = result;
  return result;
}
