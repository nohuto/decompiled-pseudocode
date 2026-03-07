__int64 __fastcall PsQuerySectionSignatureInformation(_KPROCESS *a1, _BYTE *a2)
{
  struct _EX_RUNDOWN_REF *p_Blink; // rdi
  BOOLEAN v3; // r8
  __int64 v6; // rcx
  unsigned int v7; // ebx

  p_Blink = (struct _EX_RUNDOWN_REF *)&a1[1].ProfileListHead.Blink;
  v3 = 0;
  if ( a1 == KeGetCurrentThread()->Process || (v3 = ExAcquireRundownProtection_0(p_Blink)) != 0 )
  {
    v6 = a1[1].Affinity.StaticBitmap[17];
    if ( v6 )
    {
      *a2 = *(_BYTE *)(*(_QWORD *)MiSectionControlArea(v6) + 15LL) >> 4;
      v7 = 0;
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v3 )
      ExReleaseRundownProtection_0(p_Blink);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v7;
}
