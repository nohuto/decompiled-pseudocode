__int64 __fastcall bMakeOpaque(struct SURFACE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  result = 0LL;
  if ( !*((_WORD *)a1 + 50) )
  {
    Gre::Base::Globals(a1);
    *((_DWORD *)a1 + 138) = *((unsigned __int16 *)a1 + 50);
    *((_DWORD *)a1 + 139) = *((_DWORD *)a1 + 28);
    *((_QWORD *)a1 + 68) = *((_QWORD *)a1 + 6);
    *((_WORD *)a1 + 50) = 3;
    v4 = SGDGetSessionState(v3);
    SURFACE::hdev(a1, *(HDEV *)(*(_QWORD *)(v4 + 32) + 23376LL));
    *((_DWORD *)a1 + 28) |= 0x23A5EFu;
    return 1LL;
  }
  return result;
}
