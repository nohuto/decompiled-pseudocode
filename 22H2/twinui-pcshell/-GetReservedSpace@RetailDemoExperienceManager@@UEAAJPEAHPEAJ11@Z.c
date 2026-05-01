/*
 * XREFs of ?GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z @ 0x18025B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

__int64 __fastcall RetailDemoExperienceManager::GetReservedSpace(
        RetailDemoExperienceManager *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5)
{
  int v9; // eax
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 336));
  if ( *((_DWORD *)this + 68) || (v9 = 0, *((_DWORD *)this + 70)) )
    v9 = 1;
  *a2 = v9;
  *a5 = *((_DWORD *)this + 57);
  if ( *((_DWORD *)this + 74) )
  {
    *a3 = 0;
    v10 = 0;
  }
  else
  {
    *a3 = *((_DWORD *)this + 68);
    v10 = *((_DWORD *)this + 70);
  }
  *a4 = v10;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
