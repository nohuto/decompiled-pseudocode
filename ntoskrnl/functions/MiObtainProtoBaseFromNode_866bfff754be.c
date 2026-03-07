__int64 __fastcall MiObtainProtoBaseFromNode(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // eax

  v3 = a1[3] & 7LL;
  if ( v3 <= 4 )
  {
    if ( !(_DWORD)v3 )
    {
      v4 = *(a1 - 14);
      v5 = *((unsigned int *)a1 - 19);
LABEL_4:
      *a2 = v5;
      return v4;
    }
    v7 = v3 - 1;
    if ( !v7 )
    {
      v4 = *(a1 - 6);
      v5 = *((unsigned int *)a1 - 3);
      goto LABEL_4;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v9 = *(a1 - 7) + 128LL;
      v5 = 0LL;
      v4 = *(_QWORD *)(*(a1 - 7) + 136LL);
      do
      {
        v10 = *(unsigned int *)(v9 + 44);
        v9 = *(_QWORD *)(v9 + 16);
        v5 += v10;
      }
      while ( v9 );
      goto LABEL_4;
    }
    v11 = v8 - 1;
    if ( !v11 )
    {
      v4 = a1[6];
      v5 = a1[4];
      goto LABEL_4;
    }
    if ( v11 == 1 )
    {
      v4 = a1[4];
      v5 = a1[5];
      goto LABEL_4;
    }
  }
  return 0LL;
}
