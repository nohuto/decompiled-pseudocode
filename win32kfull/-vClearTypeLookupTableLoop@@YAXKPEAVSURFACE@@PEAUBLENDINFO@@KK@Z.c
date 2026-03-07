void __fastcall vClearTypeLookupTableLoop(
        __int64 a1,
        struct SURFACE *a2,
        struct BLENDINFO *a3,
        int a4,
        unsigned int a5)
{
  int v8; // esi
  _WORD *v9; // r11
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // r12d
  int v14; // ebp
  int v15; // r13d
  int v16; // r14d
  int v17; // r10d
  unsigned int *v18; // rax
  int v19; // r15d
  unsigned __int8 *v20; // r9
  __int64 v21; // r8
  unsigned int v22; // r10d
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+80h] [rbp+18h]

  v23 = a1;
  v8 = a1;
  v25 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v9 = (_WORD *)(v25 + 2);
  *(_DWORD *)(v25 + 484) = *(_DWORD *)(v25 + 8584);
  *(_DWORD *)(v25 + 476) = a5;
  *(_DWORD *)(v25 + 472) = a4;
  *(_DWORD *)(v25 + 480) = v8;
  v10 = *(_QWORD *)a2;
  v11 = 113LL;
  *(_QWORD *)(v25 + 464) = v10;
  v12 = *((_QWORD *)a3 + 6);
  v13 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((*((_DWORD *)a3 + 6) & a5) << *(_DWORD *)a3) >> *((_DWORD *)a3 + 1))
                           + v12);
  v14 = *((_DWORD *)a3 + 9) - v13;
  v15 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 7)) << *((_DWORD *)a3 + 2)) >> *((_DWORD *)a3 + 3))
                           + v12);
  v16 = *((_DWORD *)a3 + 10) - v15;
  v17 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_DWORD *)a3 + 5))
                           + v12);
  v18 = (unsigned int *)(v25 + 4);
  v19 = *((_DWORD *)a3 + 11) - v17;
  v24 = v17;
  v20 = (unsigned __int8 *)(*(_QWORD *)(v25 + 8592) + 4LL);
  do
  {
    v21 = *((_QWORD *)a3 + 7);
    v22 = *((_DWORD *)a3 + 6) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v13
                                                                                  + ((dword_1C0319240[*v20] * v14
                                                                                    + 0x80000) >> 20))
                                                                   + v21) << *((_DWORD *)a3 + 1)) >> *(_DWORD *)a3) | *((_DWORD *)a3 + 7) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v15 + ((dword_1C0319240[v20[1]] * v16 + 0x80000) >> 20)) + v21) << *((_DWORD *)a3 + 3)) >> *((_DWORD *)a3 + 2)) | *((_DWORD *)a3 + 8) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v17 + ((dword_1C0319240[v20[2]] * v19 + 0x80000) >> 20)) + v21) << *((_DWORD *)a3 + 5)) >> *((_DWORD *)a3 + 4));
    if ( v23 == 2 )
      *v9 = v22;
    else
      *v18 = v22;
    v17 = v24;
    ++v9;
    ++v18;
    v20 += 4;
    --v11;
  }
  while ( v11 );
  if ( v23 == 2 )
  {
    *(_WORD *)v25 = a5;
    *(_WORD *)(v25 + 228) = a4;
  }
  else
  {
    *(_DWORD *)v25 = a5;
    *(_DWORD *)(v25 + 456) = a4;
  }
}
