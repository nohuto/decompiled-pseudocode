void __fastcall AlpcpExposeCapturedContextAttribute(int a1, _DWORD *a2, int a3, __int64 a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( (a3 & 0x20000000) != 0 )
    {
      v5 = a3;
      v6 = a3 & 0x40000000;
      v7 = v5 >> 63;
      if ( a1 < 0 )
      {
        v10 = (v7 & 0xC) + 8;
        v11 = v10 + 16;
        if ( !v6 )
          v11 = v10;
        *(_DWORD *)(v11 + a4) = *a2;
        *(_DWORD *)(v11 + a4 + 4) = a2[2];
        *(_DWORD *)(v11 + a4 + 8) = a2[4];
        *(_DWORD *)(v11 + a4 + 12) = a2[5];
        *(_DWORD *)(v11 + a4 + 16) = a2[6];
      }
      else
      {
        v8 = (v7 & 0x18) + 8;
        v9 = v8 + 32;
        if ( !v6 )
          v9 = v8;
        *(_OWORD *)(v9 + a4) = *(_OWORD *)a2;
        *(_OWORD *)(v9 + a4 + 16) = *((_OWORD *)a2 + 1);
      }
      if ( *(_QWORD *)a2 )
        *(_DWORD *)(a4 + 4) |= 0x20000000u;
    }
  }
}
