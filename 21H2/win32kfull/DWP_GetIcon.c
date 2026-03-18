/*
 * XREFs of DWP_GetIcon @ 0x1C010836C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall DWP_GetIcon(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v5; // rax

  if ( (unsigned int)a2 > 2 )
  {
    UserSetLastError(87LL, a2);
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
        v5 = HMValidateHandleNoRip(v3, 3);
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
