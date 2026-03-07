__int64 __fastcall COREADAPTERACCESS::AcquireExclusive(__int64 a1, __int64 a2)
{
  COREACCESS *v2; // rdi
  unsigned int v4; // r14d

  v2 = (COREACCESS *)(a1 + 72);
  v4 = a2;
  COREACCESS::AcquireExclusive(a1 + 72, a2);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 200LL) == 1 )
  {
    if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(a1 + 88)
      || (COREACCESS::AcquireExclusive(a1 + 8, v4), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 200LL) == 1) )
    {
      *(_BYTE *)(a1 + 1) = 1;
      return 0LL;
    }
    COREACCESS::Release((COREACCESS *)(a1 + 8));
  }
  COREACCESS::Release(v2);
  return 3221226166LL;
}
