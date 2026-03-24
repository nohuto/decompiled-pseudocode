/*
 * XREFs of ValidateNewParent @ 0x1C0078D78
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ProtectedContentAccessCheck @ 0x1C0078E6C (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C0078F00 (ValidateParentDepth.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *i; // rax

  v3 = a3;
  v4 = (_QWORD *)a2;
  if ( *(char *)(a1[5] + 19LL) < 0
    || *(char *)(*(_QWORD *)(a2 + 40) + 19LL) < 0
    || !(unsigned int)ValidateParentDepth(a1, a2) )
  {
LABEL_21:
    v6 = 87LL;
    goto LABEL_22;
  }
  if ( v3 || (unsigned int)ProtectedContentAccessCheck(a1) )
  {
    v7 = v4[3];
    if ( v7 == a1[3] )
    {
      if ( v4 == *(_QWORD **)(v7 + 104)
        || v4 == *(_QWORD **)(*(_QWORD *)(v7 + 8) + 24LL)
        || (v8 = v4[5], *(char *)(v8 + 235) < 0)
        || (a2 = a1[5], *(_DWORD *)(v8 + 236) == *(_DWORD *)(a2 + 236))
        && ((*(_BYTE *)(v8 + 234) ^ *(_BYTE *)(a2 + 234)) & 0x20) == 0 )
      {
        v9 = v4;
        while ( a1 != v9 )
        {
          v9 = (_QWORD *)v9[13];
          if ( !v9 )
          {
            for ( i = (_QWORD *)v4[15]; i; i = (_QWORD *)i[15] )
            {
              if ( a1 == i )
                goto LABEL_21;
            }
            return 1LL;
          }
        }
      }
    }
    goto LABEL_21;
  }
  v6 = 5LL;
LABEL_22:
  UserSetLastError(v6, a2, a3);
  return 0LL;
}
