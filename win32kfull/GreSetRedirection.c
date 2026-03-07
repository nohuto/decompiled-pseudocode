__int64 __fastcall GreSetRedirection(__int64 a1, __int64 a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // edx

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 5;
  v4 = HmgShareLockCheck(a1, a2);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 116);
    v6 = *(_DWORD *)(v4 + 112);
    if ( v2 )
    {
      v7 = v5 | 0x80;
      v8 = v6 | 0x800;
    }
    else
    {
      v7 = v5 & 0xFFFFFF7F;
      v8 = v6 & 0xFFFFF7FF;
    }
    *(_DWORD *)(v4 + 112) = v8;
    v3 = 1;
    *(_DWORD *)(v4 + 116) = v7;
    DEC_SHARE_REF_CNT(v4);
  }
  return v3;
}
