_QWORD *__fastcall CcFindNextWorkQueueEntry(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  int v5; // eax
  unsigned int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rcx

  v3 = (_QWORD *)*a3;
  v4 = 0LL;
  if ( (_QWORD *)*a3 == a3 )
    return v4;
  v5 = *((_DWORD *)v3 + 32);
  v4 = (_QWORD *)*a3;
  if ( v5 == 4 )
  {
    v6 = *(_DWORD *)(a2 + 48);
    if ( v6 > 1 || *(_DWORD *)(a2 + 152) > 1u )
    {
      if ( !*(_BYTE *)(a2 + 196) )
      {
        *(_DWORD *)(a2 + 180) = v6;
        *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 152);
      }
      *(_BYTE *)(a2 + 196) = 1;
      return 0LL;
    }
  }
  else
  {
    if ( v5 == 2 )
    {
      v8 = v3[2];
    }
    else
    {
      if ( v5 != 7 )
      {
        if ( v5 == 1 )
          *(_QWORD *)(*(_QWORD *)(v3[2] + 48LL) + 112LL) = 0LL;
        goto LABEL_16;
      }
      v8 = v3[3];
    }
    *(_QWORD *)(v8 + 504) = 0LL;
  }
LABEL_16:
  v9 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v10 = (_QWORD *)v3[1], (_QWORD *)*v10 != v3) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  v3[1] = 0LL;
  *v3 = 0LL;
  return v4;
}
