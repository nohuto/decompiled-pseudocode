__int64 __fastcall NtGdiDrawStream(__int64 a1, __int64 a2, char *a3)
{
  size_t v4; // rsi
  unsigned int v6; // edi
  _BYTE *v7; // rbx
  _BYTE v9[256]; // [rsp+30h] [rbp-128h] BYREF

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = 0LL;
  if ( (unsigned int)a2 > 0x100 )
  {
    if ( (unsigned int)a2 > 0x2710000 )
      goto LABEL_7;
    v7 = (_BYTE *)AllocFreeTmpBuffer((unsigned int)a2);
    if ( !v7 )
      goto LABEL_7;
  }
  else
  {
    v7 = v9;
  }
  if ( &a3[v4] < a3 || (unsigned __int64)&a3[v4] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v7, a3, v4);
  v6 = GreDrawStream(a1, (unsigned int)v4, v7);
LABEL_7:
  if ( v7 && v7 != v9 )
    FreeTmpBuffer(v7, a2, a3);
  return v6;
}
