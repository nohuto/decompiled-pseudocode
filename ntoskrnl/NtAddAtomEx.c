__int64 __fastcall NtAddAtomEx(char *Src, size_t Size, _WORD *a3, unsigned int a4)
{
  size_t v6; // rbx
  char PreviousMode; // r15
  char *v9; // r14
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int16 v12; // [rsp+20h] [rbp-268h] BYREF
  __int64 v13; // [rsp+28h] [rbp-260h] BYREF
  char *v14; // [rsp+30h] [rbp-258h]
  _WORD v15[256]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (unsigned int)Size;
  v13 = 0LL;
  v12 = 0;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  PsInvokeWin32Callout(2, (__int64)&v13, 0, 0LL);
  if ( !v13 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = Src;
  v14 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a3;
      *(_WORD *)v10 = *(_WORD *)v10;
      v9 = v14;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v6] > 0x7FFFFFFF0000LL || &Src[v6] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = (char *)v15;
      v14 = (char *)v15;
      memmove(v15, Src, v6);
      v15[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v13, v9, &v12, a4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v12;
  }
  return (unsigned int)result;
}
