void __fastcall sub_140065A80(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v4; // r8d
  int v5; // r8d
  unsigned __int64 v6; // r8
  const wchar_t *v7; // rdx
  PVOID v8; // rsi
  PVOID v9; // rdx
  __int64 (__fastcall **v10)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v11; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 368);
  v10 = &off_1400D41D0;
  v4 = v2 - 1;
  if ( !v4 )
  {
    v6 = 42LL;
    v7 = L"Active power scheme: Maximum Power Savings";
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 29LL;
    v7 = L"Active power scheme: Balanced";
LABEL_8:
    v14 = 0LL;
    v13 = 0LL;
    P = 0LL;
    v11 = 0;
    goto LABEL_9;
  }
  v11 = 0;
  P = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( v5 == 1 )
  {
    v6 = 40LL;
    v7 = L"Active power scheme: Maximum Performance";
  }
  else
  {
    v6 = 28LL;
    v7 = L"Active power scheme: Unknown";
  }
LABEL_9:
  sub_1400011A8(&v10, (__int64)v7, v6);
  v8 = P;
  v9 = &unk_1400D44E0;
  if ( P )
    v9 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v13);
  if ( v8 )
    ExFreePool(v8);
  sub_140003840(a2, 0);
}
