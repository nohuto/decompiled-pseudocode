struct _QUICKLOOKUP *__fastcall PFEOBJ::pql(struct PFE **this)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)*this + 3) & 0x200) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 13272LL);
    GreAcquireSemaphore(v3);
    *((_DWORD *)*this + 3) &= ~0x200u;
    bComputeQuickLookup(0LL, *this, 0);
    SEMOBJ::vUnlock((SEMOBJ *)&v3);
  }
  return (struct PFE *)((char *)*this + 104);
}
