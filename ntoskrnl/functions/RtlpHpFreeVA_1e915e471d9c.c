__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  v4 = 0;
  if ( (a3 & 0xFEFFFFFF) != 0x8000 || (a3 & 0x1000000) != 0 )
  {
    if ( BYTE1(*a4) != 4 )
      return (unsigned int)RtlpHpEnvFreeVA();
  }
  else
  {
    v8 = *a1;
    v9 = v8 + *a2;
    v10 = (v8 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v11 = v9 - v10;
    *a1 = v10;
    *a2 = v11;
    if ( v11 )
      RtlpHpVaMgrCtxFree(&unk_140C70DD8, a1, a2);
  }
  return v4;
}
