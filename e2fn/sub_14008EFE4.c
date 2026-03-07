__int64 __fastcall sub_14008EFE4(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned __int64 v6; // r8
  const wchar_t *v7; // rdx

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v7 = L"Unsupported";
    goto LABEL_10;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v6 = 8LL;
    v7 = L"SendOnly";
    goto LABEL_11;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = L"ReceiveOnly";
LABEL_10:
    v6 = 11LL;
    goto LABEL_11;
  }
  if ( v5 == 1 )
  {
    v6 = 14LL;
    v7 = L"SendAndReceive";
  }
  else
  {
    v6 = 7LL;
    v7 = L"Unknown";
  }
LABEL_11:
  sub_1400011A8((_QWORD *)a1, (__int64)v7, v6);
  return a1;
}
