__int64 __fastcall WbInitializeEncryptionSegment(int *a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  unsigned __int64 v6; // rcx
  unsigned int v7; // edx
  signed int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // esi
  SIZE_T v11; // r13
  void **v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  const void *v18; // r14
  unsigned __int64 v19; // rax
  unsigned int v20; // esi
  unsigned __int64 v21; // rcx
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int v25; // eax

  v5 = *a1;
  if ( *a1 == 1 )
  {
    v23 = 16LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v24 = -1;
    if ( v23 <= 0xFFFFFFFF )
      v24 = v23;
    v8 = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v23 > 0xFFFFFFFF )
      goto LABEL_36;
    v25 = v24 + 248;
    v10 = -1;
    if ( v24 + 248 >= v24 )
      v10 = v24 + 248;
    v8 = v25 < v24 ? 0xC0000095 : 0;
    if ( v25 < v24 )
      goto LABEL_36;
    v11 = 248LL;
  }
  else
  {
    if ( v5 )
    {
      v8 = -1073741811;
      goto LABEL_36;
    }
    v6 = 12LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v7 = -1;
    if ( v6 <= 0xFFFFFFFF )
      v7 = v6;
    v8 = v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v6 > 0xFFFFFFFF )
      goto LABEL_36;
    v9 = v7 + 244;
    v10 = -1;
    if ( v7 + 244 >= v7 )
      v10 = v7 + 244;
    v8 = v9 < v7 ? 0xC0000095 : 0;
    if ( v9 < v7 )
      goto LABEL_36;
    v11 = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v5;
  *(_DWORD *)(a3 + 52) = a1[1];
  v12 = (void **)(a3 + 56);
  v8 = WbAlloc(v10, (_QWORD *)(a3 + 56));
  if ( v8 >= 0 )
  {
    if ( v10 )
    {
      v13 = *(_QWORD *)(a2 + 8);
      v14 = v13 + v10;
      if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(*v12, *(const void **)(a2 + 8), v10);
    v8 = sub_14075424C(*(PVOID *)(a2 + 8));
    if ( v8 >= 0 )
    {
      v8 = sub_140754450(*v12);
      if ( v8 >= 0 )
      {
        if ( RtlCompareMemory(*((const void **)a1 + 1), *v12, v11) != v11 )
        {
          v8 = -1073741811;
          goto LABEL_36;
        }
        if ( *(_DWORD *)(a3 + 48) > 1u )
        {
          v8 = -1073741811;
          goto LABEL_36;
        }
        v15 = *v12;
        v16 = *(_QWORD *)(a2 + 8) - (*((_DWORD *)*v12 + 10) & 0xFFFFFFF);
        *(_QWORD *)(a3 + 32) = v16;
        v17 = (unsigned int)v15[12];
        if ( !(_DWORD)v17 )
          goto LABEL_27;
        v18 = (const void *)(v16 + (v15[11] & 0xFFFFFFF));
        v19 = 4 * v17;
        v20 = -1;
        if ( v19 <= 0xFFFFFFFF )
          v20 = v19;
        v8 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v19 <= 0xFFFFFFFF )
        {
          if ( v20 )
          {
            v21 = (unsigned __int64)v18 + v20;
            if ( v21 > 0x7FFFFFFF0000LL || v21 < (unsigned __int64)v18 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          v8 = WbAlloc(v20, (_QWORD *)(a3 + 40));
          if ( v8 >= 0 )
          {
            memmove(*(void **)(a3 + 40), v18, v20);
LABEL_27:
            *(_DWORD *)(a3 + 16) = 1;
          }
        }
      }
    }
  }
LABEL_36:
  *(_DWORD *)(a3 + 20) = v8;
  return (unsigned int)v8;
}
