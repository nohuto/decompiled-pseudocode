/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00CAB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::GetDispatchersName(
        CHidInput *this,
        enum CRIMBase::DispatcherHandleName *a2,
        unsigned int *a3)
{
  *a3 = 14;
  *(_OWORD *)a2 = xmmword_1C0252458;
  *((_OWORD *)a2 + 1) = xmmword_1C0252468;
  *((_OWORD *)a2 + 2) = xmmword_1C0252478;
  *((_QWORD *)a2 + 6) = 0x100000000FLL;
}
