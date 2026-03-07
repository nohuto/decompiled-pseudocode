__int64 __fastcall MiIsUserQueryVmCallerTrusted(__int64 a1)
{
  void *v2; // rbx
  unsigned int v3; // edi
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v2 = (void *)PsReferenceEffectiveToken(a1, 0x74726853u, &v6, &v5, (__int64)&v7, 0LL);
  v3 = 0;
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, 1) )
    v3 = 1;
  if ( v6 == 1 )
  {
    ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(a1 + 544) + 1208LL), (unsigned __int64)v2, 0x74726853u);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v3;
}
