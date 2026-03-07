__int64 __fastcall GreRemoveFontMemResourceEx(Gre::Base *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // esi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  struct PFT *v4; // rcx
  struct PFF *PFFFromId; // rax
  struct PFT *v7; // [rsp+20h] [rbp-18h] BYREF
  struct PFF **v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (unsigned int)a1;
  v8 = 0LL;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v3 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v3 + 6), 14LL);
  v4 = (struct PFT *)*((_QWORD *)v3 + 796);
  v7 = v4;
  if ( v4 && (PFFFromId = GetPFFFromId(v4, v2, &v8)) != 0LL && (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
  {
    return PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v7, PFFFromId, v8, 48);
  }
  else
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 6));
  }
  return v1;
}
