__int64 __fastcall sub_14002FE14(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  unsigned __int64 v7; // r8
  const wchar_t *v8; // rdx

  if ( !a2 )
    goto LABEL_12;
  v3 = a2 - 1;
  if ( !v3 )
  {
    v7 = 16LL;
    v8 = L"Operating System";
    goto LABEL_13;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v7 = 18LL;
    v8 = L"Link status change";
    goto LABEL_13;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = 12LL;
    v8 = L"Magic Packet";
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = 13LL;
    v8 = L"Packet Filter";
    goto LABEL_13;
  }
  if ( v6 != 1 )
  {
LABEL_12:
    v7 = 7LL;
    v8 = L"Unknown";
    goto LABEL_13;
  }
  v7 = 14LL;
  v8 = L"Bitmap Pattern";
LABEL_13:
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)a1 = &off_1400D41D0;
  sub_1400011A8((_QWORD *)a1, (__int64)v8, v7);
  return a1;
}
