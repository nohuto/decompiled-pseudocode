char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r10
  _QWORD *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *i; // rbx
  char v7; // bl
  char result; // al
  __int64 v9; // r12
  _QWORD **v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  char v14; // al
  ULONGLONG *v15; // r8
  ULONGLONG v16; // rcx
  signed __int64 v17; // rdx
  signed __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r8
  ULONGLONG v23; // rcx
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD v27[2]; // [rsp+20h] [rbp-10h] BYREF
  char v29; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0LL;
  v29 = 0;
  v2 = a1;
  v3 = v27;
  v27[1] = v27;
  v27[0] = v27;
  v4 = (__int64)KiTimer2Collections;
  do
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( v5 == 1 )
        goto LABEL_5;
      i = (_QWORD *)(v5 ^ (v4 | 1));
    }
    else
    {
      i = *(_QWORD **)(v4 + 8);
    }
    if ( i )
    {
      v9 = 0LL;
      if ( v1 >= 2 )
        v9 = 24LL;
      do
      {
        v10 = (_QWORD **)i[1];
        v11 = &i[v9 / 0xFFFFFFFFFFFFFFF8uLL];
        v12 = i;
        if ( v10 )
        {
          v13 = *v10;
          for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
            i = v13;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v12 )
              break;
            v12 = i;
          }
        }
        v14 = *((_BYTE *)v11 + 104);
        if ( v14 != *(_BYTE *)v2 && (v14 || (*((_BYTE *)v11 + 105) & 2) == 0) )
        {
          KiRemoveTimer2((__int64)(v11 - 3));
          v2 = a1;
          v15 = v11 + 6;
          v16 = v11[6];
          v17 = *(_QWORD *)(a1 + 24);
          if ( v17 >= 0 )
          {
            if ( RtlULongLongSub(v16, v17, v15) )
              *v22 = 0LL;
            v23 = v11[7];
            if ( v23 != -1LL && RtlULongLongSub(v23, *(_QWORD *)(v2 + 24), v11 + 7) )
              *v24 = 0LL;
          }
          else
          {
            v18 = -v17;
            v19 = v16 + v18;
            if ( v16 + v18 < v16 || v19 == -1 )
              v19 = -2LL;
            v20 = v11[7];
            *v15 = v19;
            if ( v20 != -1LL )
            {
              v21 = v20 + v18;
              if ( v20 + v18 < v20 || v21 == -1 )
                v21 = -2LL;
              v11[7] = v21;
            }
          }
          v25 = v27[0];
          v3 = v11;
          if ( *(_QWORD **)(v27[0] + 8LL) != v27 )
            __fastfail(3u);
          *v11 = v27[0];
          v11[1] = v27;
          *(_QWORD *)(v25 + 8) = v11;
          v27[0] = v11;
        }
      }
      while ( i );
    }
LABEL_5:
    ++v1;
    v4 += 24LL;
  }
  while ( v4 < (__int64)&KiCpuSetLock );
  v7 = 0;
  if ( v3 != v27 )
  {
    do
    {
      v26 = (__int64)(v3 - 3);
      v3 = (_QWORD *)*v3;
      KiInsertTimer2(v26, 1, &v29);
      if ( v29 )
        v7 = 1;
    }
    while ( v3 != v27 );
    if ( v7 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], qword_140C41F68);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
