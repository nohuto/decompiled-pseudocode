__int64 __fastcall MiUnlinkZeroThreadFromActiveDomain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // r8d

  v3 = (_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 128) + 48LL * *(unsigned int *)(a2 + 96);
  --*(_DWORD *)(v4 + 32);
  v5 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(v5 + 8) != a2 + 184 || (v6 = *(_QWORD **)(a2 + 192), (_QWORD *)*v6 != v3) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v3 = 0LL;
  result = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 )
  {
    while ( *(_WORD *)(v8 + 8) != *(_WORD *)(a2 + 112) )
    {
      v8 += 16LL;
      result = (unsigned int)(result + 1);
      if ( (unsigned int)result >= v9 )
        goto LABEL_8;
    }
    result = *(_QWORD *)(a2 + 104);
    *(_QWORD *)v8 |= result;
  }
LABEL_8:
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_DWORD *)(a2 + 96) = -1;
  return result;
}
