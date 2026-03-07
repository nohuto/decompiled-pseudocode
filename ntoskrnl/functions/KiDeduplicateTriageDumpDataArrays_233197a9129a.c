void __fastcall KiDeduplicateTriageDumpDataArrays(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // r14d
  const void **v5; // rdi
  unsigned int v6; // r15d
  char v7; // al
  const void *v8; // r12
  const void *v9; // rdx
  const void *v10; // rbx
  int *v11; // r8
  __int64 v12; // rdx
  _DWORD *v13; // r9
  int v14; // eax
  ULONG v15; // ecx
  ULONG v16; // edx
  __int128 i; // [rsp+40h] [rbp-20h] BYREF
  const void *v18; // [rsp+50h] [rbp-10h] BYREF
  ULONG ulSubtrahend[2]; // [rsp+58h] [rbp-8h]
  char v20; // [rsp+A0h] [rbp+40h]
  ULONG pulResult; // [rsp+B0h] [rbp+50h] BYREF

  v4 = 0;
  pulResult = 0;
  for ( i = 0LL; v4 < a1[4]; ++v4 )
  {
    v5 = (const void **)&a1[4 * v4 + 12];
    v18 = *v5;
    *(_QWORD *)ulSubtrahend = v5[1];
    if ( *(_QWORD *)ulSubtrahend )
    {
      v6 = 0;
      if ( *(_DWORD *)(a2 + 16) )
      {
        while ( 1 )
        {
          v7 = KiCheckRangeOverlap((unsigned __int64 *)&v18, (unsigned __int64 *)(a2 + 16 * (v6 + 3LL)), &i);
          v8 = *(const void **)ulSubtrahend;
          v9 = v5[1];
          v20 = v7;
          if ( !*(_QWORD *)ulSubtrahend )
            break;
          if ( *(const void **)ulSubtrahend != v9 )
          {
            if ( v7 && a1[4] == a1[5] )
            {
              DbgPrintEx(5u, 3u, "NTDUMP: No room for split block: Address %p Size %d\n", (const void *)i, DWORD2(i));
              goto LABEL_18;
            }
            v10 = v18;
            DbgPrintEx(
              5u,
              3u,
              "NTDUMP: Updating block: Address %p Size %d to Address %p Size %d\n",
              *v5,
              (_DWORD)v9,
              v18,
              ulSubtrahend[0]);
            RtlULongSub(*((_DWORD *)v5 + 2), (ULONG)v8, &pulResult);
            RtlULongSub(a1[6], pulResult, a1 + 6);
            *v5 = v10;
            v5[1] = v8;
            if ( v20 )
            {
              v12 = *((_QWORD *)&i + 1);
              v13 = &a1[4 * a1[4] + 12];
              *(_QWORD *)v13 = i;
              v14 = -1;
              *((_QWORD *)v13 + 1) = v12;
              ++a1[4];
              if ( (int)v12 + *v11 >= (unsigned int)v12 )
                v14 = v12 + *v11;
              *v11 = v14;
              DbgPrintEx(
                5u,
                3u,
                "NTDUMP: New split block added: Address %p Size %d\n",
                *(const void **)v13,
                *((_QWORD *)v13 + 1));
            }
          }
          if ( ++v6 >= *(_DWORD *)(a2 + 16) )
            goto LABEL_18;
        }
        DbgPrintEx(5u, 3u, "NTDUMP: Removing block: Address %p Size %d\n", *v5, (_DWORD)v9);
        v15 = a1[6];
        v16 = -1;
        if ( (unsigned __int64)v5[1] <= 0xFFFFFFFF )
          v16 = (unsigned int)v5[1];
        pulResult = v16;
        RtlULongSub(v15, v16, a1 + 6);
        *v5 = 0LL;
        v5[1] = 0LL;
      }
    }
LABEL_18:
    ;
  }
}
