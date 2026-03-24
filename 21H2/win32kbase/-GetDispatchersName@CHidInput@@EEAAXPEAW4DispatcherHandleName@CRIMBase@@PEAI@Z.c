/*
 * XREFs of ?GetDispatchersName@CHidInput@@EEAAXPEAW4DispatcherHandleName@CRIMBase@@PEAI@Z @ 0x1C00BBCD0
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
  *(_OWORD *)a2 = xmmword_1C02112B0;
  *((_OWORD *)a2 + 1) = xmmword_1C02112C0;
  *((_OWORD *)a2 + 2) = xmmword_1C02112D0;
  *((_QWORD *)a2 + 6) = 0x100000000FLL;
}
