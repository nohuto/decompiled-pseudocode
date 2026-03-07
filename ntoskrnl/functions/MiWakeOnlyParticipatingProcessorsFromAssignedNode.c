PSLIST_ENTRY __fastcall MiWakeOnlyParticipatingProcessorsFromAssignedNode(__int64 *a1, int a2)
{
  PSLIST_ENTRY result; // rax
  __int64 v3; // rbp
  unsigned int v6; // r12d
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebp
  unsigned int v15; // esi
  __int64 v16; // r15
  __int64 *v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  _OWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h]

  result = (PSLIST_ENTRY)&retaddr;
  v3 = *a1;
  v20[0] = 0LL;
  if ( *(_DWORD *)v3 )
  {
    v6 = 0;
    result = (PSLIST_ENTRY)qword_140C65720;
    v7 = 0;
    v8 = *(_QWORD *)(376LL * *((unsigned int *)a1 + 51) + qword_140C65720 + 368);
    v22 = v8;
    if ( *(_WORD *)(v8 + 8) )
    {
      do
      {
        v20[0] = *(_OWORD *)(*(_QWORD *)(v3 + 144) + 16LL * v7);
        v9 = *(_QWORD *)&v20[0];
        if ( *(_QWORD *)&v20[0] )
        {
          do
          {
            v10 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity((__int64)v20)];
            v11 = v6;
            v12 = *(_QWORD *)(v10 + 33592) + 12480LL;
            v9 &= ~*(_QWORD *)(v10 + 200);
            *(_QWORD *)&v20[0] = v9;
            *(_DWORD *)(v12 + 68) = v6++;
            *(_DWORD *)(v12 + 64) = *((_DWORD *)a1 + 2);
            v13 = a1[28];
            *(_QWORD *)(v12 + 80) = v13;
            *(_QWORD *)(v12 + 72) = a1[26] + v13 * v11;
            *(_QWORD *)(v12 + 88) = 0LL;
            *(_DWORD *)v12 = a2;
          }
          while ( v9 );
          v8 = v22;
        }
        result = (PSLIST_ENTRY)*(unsigned __int16 *)(v8 + 8);
        ++v7;
      }
      while ( v7 < (unsigned int)result );
    }
  }
  else
  {
    v14 = 0;
    v15 = *((_DWORD *)a1 + 32) + 1;
    if ( *((_DWORD *)a1 + 32) != -1 )
    {
      v16 = 0LL;
      v17 = KiProcessorBlock;
      do
      {
        v18 = *(_QWORD *)(*v17 + 33592) + 12480LL;
        *(_DWORD *)(v18 + 68) = v14;
        *(_DWORD *)(v18 + 64) = *((_DWORD *)a1 + 2);
        v19 = a1[28];
        *(_QWORD *)(v18 + 80) = v19;
        *(_QWORD *)(v18 + 72) = a1[26] + v19 * v16;
        result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 15);
        if ( result )
          result += 2;
        else
          ++dword_140C12FAC;
        ++v14;
        *(_QWORD *)(v18 + 88) = result;
        ++v16;
        *(_DWORD *)v18 = a2;
        ++v17;
      }
      while ( v14 < v15 );
    }
  }
  return result;
}
