__int64 __fastcall PsGetProcessCommonJob(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 1296);
  if ( v2 && (v3 = *(_QWORD *)(a2 + 1296)) != 0 && *(_QWORD *)(v2 + 1296) == *(_QWORD *)(v3 + 1296) )
    return *(_QWORD *)(v2 + 1296);
  else
    return 0LL;
}
