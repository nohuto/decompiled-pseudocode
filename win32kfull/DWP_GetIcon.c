/*
 * XREFs of DWP_GetIcon @ 0x1C00E542C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // rax

  if ( (unsigned int)a2 > 2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( (_DWORD)a2 == 1 )
      return *(_QWORD *)(v2 + 272);
    v3 = *(_QWORD *)(v2 + 264);
    if ( !(_DWORD)a2 )
    {
      if ( v3 )
      {
        LOBYTE(a2) = 3;
        v5 = HMValidateHandleNoRip(v3, a2);
        if ( v5 )
        {
          if ( *(char *)(v5 + 80) < 0 )
            return 0LL;
        }
      }
    }
    return v3;
  }
}
