/*
 * XREFs of NtFindAtom @ 0x1407DABC0
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14034C010 (MmSessionGetWin32Callouts.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExCallCallBack @ 0x1407D2DA4 (ExCallCallBack.c)
 *     RtlLookupAtomInAtomTable @ 0x1407DA4D0 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtFindAtom(char *Src, size_t Size, _WORD *a3)
{
  size_t v4; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  char PreviousMode; // r15
  char *v8; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int16 v11; // [rsp+20h] [rbp-258h] BYREF
  __int64 v12; // [rsp+28h] [rbp-250h] BYREF
  char *v13; // [rsp+30h] [rbp-248h]
  int v14; // [rsp+38h] [rbp-240h]
  _WORD v15[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = (unsigned int)Size;
  v12 = 0LL;
  v11 = 0;
  v14 = 0;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&v12);
  if ( !v12 )
    return 3221225506LL;
  if ( (unsigned int)v4 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = Src;
  v13 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a3;
      *(_WORD *)v9 = *(_WORD *)v9;
      v8 = v13;
    }
    if ( Src )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v4] > 0x7FFFFFFF0000LL || &Src[v4] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v8 = (char *)v15;
      v13 = (char *)v15;
      memmove(v15, Src, v4);
      v15[v4 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlLookupAtomInAtomTable(v12, v8, &v11);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v11;
  }
  return (unsigned int)result;
}
