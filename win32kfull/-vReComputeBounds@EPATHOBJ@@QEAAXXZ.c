void __fastcall EPATHOBJ::vReComputeBounds(EPATHOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *i; // rcx
  int *v5; // rdx
  unsigned __int64 v6; // r10
  _DWORD *v7; // rax
  int *v8; // r11
  int v9; // r9d
  int v10; // r9d

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 32);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 48) = *(_DWORD *)(v3 + 24);
      *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 28LL);
      *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 48LL);
      *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 52LL);
      for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
      {
        v5 = (int *)(i + 3);
        v6 = (unsigned __int64)&i[*((unsigned int *)i + 5) + 3];
        while ( (unsigned __int64)v5 < v6 )
        {
          v7 = (_DWORD *)*((_QWORD *)this + 1);
          v8 = v5;
          v5 += 2;
          v9 = *v8;
          if ( v7[12] <= *v8 )
          {
            if ( v7[14] < v9 )
              v7[14] = v9;
          }
          else
          {
            v7[12] = v9;
          }
          v10 = v8[1];
          if ( v7[15] >= v10 )
          {
            if ( v7[13] > v10 )
              v7[13] = v10;
          }
          else
          {
            v7[15] = v10;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = 0;
      *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = 0;
    }
  }
}
