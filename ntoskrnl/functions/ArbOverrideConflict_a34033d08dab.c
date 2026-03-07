char __fastcall ArbOverrideConflict(__int64 a1, __int64 a2)
{
  char v2; // si
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  bool v7; // cf
  __int64 v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  memset(v9, 0, 32);
  v2 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
    return 0;
  RtlGetFirstRange(*(__int64 **)(a1 + 48), (__int64)v9, &v10);
  v4 = v10;
  if ( v10 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    do
    {
      v6 = *v4;
      v7 = v5 < *v4;
      if ( v5 > *v4 )
      {
        if ( v4[1] < v5 )
          goto LABEL_13;
        v7 = v5 < v6;
      }
      if ( (!v7 || *(_QWORD *)(a2 + 24) >= v6) && ((_BYTE)v4[4] & *(_BYTE *)(a2 + 67)) == 0 )
      {
        if ( v4[3] != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) || (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 36LL) & 2) == 0 )
          return 0;
        v2 = 1;
        *(_QWORD *)(a2 + 8) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)a2 = v5;
      }
LABEL_13:
      RtlGetNextRange(v9, &v10, 1);
      v4 = v10;
    }
    while ( v10 );
  }
  return v2;
}
