__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v7; // r10
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdi
  volatile unsigned __int64 v11; // rax
  char v13; // cl

  *a3 = 0LL;
  v7 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v7 & 1) == 0 )
    return 3221435187LL;
  v8 = ((unsigned __int64)*v7 >> 12) & 0xFFFFFFFFFFLL;
  if ( v8 > qword_140C65820 )
    return 3221225557LL;
  if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 3221225557LL;
  v9 = 0;
  v10 = 48 * v8 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0
    || (v11 = *v7, (*v7 & 1) == 0)
    || (v11 & 0x200) != 0
    || v8 != ((v11 >> 12) & 0xFFFFFFFFFFLL)
    || (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
  {
    v9 = -1073741739;
  }
  else
  {
    if ( (v11 & 0x20) == 0 )
      MiWriteValidPteVolatile(v7, 1, 0);
    if ( !a4 || (v9 = MiTryLockLeafPage(a1, 1LL, a4), v9 >= 0) )
    {
      MiAddLockedPageCharge(v10, 1LL);
      v13 = *(_BYTE *)(v10 + 34) | 0x20;
      *a3 = v10;
      *(_BYTE *)(v10 + 34) = v13;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v9;
}
