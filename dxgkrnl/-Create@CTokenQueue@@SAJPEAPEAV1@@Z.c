__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  __int64 v2; // rax

  v2 = operator new[](0x20uLL, 0x71744D54u, 256LL);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_DWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
  }
  *a1 = (struct CTokenQueue *)v2;
  return v2 == 0 ? 0xC0000017 : 0;
}
