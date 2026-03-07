char __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rbx
  unsigned __int16 *v5; // rax
  char v6; // si
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int16 v10; // bp
  __int16 i; // r15
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int16 v17; // r10
  __int64 SrbExtension; // r14
  __int16 v19; // ax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 338);
  if ( a2 == 0xFFFF )
  {
    v4 = a1 + 480;
    v5 = (unsigned __int16 *)(*(_QWORD *)(a1 + 480) + 16LL * *(unsigned __int16 *)(a1 + 650));
    if ( (v5[7] & 1) == *(_WORD *)(a1 + 652) )
    {
      v8 = *(_QWORD *)(a1 + 880);
      v6 = 0;
      v9 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          v6 = 0;
          if ( v9 >= v2 )
            break;
          v4 = v8 + 392LL * v9;
          v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
          if ( (v5[7] & 1) != *(_WORD *)(v4 + 172) )
            goto LABEL_6;
          ++v9;
        }
      }
      return v6;
    }
    goto LABEL_6;
  }
  if ( a2 <= (unsigned __int16)v2 )
  {
    if ( a2 )
      v4 = 392LL * a2 + *(_QWORD *)(a1 + 880) - 392LL;
    else
      v4 = a1 + 480;
    v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * *(unsigned __int16 *)(v4 + 170));
    if ( (v5[7] & 1) == *(_WORD *)(v4 + 172) )
      return 0;
LABEL_6:
    v6 = 1;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0 )
    {
      v10 = *(_WORD *)(v4 + 170);
      for ( i = *(_WORD *)(v4 + 172); (v5[7] & 1) != i; v5 = (unsigned __int16 *)(*(_QWORD *)v4 + 16LL * v10) )
      {
        v12 = v5[5];
        v13 = v5[6];
        if ( *(_WORD *)(v4 + 168) && (*(_DWORD *)(a1 + 32) & 1) == 0 )
          break;
        if ( (_WORD)v12 )
        {
          v14 = *(_WORD *)(a1 + 334);
          v15 = (_QWORD *)(136 * v12 + *(_QWORD *)(a1 + 872) - 104LL);
        }
        else
        {
          v14 = *(_WORD *)(a1 + 332);
          v15 = (_QWORD *)(a1 + 376);
        }
        if ( !*(_QWORD *)(*v15 + 16 * v13) || (unsigned __int8)IsInternalSrb(a1) )
          break;
        SrbExtension = GetSrbExtension(v16);
        if ( *(_QWORD *)(SrbExtension + 4160) )
        {
          v20 = 0LL;
          StorPortExtendedFunction(47LL, a1, 0LL, &v20);
          v17 = 1;
          *(_QWORD *)(SrbExtension + 4176) = v20;
        }
        if ( v10 >= v14 - 1 )
        {
          v19 = v17;
          v10 = 0;
          if ( i == 1 )
            v19 = 0;
          i = v19;
        }
        else
        {
          ++v10;
        }
      }
    }
    return v6;
  }
  return 0;
}
