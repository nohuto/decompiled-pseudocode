__int64 ExUpdateLicenseData()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  if ( qword_140D53510 )
    return qword_140D53510(Blink, v2, v0);
  else
    return SLUpdateLicenseDataInternal(Blink, v2, v0);
}
