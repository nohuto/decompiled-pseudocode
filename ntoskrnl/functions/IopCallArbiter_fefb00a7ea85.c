__int64 __fastcall IopCallArbiter(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 *v8; // r8
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v5 = a2;
  v10 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  switch ( (_DWORD)a2 )
  {
    case 0:
      DWORD2(v10) = 0;
      a2 = 0LL;
      *(_QWORD *)&v11 = 0LL;
LABEL_12:
      *(_QWORD *)&v10 = a3;
LABEL_13:
      v8 = &v10;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(v3 + 32))(*(_QWORD *)(v3 + 8), a2, v8);
    case 1:
      *(_QWORD *)&v10 = a3;
      DWORD2(v10) = 0;
      *(_QWORD *)&v11 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int128 *))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL, &v10);
LABEL_19:
      a2 = v5;
      goto LABEL_12;
    case 2:
LABEL_9:
      v8 = 0LL;
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(v3 + 32))(*(_QWORD *)(v3 + 8), a2, v8);
  }
  if ( (_DWORD)a2 != 4 )
  {
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 == 6 )
      {
        a2 = 6LL;
        v10 = *a3;
        v11 = a3[1];
        goto LABEL_13;
      }
      if ( (_DWORD)a2 == 7 )
      {
        v6 = *(__int128 *)((char *)a3 + 40);
        *((_QWORD *)a3 + 6) = &v9;
        v9 = v6;
        *((_QWORD *)a3 + 5) = &v9;
        *(_QWORD *)&v10 = &v9;
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(v3 + 32))(*(_QWORD *)(v3 + 8), 7LL, &v10);
        *(__int128 *)((char *)a3 + 40) = v9;
        return result;
      }
      if ( (_DWORD)a2 != 9 )
        return 3221225485LL;
      goto LABEL_19;
    }
    goto LABEL_9;
  }
  return 3221225474LL;
}
