__int64 __fastcall CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(CCD_TOPOLOGY *this, const struct _LUID *a2)
{
  __int64 v2; // r8
  unsigned int v3; // r9d
  unsigned int i; // r10d
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 20); ++i )
  {
    v6 = 296LL * i;
    if ( *(_DWORD *)(v6 + v2 + 72) == a2->LowPart && *(_DWORD *)(v6 + v2 + 76) == a2->HighPart )
    {
      v7 = *(_QWORD *)(v6 + v2 + 56);
      if ( (v7 & 0x10000000000000LL) != 0 )
      {
        v3 = 1;
        *(_QWORD *)(v6 + v2 + 56) = v7 & 0xFFFFFFFFFFFFFEFEuLL;
        *(_QWORD *)(*((_QWORD *)this + 8) + v6 + 64) &= 0xFFFFFFFFFFFFFEFEuLL;
        *(_QWORD *)(*((_QWORD *)this + 8) + v6 + 56) &= ~0x10000000000000uLL;
      }
    }
    v2 = *((_QWORD *)this + 8);
  }
  return v3;
}
