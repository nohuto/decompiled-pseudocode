__int64 __fastcall InteractiveControlParser::CreateAndLinkComponent(
        struct _HIDP_VALUE_CAPS *a1,
        int a2,
        struct _INTERACTIVECTRL_CAPABILITIES *a3,
        struct tagINTERACTIVECTRL_COMPONENT_ENTRY **a4)
{
  __int64 UsageMin; // rdx
  unsigned int v7; // ebp
  __int64 UsagePage; // rcx
  int ComponentType; // eax
  __int64 v12; // r15
  LONG PhysicalMin; // ecx
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  USAGE v17; // cx

  UsageMin = a1->Range.UsageMin;
  v7 = 0;
  UsagePage = a1->UsagePage;
  *a4 = 0LL;
  ComponentType = InteractiveControlParser::GetComponentType(UsagePage, UsageMin);
  v12 = ComponentType;
  if ( !ComponentType )
  {
    *((_DWORD *)a3 + 39) = 1;
    return v7;
  }
  if ( a2
    || (PhysicalMin = a1->PhysicalMin, PhysicalMin != a1->PhysicalMax)
    || a1->LogicalMin != a1->LogicalMax
    || PhysicalMin )
  {
    v14 = Win32AllocPoolZInit(136LL, 1819440195LL);
    if ( !v14 )
      return (unsigned int)-1073741670;
    v15 = (__int64 *)((char *)a3 + 112);
    v16 = *((_QWORD *)a3 + 14);
    if ( *(struct _INTERACTIVECTRL_CAPABILITIES **)(v16 + 8) != (struct _INTERACTIVECTRL_CAPABILITIES *)((char *)a3 + 112) )
      __fastfail(3u);
    *(_QWORD *)v14 = v16;
    *(_QWORD *)(v14 + 8) = v15;
    *(_QWORD *)(v16 + 8) = v14;
    *v15 = v14;
    switch ( (_DWORD)v12 )
    {
      case 1:
        *(_DWORD *)(v14 + 96) = 2;
        break;
      case 2:
      case 3:
      case 4:
        goto LABEL_22;
      case 5:
        v17 = a1->Range.UsageMin;
        if ( (unsigned __int16)(v17 - 1) <= 4u )
        {
          *(_DWORD *)(v14 + 96) = 4 << (v17 - 1);
          if ( a1->Range.UsageMin == 2 )
          {
            *(_DWORD *)(v14 + 96) = 128;
            *((_DWORD *)a3 + 40) = 1;
          }
        }
        break;
      default:
        if ( (_DWORD)v12 != 7 )
        {
LABEL_22:
          *(_DWORD *)(v14 + 96) = 0;
        }
        else if ( a1->UsagePage == 13 && a1->Range.UsageMin == 51 )
        {
          *(_DWORD *)(v14 + 96) = 1;
        }
        break;
    }
    *(_DWORD *)(v14 + 16) = v12;
    *(_DWORD *)(v14 + 20) = *((_DWORD *)a3 + v12 + 17);
    *(_OWORD *)(v14 + 24) = *(_OWORD *)&a1->UsagePage;
    *(_OWORD *)(v14 + 40) = *(_OWORD *)&a1->HasNull;
    *(_OWORD *)(v14 + 56) = *(_OWORD *)&a1->UnitsExp;
    *(_OWORD *)(v14 + 72) = *(_OWORD *)&a1->PhysicalMin;
    *(_QWORD *)(v14 + 88) = *(_QWORD *)&a1->NotRange.DesignatorIndex;
    ++*((_DWORD *)a3 + v12 + 17);
    ++*((_DWORD *)a3 + 26);
    *(_DWORD *)(v14 + 124) = 1;
    *(_DWORD *)(v14 + 112) = 1;
    *(_DWORD *)(v14 + 108) = 1;
    if ( !a2 )
    {
      InteractiveControlParser::GetComponentMultiplier(
        (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v14,
        (int *)(v14 + 116),
        (int *)(v14 + 120));
      *(_DWORD *)(v14 + 112) = InteractiveControlParser::GetScaledComponentValue(
                                 (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v14,
                                 1);
    }
    if ( *(_DWORD *)(v14 + 16) == 8 && a1->LogicalMin == a1->LogicalMax )
      *(_DWORD *)(v14 + 100) = 1;
    *a4 = (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v14;
  }
  return v7;
}
