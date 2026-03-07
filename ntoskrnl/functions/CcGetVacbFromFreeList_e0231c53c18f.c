__int64 *__fastcall CcGetVacbFromFreeList(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  int *v4; // r8
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 **v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax

  v2 = 0LL;
  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 1232);
    v4 = (int *)(a1 + 1248);
  }
  else
  {
    v3 = &CcVacbFreeList;
    v4 = &CcNumberOfFreeVacbs;
  }
  v5 = (__int64 *)*v3;
  if ( (__int64 *)*v3 != v3 )
  {
    v6 = *v5;
    v2 = v5 - 2;
    ++CcNumberOfMappedVacbs;
    if ( *(__int64 **)(v6 + 8) != v5 || (v7 = (__int64 **)v5[1], *v7 != v5) )
      __fastfail(3u);
    *v7 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !*v4 )
      KeBugCheckEx(0x34u, 0x35DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    --*v4;
    v8 = v2[4];
    v9 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)v2 - v8 - 16) >> 3);
    if ( (unsigned int)v9 > *(_DWORD *)(v8 + 8) )
      *(_DWORD *)(v8 + 8) = v9;
    if ( !*v2 )
      CcReferenceVacbArray(*(unsigned int *)v2[4]);
    v2[1] = -1LL;
  }
  return v2;
}
