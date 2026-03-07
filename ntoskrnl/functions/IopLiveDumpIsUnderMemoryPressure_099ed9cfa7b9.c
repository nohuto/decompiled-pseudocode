bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1)
{
  bool v2; // bl
  int SystemInformation; // eax
  unsigned __int64 v4; // rdx
  int v5; // r9d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v2 = 0;
  memset(v12, 0, sizeof(v12));
  SystemInformation = ZwQuerySystemInformation(182LL, (__int64)v12);
  v4 = *((_QWORD *)&v12[0] + 1);
  v5 = SystemInformation;
  v6 = *(_QWORD *)&v12[0];
  if ( SystemInformation >= 0 && (*(_DWORD *)(a1 + 40) & 0x10) != 0 && (*(_DWORD *)(a1 + 80) & 0x2000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1176);
    if ( !v7 )
    {
      v7 = (((unsigned __int64)(10 * ((unsigned int)(*(_QWORD *)&v12[0] >> 20) >> 10)) << 20) + 1790967807) & 0xFFFFFFFFC0000000uLL;
      *(_QWORD *)(a1 + 1176) = v7;
    }
    v2 = v4 < v7;
LABEL_15:
    *(_QWORD *)(a1 + 1184) = v4;
    *(_QWORD *)(a1 + 1192) = v6;
    return v2;
  }
  v8 = *(_QWORD *)(a1 + 928);
  if ( v8 && *(_DWORD *)(v8 + 4) || (v9 = *(_QWORD *)(a1 + 936)) != 0 && *(_DWORD *)(v9 + 4) )
  {
    v2 = 1;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 944);
    if ( v10 )
      v2 = *(_DWORD *)(v10 + 4) != 0;
  }
  if ( v5 >= 0 )
    goto LABEL_15;
  return v2;
}
