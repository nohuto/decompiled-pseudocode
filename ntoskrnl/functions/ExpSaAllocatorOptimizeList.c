void __fastcall ExpSaAllocatorOptimizeList(__int64 a1)
{
  int v1; // ebx
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  _QWORD *v5; // rbp
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 2) != 0 )
  {
    v3 = (_QWORD *)(a1 + 8);
    v4 = *(_QWORD **)(a1 + 8);
    if ( v4 != v3 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        if ( *((_DWORD *)v4 + 9) == 512 )
        {
          v6 = (_QWORD *)*v4;
          if ( *(_QWORD **)(*v4 + 8LL) != v4 )
            goto LABEL_10;
          v7 = (_QWORD *)v4[1];
          if ( (_QWORD *)*v7 != v4 )
            goto LABEL_10;
          *v7 = v6;
          v6[1] = v7;
          ExpSaPageGroupDescriptorFree(v4);
        }
        else if ( !*((_DWORD *)v4 + 9) )
        {
          v8 = *v4;
          *((_DWORD *)v4 + 10) = 1;
          if ( *(_QWORD **)(v8 + 8) != v4
            || (v9 = (_QWORD *)v4[1], (_QWORD *)*v9 != v4)
            || (*v9 = v8, *(_QWORD *)(v8 + 8) = v9, v10 = *(_QWORD **)(a1 + 32), *v10 != a1 + 24) )
          {
LABEL_10:
            __fastfail(3u);
          }
          *v4 = a1 + 24;
          v4[1] = v10;
          *v10 = v4;
          *(_QWORD *)(a1 + 32) = v4;
        }
        v4 = v5;
      }
      while ( v5 != v3 );
    }
    *(_DWORD *)(a1 + 64) = v1 & 0xFFFFFFFD;
  }
}
