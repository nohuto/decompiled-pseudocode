void __fastcall RGNOBJ::vDownload(RGNOBJ *this, _OWORD *a2)
{
  unsigned int *v3; // r8
  int v4; // r9d
  unsigned int v5; // edx
  unsigned int i; // eax
  __int64 v7; // rcx
  __int128 v8; // [rsp+0h] [rbp-18h]

  v3 = *(unsigned int **)(*(_QWORD *)this + 32LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  while ( v4 )
  {
    --v4;
    DWORD1(v8) = v3[1];
    v5 = 0;
    HIDWORD(v8) = v3[2];
    for ( i = *v3; v5 < *v3; ++a2 )
    {
      v7 = (int)v5;
      v5 += 2;
      LODWORD(v8) = v3[v7 + 3];
      DWORD2(v8) = v3[v7 + 4];
      *a2 = v8;
      i = *v3;
    }
    v3 += i + 4;
  }
}
