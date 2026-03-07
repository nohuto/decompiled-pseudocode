__int64 __fastcall AuthzBasepUnicodeStringFromOperandValue(__int64 a1, char a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v4; // ebp
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  void *Pool2; // rax
  size_t v15; // r8
  const void *v16; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdi
  unsigned __int16 *v20; // rdx

  v4 = 0;
  *a4 = 0;
  if ( *(_DWORD *)(a1 + 12) == 1 )
  {
    v9 = *(_WORD *)(a1 + 24);
    a3[1] = v9;
    v10 = *(_WORD *)(a1 + 24);
    *a3 = v10;
    v11 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 2LL);
    a3[1] = v9;
    v10 = **(_WORD **)(*(_QWORD *)(a1 + 16) + 48LL);
    *a3 = v10;
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 8LL);
  }
  *((_QWORD *)a3 + 1) = v11;
  if ( !v10 || !v11 )
    return (unsigned int)-1073741406;
  v12 = *(_DWORD *)(a1 + 12);
  if ( v12 == 1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      goto LABEL_7;
LABEL_13:
    if ( a2 )
    {
      v18 = 0;
      if ( (*a3 & 0xFFFE) != 0 )
      {
        do
        {
          v19 = 2LL * v18++;
          *(_WORD *)(v19 + *((_QWORD *)a3 + 1)) = RtlUpcaseUnicodeChar(*(_WORD *)(v19 + *((_QWORD *)a3 + 1)));
        }
        while ( v18 < *a3 >> 1 );
      }
    }
    return v4;
  }
  if ( v12 != 2 )
    goto LABEL_13;
  if ( !a2 )
    return v4;
LABEL_7:
  v13 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v13 = 64LL;
  Pool2 = (void *)ExAllocatePool2(v13, v9, 1632068947LL);
  *((_QWORD *)a3 + 1) = Pool2;
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a1 + 12) == 1 )
    {
      v15 = *(unsigned int *)(a1 + 24);
      v16 = *(const void **)(a1 + 32);
    }
    else
    {
      v20 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 48LL);
      v15 = *v20;
      v16 = (const void *)*((_QWORD *)v20 + 1);
    }
    memmove(Pool2, v16, v15);
    *a4 = 1;
    goto LABEL_13;
  }
  return 3221225495LL;
}
