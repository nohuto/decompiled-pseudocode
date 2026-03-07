__int64 __fastcall ExpPrepareToWakeFastResourceShared(signed __int64 *a1, __int64 *a2, _QWORD *a3, int *a4, _DWORD *a5)
{
  signed __int64 v8; // r10
  _QWORD **v9; // rsi
  int *v10; // r9
  __int64 v11; // rbx
  BOOL v12; // ebp
  unsigned __int64 v13; // rcx
  bool v14; // zf
  signed __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  _DWORD *v18; // rdx
  __int64 result; // rax
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  _m_prefetchw(a1);
  v8 = *a1;
  v9 = (_QWORD **)(a1 + 2);
  do
  {
    v10 = (int *)(a1 + 7);
    v11 = (v8 >> 2) - 1;
    v12 = *v9 || *v10;
    v13 = ~(v8 & 0xFD | (unsigned __int8)(2 * v12)) & 3 ^ ((v8 & 0xFFFFFFFFFFFFFFFCuLL | (2LL * v12) & 0xFFFFFFFFFFFFFFFCuLL)
                                                         - 1);
    if ( v8 >> 2 == 1 )
    {
      if ( *v9 )
      {
        v13 |= 1uLL;
      }
      else if ( *v10 )
      {
        v13 = ((v13 & 0xFFFFFFFFFFFFFFFCuLL) + 4LL * (unsigned int)*v10) | v13 & 3;
      }
    }
    if ( v13 == v8 )
      break;
    v15 = _InterlockedCompareExchange64(a1, v13, v8);
    v14 = v8 == v15;
    v8 = v15;
  }
  while ( !v14 );
  v16 = 0LL;
  v20 = 0LL;
  if ( v11 )
    goto LABEL_18;
  if ( *v9 )
  {
    KeCaptureWaitChainHeadEx(v9, a2, &v20);
    v16 = v20;
    v17 = 1;
    goto LABEL_19;
  }
  if ( !*v10 )
  {
LABEL_18:
    v17 = 0;
    *a2 = 0LL;
  }
  else
  {
    *a2 = a1[1];
    a1[1] = 0LL;
    v17 = *v10;
    *v10 = 0;
  }
LABEL_19:
  v18 = a5;
  *a4 = v17;
  result = 0LL;
  *a3 = v16;
  *v18 = 0;
  if ( v12 )
  {
    result = 2LL;
    *v18 = 2;
  }
  if ( v16 )
  {
    result = (unsigned int)result | 1;
    *v18 = result;
  }
  return result;
}
