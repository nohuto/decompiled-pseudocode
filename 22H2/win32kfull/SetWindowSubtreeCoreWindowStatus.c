/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C00AD698
 * Callers:
 *     NtUserSetCoreWindow @ 0x1C00AD610 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  char v6; // bp

  result = a2 != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x200u) >> 9 != (_DWORD)result
    && ((*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, a1, 55554LL, 1LL);
    v5 = *(_QWORD **)(a1 + 112);
    if ( v5 )
    {
LABEL_6:
      while ( v5 != (_QWORD *)a1 )
      {
        if ( (*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2 )
        {
          v6 = 0;
          SetOrClrWF(a2, v5, 55554LL, 1LL);
        }
        else
        {
          v6 = 1;
        }
        result = v5[14];
        if ( !result || v6 )
        {
          result = v5[11];
          if ( !result )
          {
            while ( 1 )
            {
              v5 = (_QWORD *)v5[13];
              if ( !v5 )
                return result;
              result = v5[11];
              if ( result )
                break;
              if ( v5 == (_QWORD *)a1 )
                goto LABEL_6;
            }
          }
        }
        v5 = (_QWORD *)result;
      }
    }
  }
  return result;
}
