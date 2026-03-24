/*
 * XREFs of ??1CAutoMutex@OPM@@QEAA@XZ @ 0x1C0087010
 * Callers:
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C013FA0C (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall OPM::CAutoMutex::~CAutoMutex(struct _KMUTANT ***this)
{
  struct _KMUTANT *v2; // rcx

  v2 = **this;
  if ( v2 )
    KeReleaseMutex(v2, 0);
  *this = 0LL;
}
