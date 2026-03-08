/*
 * XREFs of ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800F1070
 * Callers:
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800F0EEC (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulationTransform::SetProperty(CResource *a1, int a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  _BYTE *v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx

  if ( a3 != 52 )
    goto LABEL_17;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v6 = 172LL;
        break;
      case 2:
        v6 = 184LL;
        break;
      case 3:
        v6 = 196LL;
        break;
      default:
        goto LABEL_17;
    }
  }
  else
  {
    v6 = 160LL;
  }
  v7 = (char *)a1 + v6;
  if ( !(CResource *)((char *)a1 + v6) )
  {
LABEL_17:
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, -2147024809, 0xE8u, 0LL);
    return v9;
  }
  v8 = *(_QWORD *)v7 - *(_QWORD *)a4;
  if ( *(_QWORD *)v7 == *(_QWORD *)a4 )
    v8 = *((unsigned int *)v7 + 2) - (unsigned __int64)*(unsigned int *)(a4 + 8);
  if ( v8 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a4;
    *((_DWORD *)v7 + 2) = *(_DWORD *)(a4 + 8);
    *((_BYTE *)a1 + 272) = 1;
    CResource::NotifyOnChanged((__int64)a1, 0, 0LL);
    CResource::InvalidateAnimationSources(a1, a2);
    CResource::InvalidateAnimationSources(a1, 4);
  }
  return v7 == 0LL ? 0x80070057 : 0;
}
