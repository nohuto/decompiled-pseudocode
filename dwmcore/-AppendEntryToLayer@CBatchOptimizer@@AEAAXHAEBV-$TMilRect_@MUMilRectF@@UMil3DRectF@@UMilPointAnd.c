__int64 __fastcall CBatchOptimizer::AppendEntryToLayer(
        CBatchOptimizer *this,
        int a2,
        _OWORD *a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  char *v13; // r8
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rax

  v6 = a2;
  v9 = *a5;
  v10 = 520LL * *((int *)this + v6 + 12);
  if ( !*a5 )
    goto LABEL_8;
  if ( *(_DWORD *)((char *)this + v10 + 100) )
  {
    *a5 = 0LL;
    v16 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v9;
    if ( !v16 )
      goto LABEL_8;
LABEL_15:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    goto LABEL_8;
  }
  if ( *(_QWORD *)((char *)this + v10 + 112) )
    goto LABEL_8;
  if ( ((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 72LL))(*a5) & 0x10000) != 0 )
  {
    v17 = *a5;
    *a5 = 0LL;
    v16 = *(_QWORD *)((char *)this + v10 + 112);
    *(_QWORD *)((char *)this + v10 + 112) = v17;
    if ( !v16 )
      goto LABEL_8;
    goto LABEL_15;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_10;
  if ( !*((_DWORD *)this + 130 * *((int *)this + v6 + 11) + 26) )
    *((_BYTE *)this + 4240) = 1;
LABEL_8:
  if ( !(_DWORD)v6 || *(_DWORD *)((char *)this + v10 + 100) != 20 )
  {
LABEL_10:
    if ( *(_DWORD *)((char *)this + v10 + 96) != 20 )
      goto LABEL_11;
  }
  CBatchOptimizer::ContinueLayer(this, v6);
LABEL_11:
  v11 = *((int *)this + v6 + 12);
  v12 = *a4;
  *a4 = 0LL;
  v13 = (char *)this + 520 * v11;
  v14 = *((unsigned int *)v13 + 24);
  result = (unsigned int)(v14 + 1);
  *((_DWORD *)v13 + 24) = result;
  *(_QWORD *)&v13[8 * v14 + 120] = v12;
  if ( (_DWORD)v6 )
  {
    result = 2LL * *((unsigned int *)v13 + 25);
    *(_OWORD *)&v13[16 * *((unsigned int *)v13 + 25) + 280] = *a3;
  }
  ++*((_DWORD *)v13 + 25);
  return result;
}
