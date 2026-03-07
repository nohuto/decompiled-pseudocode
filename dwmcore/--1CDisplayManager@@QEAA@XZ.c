void __fastcall CDisplayManager::~CDisplayManager(struct _RTL_CRITICAL_SECTION *this)
{
  char *v2; // rcx

  v2 = *(char **)&this[1].LockCount;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  DeleteCriticalSection(this);
}
