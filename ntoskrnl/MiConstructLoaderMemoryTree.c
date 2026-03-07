void __fastcall MiConstructLoaderMemoryTree(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  bool v7; // r8
  unsigned __int64 v8; // rax

  v1 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 32);
  if ( v3 != (_QWORD *)(a1 + 32) )
  {
    v4 = a1 + 352;
    do
    {
      v5 = (unsigned __int64)v3;
      v3 = (_QWORD *)*v3;
      v6 = *(_QWORD *)v4;
      if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
        v6 ^= v4;
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          if ( *(_QWORD *)(v5 + 32) >= *(_QWORD *)(v6 + 32) )
          {
            v8 = *(_QWORD *)(v6 + 8);
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_17;
              v8 ^= v6;
            }
            if ( !v8 )
            {
LABEL_17:
              v7 = 1;
              break;
            }
          }
          else
          {
            v8 = *(_QWORD *)v6;
            if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
            {
              if ( !v8 )
                goto LABEL_18;
              v8 ^= v6;
            }
            if ( !v8 )
            {
LABEL_18:
              v7 = 0;
              break;
            }
          }
          v6 = v8;
        }
      }
      RtlRbInsertNodeEx((unsigned __int64 *)v4, v6, v7, v5);
    }
    while ( v3 != v1 );
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
}
