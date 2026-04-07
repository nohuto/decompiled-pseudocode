/*
 * XREFs of ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800A5928
 * Callers:
 *     ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x1800A59D0 (--_GCPenBarrelKeyVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180085058 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18009FE84 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 */

void __fastcall CPenBarrelKeyVisual::~CPenBarrelKeyVisual(CPenBarrelKeyVisual *this)
{
  unsigned int v1; // edx
  __int64 v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx

  v1 = *((_DWORD *)this + 74);
  *(_QWORD *)this = &CPenBarrelKeyVisual::`vftable';
  CContactManager::PostKeystateFeedbackUpdate(
    *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 24),
    v1,
    0,
    (const struct tagPOINT *)((char *)this + 300),
    0);
  if ( *((_BYTE *)this + 342) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v3, (__int64)&UdwmPenBarrel_Stop, *((unsigned int *)this + 74));
  v4 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v5 )
    CBaseObject::Release(v5);
  *(_QWORD *)this = &CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
