/*
 * XREFs of ?vFree@FHOBJ@@QEAAXXZ @ 0x1C00B6FC0
 * Callers:
 *     ?bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z @ 0x1C00B6F7C (-bCleanupFontHash@@YAHPEAPEAU_FONTHASH@@@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FHOBJ::vFree(FHOBJ *this)
{
  _DWORD *v2; // rcx
  __int64 i; // rbp
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  _QWORD *v8; // rbx

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < v2[2]; i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD **)&v2[2 * i + 10];
      if ( v4 )
      {
        do
        {
          v6 = (_QWORD *)v4[1];
          v7 = (_QWORD *)*v4;
          if ( v6 )
          {
            do
            {
              v8 = (_QWORD *)*v6;
              Win32FreePool(v6);
              v6 = v8;
            }
            while ( v8 );
          }
          Win32FreePool(v4);
          v4 = v7;
        }
        while ( v7 );
      }
      v2 = (_DWORD *)*((_QWORD *)this + 1);
    }
    Win32FreePool(v2);
  }
  v5 = *(_QWORD **)this;
  *((_QWORD *)this + 1) = 0LL;
  *v5 = 0LL;
}
