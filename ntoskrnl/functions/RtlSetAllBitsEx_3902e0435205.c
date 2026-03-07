__int64 __fastcall RtlSetAllBitsEx(_QWORD *a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdi
  __int128 v3; // rax

  v1 = (_DWORD *)a1[1];
  *(_QWORD *)&v3 = *a1 & 0x1FLL;
  v2 = *a1 >> 5;
  *((_QWORD *)&v3 + 1) = v2 + ((_QWORD)v3 != 0LL);
  if ( *((_QWORD *)&v3 + 1) )
  {
    if ( ((unsigned __int8)v1 & 4) != 0 )
    {
      *v1 = -1;
      v3 = -(__int128)(unsigned __int64)v3;
      *((_QWORD *)&v3 + 1) = v2 + -*((_QWORD *)&v3 + 1) - 1LL;
      if ( !*((_QWORD *)&v3 + 1) )
        return v3;
      ++v1;
    }
    *(_QWORD *)&v3 = -1LL;
    memset(v1, 0xFFu, 8LL * (*((_QWORD *)&v3 + 1) >> 1));
    if ( (BYTE8(v3) & 1) != 0 )
      v1[*((_QWORD *)&v3 + 1) - 1] = -1;
  }
  return v3;
}
