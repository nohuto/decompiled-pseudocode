__int64 __fastcall EPATHOBJ::newpathrec(__int64 this, struct _PATHRECORD **a2, unsigned int *a3, unsigned int a4)
{
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 result; // rax

  v8 = *(_QWORD *)(this + 8);
  *a3 = 0;
  v6 = this;
  v7 = *(_QWORD *)(v8 + 24);
  LODWORD(v8) = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8) + 24LL;
    this = v7 + *(unsigned int *)(v7 + 16);
    if ( this > v9 )
    {
      this -= v9;
      v8 = this >> 3;
      *a3 = this >> 3;
    }
  }
  if ( (unsigned int)v8 < a4 && (unsigned int)v8 < 8 )
  {
    result = newpathalloc(this);
    v7 = result;
    if ( !result )
      return result;
    *(_QWORD *)result = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL);
    *(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) = result;
    *a3 = ((unsigned __int64)(unsigned int)(result + *(_DWORD *)(result + 16) - *(_DWORD *)(result + 8)) - 24) >> 3;
  }
  *a2 = *(struct _PATHRECORD **)(v7 + 8);
  return 1LL;
}
