/*
 * XREFs of ViXdvBindXdvDDIWrappers @ 0x1409C9C50
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C9E2C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1405A0924 (VfUtilDbgPrint.c)
 *     ViXdvSearchAllThunkArrays @ 0x1409CA110 (ViXdvSearchAllThunkArrays.c)
 */

char __fastcall ViXdvBindXdvDDIWrappers(__int64 (__fastcall *a1)(__int64 *, __int64), __int64 a2)
{
  char result; // al
  char v3; // bl
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  unsigned int i; // r11d

  result = (char)a1;
  v3 = 0;
  ViXdvThunksNoXdvEntry = 0;
  ViXdvThunksBoundToXdv = 0;
  ViXdvThunksNotFound = 0;
  ViXdvThunksNotPristine = 0;
  ViXdvThunksShared = 0;
  if ( a1 )
  {
    LOBYTE(a2) = CmStateSeparationEnabled;
    v4 = (_DWORD *)a1(&VfRuleClasses, a2);
    v5 = v4;
    if ( v4 )
    {
      if ( *v4 == 4 )
      {
        for ( i = 0; i < v5[1]; ++i )
        {
          if ( *(_QWORD *)&v5[2 * i + 2] )
          {
            if ( !(unsigned __int8)ViXdvSearchAllThunkArrays(i) )
              ++ViXdvThunksNotFound;
          }
          else
          {
            ++ViXdvThunksNoXdvEntry;
          }
        }
        return 1;
      }
      else
      {
        VfUtilDbgPrint("XDV DDI version mismatch: kernel version %d   driver version %d\n", 4, *v4);
      }
    }
    return v3;
  }
  return result;
}
