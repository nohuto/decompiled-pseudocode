/*
 * XREFs of MultiUserCleanupPathAlloc @ 0x1C00F6040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultiUserCleanupPathAlloc(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  _QWORD *v2; // rcx

  v1 = Gre::Base::Globals(a1);
  if ( *((_QWORD *)v1 + 755) )
  {
    GreDeleteSemaphore();
    *((_QWORD *)v1 + 755) = 0LL;
  }
  while ( 1 )
  {
    v2 = (_QWORD *)*((_QWORD *)v1 + 756);
    if ( !v2 )
      break;
    *((_QWORD *)v1 + 756) = *v2;
    Win32FreePool(v2);
  }
}
