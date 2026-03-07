__int64 __fastcall PspReturnResourceQuota(unsigned int a1, __int64 a2, __int64 a3, int a4)
{
  int *v7; // rbx
  __int64 v9; // rdx
  _QWORD *v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  v7 = &PspQuotaExpansionDescriptors[14 * a1];
  PspLockQuotaExpansion(v7, &v12);
  if ( a3 )
    (*((void (__fastcall **)(_QWORD, __int64))v7 + 4))(a1, a3);
  if ( a4 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v9 + 8) != a2 + 80 || (v11 = *(_QWORD **)(a2 + 88), *v11 != a2 + 80) )
      __fastfail(3u);
    *v11 = v9;
    *(_QWORD *)(v9 + 8) = v11;
  }
  LOBYTE(v9) = v12;
  return PspUnlockQuotaExpansion(v7, v9);
}
