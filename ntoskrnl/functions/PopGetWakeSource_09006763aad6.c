__int64 __fastcall PopGetWakeSource(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v2; // r13
  unsigned __int64 v3; // rbp
  _DWORD *v4; // rsi
  unsigned int CurrentWakeInfos; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 *v12; // r10
  __int64 v13; // r11
  _QWORD *v14; // r15
  _QWORD *v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // r9
  unsigned int v18; // edi
  __int64 v19; // rbp
  __int64 *v20; // r15
  _DWORD *v21; // r12
  __int64 v22; // rcx
  _DWORD *v23; // r13
  _QWORD *v24; // rbx
  _DWORD *v25; // rsi
  _QWORD *v26; // r15
  unsigned __int64 v27; // rbp
  __int64 *v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+A0h] [rbp+8h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  __int64 *v32; // [rsp+B8h] [rbp+20h] BYREF

  v29 = (int)a1;
  v32 = 0LL;
  v2 = a2;
  v3 = *a2;
  v4 = a1;
  if ( (_DWORD)v3 && !a1 )
    return 3221225485LL;
  KeWaitForSingleObject(&PopWakeSourceAvailable, Executive, 0, 0, 0LL);
  CurrentWakeInfos = PopGetCurrentWakeInfos((__int64 *)&v32);
  v9 = CurrentWakeInfos;
  v31 = CurrentWakeInfos;
  v10 = CurrentWakeInfos;
  v11 = (int)(4 * CurrentWakeInfos + 4);
  if ( CurrentWakeInfos )
  {
    v12 = v32;
    v13 = CurrentWakeInfos;
    do
    {
      v7 = *v12;
      v14 = (_QWORD *)(*v12 + 24);
      v15 = (_QWORD *)*v14;
      v11 = 4 * *(_DWORD *)(*v12 + 40) + 4 + ((v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      while ( v15 != v14 )
      {
        v16 = PopWakeSourceSize(v15, v7, v8, v15);
        v15 = (_QWORD *)*v17;
        v11 = v16 + ((v11 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  if ( v11 <= v3 )
  {
    *v4 = v9;
    v19 = (__int64)&v4[v9 + 1];
    if ( (_DWORD)v9 )
    {
      v20 = v32;
      v21 = v4 + 1;
      v28 = v32;
      do
      {
        v22 = *v20;
        v23 = (_DWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *v23 = *(_DWORD *)(*v20 + 40);
        *v21 = ((v19 + 7) & 0xFFFFFFF8) - (_DWORD)v4;
        v19 = (__int64)&v23[*(unsigned int *)(v22 + 40) + 1];
        v24 = *(_QWORD **)(v22 + 24);
        if ( v24 != (_QWORD *)(v22 + 24) )
        {
          v25 = v23 + 1;
          v26 = (_QWORD *)(v22 + 24);
          do
          {
            v27 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            *v25++ = v27 - (_DWORD)v23;
            PopCopyWakeSource(v27, v7, (__int64)v24);
            v24 = (_QWORD *)*v24;
            v19 = *(unsigned int *)(v27 + 4) + v27;
          }
          while ( v24 != v26 );
          LODWORD(v4) = v29;
          v20 = v28;
        }
        ++v20;
        ++v21;
        v28 = v20;
        --v10;
      }
      while ( v10 );
      LODWORD(v9) = v31;
      v2 = a2;
    }
    v18 = 0;
  }
  else
  {
    v18 = -1073741789;
  }
  if ( (_DWORD)v9 )
    PopDereferenceWakeInfos(v9, v32);
  *v2 = v11;
  return v18;
}
