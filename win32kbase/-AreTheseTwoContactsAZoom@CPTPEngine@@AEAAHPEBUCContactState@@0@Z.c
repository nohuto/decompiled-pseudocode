__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct CContactState *a2,
        const struct CContactState *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // r9
  int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // r8d
  int v13; // edx
  double v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (_DWORD *)((char *)this + 1208);
  v7 = 0;
  v8 = 6LL;
  do
  {
    if ( (*v4 & 1) != 0 && (v4[1] & 1) != 0 )
      ++v7;
    v4 += 100;
    --v8;
  }
  while ( v8 );
  if ( v7 != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 911) != 1 )
    return 0LL;
  v9 = *((_QWORD *)a2 + 1);
  v10 = v9 - *((_DWORD *)a2 + 12);
  v11 = HIDWORD(v9) - *((_DWORD *)a2 + 13);
  v12 = *((_QWORD *)a3 + 1) - *((_DWORD *)a3 + 12);
  v13 = HIDWORD(*((_QWORD *)a3 + 1)) - *((_DWORD *)a3 + 13);
  if ( !v10 && !v11 )
    return 0LL;
  if ( !v12 && !v13 )
    return 0LL;
  v15 = 0.0;
  if ( ndotprod(v10, v11, v12, v13, &v15) && *((double *)this + 476) >= v15 )
    return 1;
  return v3;
}
