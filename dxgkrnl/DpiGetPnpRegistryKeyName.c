__int64 __fastcall DpiGetPnpRegistryKeyName(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1 + 64);
  switch ( a2 )
  {
    case 1:
      v4 = v3 + 512;
      goto LABEL_4;
    case 2:
      v4 = v3 + 528;
LABEL_4:
      *a3 = v4;
      return 0LL;
    case 3:
      v4 = *(_QWORD *)(v3 + 40) + 40LL;
      goto LABEL_4;
  }
  WdLogSingleEntry1(2LL, a2);
  return 3221225485LL;
}
