__int64 __fastcall HalpAuditGetExtendedBiosDataArea(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int *v5; // rax
  unsigned int v6; // ebx

  v5 = (unsigned int *)MmMapIoSpaceEx(1856LL, 8LL, 4u);
  v6 = 0;
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      *a2 = *v5;
      *a3 = v5[1];
    }
    else
    {
      v6 = -1073741823;
    }
    MmUnmapIoSpace(v5, 8uLL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
