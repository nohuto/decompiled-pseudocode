char *__fastcall RFONTOBJ::pchTranslateUMPD(RFONTOBJ *this, const char *a2, void **a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rbp
  __int64 v7; // rcx
  __int64 *v8; // rdx
  unsigned int v9; // r10d
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v14; // rbx
  __int64 CurrentProcess; // rax
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  if ( (unsigned __int64)a2 < 0x10000 )
    return 0LL;
  if ( a2 > MmHighestUserAddress )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( !v7 )
    return 0LL;
  v8 = *(__int64 **)(v7 + 200);
  if ( !v8 )
    return 0LL;
  v9 = *(_DWORD *)(v7 + 36);
  v10 = 0LL;
  if ( !v9 )
    return 0LL;
  while ( 1 )
  {
    v11 = *v8;
    if ( *v8 )
    {
      if ( !(_DWORD)v10 )
      {
        v4 = *(_QWORD *)(v11 + 32);
        v3 = *(_QWORD *)(v11 + 104);
      }
      v12 = *(_QWORD *)(v11 + 104);
      if ( (v12 || (v12 = v3) != 0 || (v12 = *(_QWORD *)(v11 + 16)) != 0)
        && v12 <= (unsigned __int64)a2
        && (unsigned __int64)a2 < v12 + *(unsigned int *)(v11 + 24) )
      {
        break;
      }
    }
    ++v8;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      return 0LL;
  }
  if ( *(_QWORD *)(v11 + 32) )
  {
    v4 = *(_QWORD *)(v11 + 32);
  }
  else if ( !v4 )
  {
    return 0LL;
  }
  *a3 = 0LL;
  v14 = *(unsigned int *)(v11 + 24);
  v16 = 0LL;
  v17 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v11, v8, v10);
  if ( (int)MmMapViewOfSection(v4, CurrentProcess, a3, 0LL, v14, &v17, &v16, 2, 0, 2) < 0 )
  {
    *a3 = 0LL;
    return 0LL;
  }
  return (char *)*a3 + (_QWORD)a2 - v12;
}
