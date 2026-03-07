__int64 __fastcall COREDEVICEACCESS::AcquireExclusive(__int64 a1, __int64 a2)
{
  COREACCESS *v2; // rdi
  unsigned int v3; // ebp

  v2 = (COREACCESS *)(a1 + 72);
  v3 = a2;
  if ( *(_BYTE *)(a1 + 144) )
  {
    COREACCESS::AcquireExclusive(a1 + 72, a2);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 200LL) != 1 )
      goto LABEL_5;
  }
  COREACCESS::AcquireExclusive(a1 + 8, v3);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 136) + 608LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREACCESS *)(a1 + 8));
  if ( *(_BYTE *)(a1 + 144) )
LABEL_5:
    COREACCESS::Release(v2);
  return 3221226166LL;
}
