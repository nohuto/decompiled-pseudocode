/*
 * XREFs of DWP_GetIcon @ 0x1C0046864
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax

  if ( a2 > 2 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( a2 == 1 )
      return *(_QWORD *)(v2 + 272);
    v3 = *(_QWORD *)(v2 + 264);
    if ( !a2 )
    {
      if ( v3 )
      {
        v4 = HMValidateHandleNoRip(v3, 3);
        if ( v4 )
        {
          if ( *(char *)(v4 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v3;
  }
}
