__int64 __fastcall NtGdiEnumFonts(
        HDC a1,
        ULONG64 a2,
        _DWORD *a3,
        unsigned int a4,
        char *Src,
        int a6,
        ULONG64 a7,
        volatile void *Address)
{
  void *v10; // rdi
  unsigned int v11; // esi
  size_t v12; // r8
  unsigned int *v13; // r8
  unsigned int v14; // eax
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  void *v17; // [rsp+48h] [rbp-30h]
  unsigned int v18; // [rsp+88h] [rbp+10h]

  v18 = a2;
  v10 = 0LL;
  v17 = 0LL;
  v11 = 1;
  v16 = 0;
  if ( Src )
  {
    if ( a4 - 1 > 0x1F )
      return 0LL;
    v10 = (void *)AllocFreeTmpBuffer(2 * a4);
    v17 = v10;
    if ( v10 )
    {
      v12 = 2LL * a4;
      if ( &Src[v12] < Src || (unsigned __int64)&Src[v12] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, Src, v12);
      *((_WORD *)v10 + a4 - 1) = 0;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v11 )
  {
    v13 = (unsigned int *)a7;
    if ( a7 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    v16 = *v13;
    if ( Address )
      ProbeForWrite(Address, v14, 4u);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 && a1 == (HDC)-589410304LL )
      a1 = *(HDC *)(gpDispInfo + 56LL);
    v11 = GreEnumFonts(a1, v18, a6, &v16, (void *)Address);
    a3 = (_DWORD *)a7;
    a2 = MmUserProbeAddress;
    if ( a7 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v16;
  }
  if ( v10 )
    FreeTmpBuffer(v10, a2, a3);
  return v11;
}
