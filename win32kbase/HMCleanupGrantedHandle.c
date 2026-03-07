void *__fastcall HMCleanupGrantedHandle(__int64 a1)
{
  _DWORD *i; // rbx
  unsigned int v3; // ecx
  __int64 v4; // rdx
  _QWORD *v5; // r9
  void *result; // rax

  for ( i = gpJobsList; i; i = *(_DWORD **)i )
  {
    v3 = i[12];
    v4 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(*((_QWORD *)i + 7) + 8 * v4);
        if ( *v5 == a1 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3 )
          goto LABEL_7;
      }
      result = memmove(v5, v5 + 1, 8LL * (v3 - (unsigned int)v4 - 1));
      --i[12];
    }
LABEL_7:
    ;
  }
  return result;
}
