/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C0097A0C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetCoreWindow @ 0x1C0097AA0 (NtUserSetCoreWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

char __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, int a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  char v6; // bp

  LODWORD(v4) = a2 != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x200u) >> 9 != (_DWORD)v4
    && ((*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2) )
  {
    LOBYTE(v4) = SetOrClrWF(a2, (__int64 *)a1, 0xD902u, 1);
    v5 = *(__int64 **)(a1 + 112);
    if ( v5 )
    {
LABEL_6:
      while ( v5 != (__int64 *)a1 )
      {
        if ( (*(_DWORD *)(a1 + 320) & 0x1000) == 0 || a2 )
        {
          v6 = 0;
          SetOrClrWF(a2, v5, 0xD902u, 1);
        }
        else
        {
          v6 = 1;
        }
        v4 = (__int64 *)v5[14];
        if ( !v4 || v6 )
        {
          v4 = (__int64 *)v5[11];
          if ( !v4 )
          {
            while ( 1 )
            {
              v5 = (__int64 *)v5[13];
              if ( !v5 )
                return (char)v4;
              v4 = (__int64 *)v5[11];
              if ( v4 )
                break;
              if ( v5 == (__int64 *)a1 )
                goto LABEL_6;
            }
          }
        }
        v5 = v4;
      }
    }
  }
  return (char)v4;
}
