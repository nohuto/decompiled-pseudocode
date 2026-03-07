__int64 __fastcall AbnormalDDEPost(struct tagDDECONV *a1, int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r8

  v2 = 0;
  if ( (*((_DWORD *)a1 + 20) & 2) == 0 )
  {
    v4 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
    v5 = 0LL;
    if ( v4 )
      v5 = *v4;
    PostMessage(*((_QWORD *)a1 + 6), 0x3E1u, v5, 0LL);
  }
  LOBYTE(v2) = a2 == 993;
  return v2;
}
