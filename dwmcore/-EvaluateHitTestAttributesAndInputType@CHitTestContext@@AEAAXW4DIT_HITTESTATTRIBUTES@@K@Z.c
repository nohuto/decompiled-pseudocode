__int64 __fastcall CHitTestContext::EvaluateHitTestAttributesAndInputType(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int16 v5; // r10
  int v6; // r8d
  int v7; // ecx
  __int64 result; // rax
  int v9; // eax

  v3 = ConvertToInputType((unsigned int)a3, 0LL, a3, a1);
  v6 = 0;
  *(_DWORD *)(v4 + 96) = v3;
  *(_DWORD *)(v4 + 240) = 0;
  v7 = 0;
  *(_QWORD *)(v4 + 100) = 0LL;
  if ( (v5 & 1) != 0 )
  {
    *(_DWORD *)(v4 + 96) = 6;
    v9 = v5 & 2;
    if ( (v5 & 0x100) != 0 )
    {
      if ( (v5 & 4) == 0 )
      {
        v7 = v9 != 0 ? 16 : 32;
LABEL_21:
        *(_DWORD *)(v4 + 100) = v7;
        goto LABEL_2;
      }
    }
    else if ( (v5 & 4) == 0 )
    {
      v7 = v9 != 0 ? 4 : 8;
      goto LABEL_21;
    }
    v7 = 2 - (v9 != 0);
    goto LABEL_21;
  }
LABEL_2:
  if ( (v5 & 8) != 0 )
  {
    v7 |= 0x100u;
    *(_DWORD *)(v4 + 100) = v7;
  }
  result = *(unsigned int *)(v4 + 100);
  if ( !v7 )
    result = 1024LL;
  *(_DWORD *)(v4 + 100) = result;
  if ( (v5 & 0x40) != 0 )
  {
    *(_DWORD *)(v4 + 104) = 256;
    v6 = 256;
  }
  if ( (v5 & 0x80u) != 0 )
    *(_DWORD *)(v4 + 104) = v6 | 0x200;
  if ( (v5 & 0x10) != 0 )
    *(_DWORD *)(v4 + 240) |= 1u;
  if ( (v5 & 0x20) == 0 )
    *(_DWORD *)(v4 + 240) |= 2u;
  return result;
}
