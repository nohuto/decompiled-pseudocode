/*
 * XREFs of ValidateNewParent @ 0x1C00CEFDC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ValidateParentDepth @ 0x1C00CEE6C (ValidateParentDepth.c)
 *     IsParentBandValid @ 0x1C00CEF24 (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C00CF0E8 (ProtectedContentAccessCheck.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2)
{
  int v4; // r11d
  _QWORD *v5; // rax
  _QWORD *i; // rax
  __int64 v8; // rcx

  if ( *(char *)(a1[5] + 19LL) >= 0
    && *(char *)(a2[5] + 19LL) >= 0
    && (unsigned int)ValidateParentDepth(a1, (__int64)a2) )
  {
    if ( !v4 && !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v8 = 5LL;
      goto LABEL_17;
    }
    if ( a2[3] == a1[3] && (unsigned int)IsParentBandValid((__int64)a1, (__int64)a2) )
    {
      v5 = a2;
      while ( a1 != v5 )
      {
        v5 = (_QWORD *)v5[13];
        if ( !v5 )
        {
          for ( i = (_QWORD *)a2[15]; i; i = (_QWORD *)i[15] )
          {
            if ( a1 == i )
              goto LABEL_16;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_16:
  v8 = 87LL;
LABEL_17:
  UserSetLastError(v8);
  return 0LL;
}
