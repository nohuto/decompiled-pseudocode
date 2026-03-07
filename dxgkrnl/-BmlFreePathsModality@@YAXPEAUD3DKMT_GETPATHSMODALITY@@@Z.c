void __fastcall BmlFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  bool v2; // zf
  unsigned int v3; // esi
  __int64 v4; // rbx
  void *v5; // rcx

  if ( a1 )
  {
    v2 = *((_WORD *)a1 + 11) == 0;
    if ( *((_WORD *)a1 + 11) )
    {
      *((_WORD *)a1 + 10) = 0;
      v3 = 0;
      if ( !v2 )
      {
        do
        {
          v4 = 296LL * v3;
          operator delete(*(void **)((char *)a1 + v4 + 304));
          memset((char *)a1 + v4 + 56, 0, 0x128uLL);
          ++v3;
        }
        while ( v3 < *((unsigned __int16 *)a1 + 11) );
      }
      v5 = (void *)*((_QWORD *)a1 + 6);
      if ( v5 )
      {
        operator delete(v5);
        *((_QWORD *)a1 + 6) = 0LL;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
  }
}
