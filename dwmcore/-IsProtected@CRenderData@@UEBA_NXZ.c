char __fastcall CRenderData::IsProtected(CRenderData *this)
{
  unsigned int v1; // eax
  char v2; // si
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = *((_DWORD *)this + 40);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0LL;
    v5 = v1;
    do
    {
      v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 17));
      if ( v6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 18LL) )
        {
          v7 = *(_QWORD *)(v4 + *((_QWORD *)this + 17)) + 72LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) )
            v2 = 1;
        }
      }
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
