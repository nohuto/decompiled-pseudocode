unsigned __int64 *__fastcall PopCloneRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rdi
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 **v16; // rax
  unsigned __int64 *result; // rax

  v7 = a2;
  RtlSetBits((PRTL_BITMAP)(a1 + 32), a2, a3);
  v8 = 0LL;
  v9 = *(unsigned __int64 **)(a1 + 64);
  v10 = v7 + a3;
  if ( v9 == (unsigned __int64 *)(a1 + 64) )
    goto LABEL_22;
  while ( 1 )
  {
    v11 = v9;
    v9 = (unsigned __int64 *)*v9;
    v12 = v11[3];
    v13 = v11 + 4;
    if ( (v7 < v12 || v7 > *v13) && (v10 < v12 || v10 > *v13) )
    {
      if ( v7 > v12 )
        goto LABEL_18;
      if ( v12 > v10 )
        break;
    }
    v14 = *v13;
    if ( v7 <= v12 )
      v12 = v7;
    v7 = v12;
    if ( v10 >= v14 )
      v14 = v10;
    --*(_DWORD *)(a1 + 80);
    v15 = *v11;
    v10 = v14;
    if ( *(unsigned __int64 **)(*v11 + 8) != v11 )
      goto LABEL_26;
    v16 = (unsigned __int64 **)v11[1];
    if ( *v16 != v11 )
      goto LABEL_26;
    *v16 = (unsigned __int64 *)v15;
    *(_QWORD *)(v15 + 8) = v16;
    if ( v8 )
      ExFreePoolWithTag(v11, 0x70616D48u);
    else
      v8 = v11;
LABEL_18:
    if ( v9 == (unsigned __int64 *)(a1 + 64) )
      goto LABEL_21;
  }
  if ( v7 >= v12 )
    goto LABEL_18;
  v9 = (unsigned __int64 *)v9[1];
LABEL_21:
  if ( !v8 )
  {
LABEL_22:
    result = (unsigned __int64 *)ExAllocatePool2(64LL, 48LL, 1885433160LL);
    v8 = result;
    if ( !result )
    {
      if ( *(int *)(a1 + 188) >= 0 )
        *(_DWORD *)(a1 + 188) = -1073741670;
      return result;
    }
  }
  *((_DWORD *)v8 + 4) = a4;
  v8[3] = v7;
  v8[4] = v10;
  result = (unsigned __int64 *)v9[1];
  if ( (unsigned __int64 *)*result != v9 )
LABEL_26:
    __fastfail(3u);
  *v8 = (unsigned __int64)v9;
  v8[1] = (unsigned __int64)result;
  *result = (unsigned __int64)v8;
  v9[1] = (unsigned __int64)v8;
  ++*(_DWORD *)(a1 + 80);
  return result;
}
