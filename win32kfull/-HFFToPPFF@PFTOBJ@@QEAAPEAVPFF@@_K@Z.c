/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C026D39C
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E2C90 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  struct PFF *result; // rax

  Gre::Base::Globals(this);
  v4 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v5 )
  {
    do
    {
      for ( result = *(struct PFF **)(*(_QWORD *)this + 8 * v4 + 40); result; result = (struct PFF *)*((_QWORD *)result + 1) )
      {
        if ( a2 == *((_QWORD *)result + 10) )
          return result;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  return 0LL;
}
