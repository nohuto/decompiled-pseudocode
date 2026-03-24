/*
 * XREFs of ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x1C013C520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall OPM::CMutex::Unlock(struct _KMUTANT **this)
{
  struct _KMUTANT *v1; // rcx

  v1 = *this;
  if ( v1 )
    KeReleaseMutex(v1, 0);
}
