/*
 * XREFs of ?EnsureRootVisuals@CPerMonitorWindowRepresentation@@AEAAJXZ @ 0x1800BEC0C
 * Callers:
 *     ?EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindowData@@PEAPEAUSecondaryRepresentation@1@@Z @ 0x1800BECDC (-EnsureSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@PEAVCWindow.c)
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BF14C (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026ED0 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::EnsureRootVisuals(CPerMonitorWindowRepresentation *this)
{
  unsigned int v1; // ebx
  struct CVisual *v2; // rdi
  int v4; // eax
  CBaseObject *v5; // rcx
  int v6; // eax
  struct CVisual *v8; // [rsp+40h] [rbp+8h] BYREF
  struct CVisual *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    v4 = CVisual::Create(&v8);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v6 = CVisual::Create(&v9);
      v1 = v6;
      if ( v6 >= 0 )
      {
        v5 = 0LL;
        *((_QWORD *)this + 2) = v8;
        *((_QWORD *)this + 3) = v9;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xE0u);
        v5 = v8;
        v2 = v9;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xDFu);
      v5 = v8;
    }
    if ( v5 )
      CBaseObject::Release(v5);
    if ( v2 )
      CBaseObject::Release(v2);
  }
  return v1;
}
