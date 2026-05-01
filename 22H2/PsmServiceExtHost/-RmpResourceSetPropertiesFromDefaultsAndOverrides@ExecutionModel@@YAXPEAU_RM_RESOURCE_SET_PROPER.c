/*
 * XREFs of ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180011BB0
 * Callers:
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180002FE8 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800119D0 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
        ExecutionModel *this,
        struct _RM_RESOURCE_SET_PROPERTIES *a2,
        struct ExecutionModel::_ResourceSetInfo *a3)
{
  __int64 v3; // rax
  int v4; // r8d

  v3 = *((_QWORD *)this + 5);
  if ( (v3 & 8) == 0 )
  {
    *((_QWORD *)this + 9) = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 5) |= 8uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 4) == 0 )
  {
    *((_QWORD *)this + 8) = *((_QWORD *)a2 + 3);
    *((_QWORD *)this + 5) |= 4uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 2) == 0 )
  {
    *((_QWORD *)this + 7) = *((_QWORD *)a2 + 7);
    *((_QWORD *)this + 5) |= 2uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 1) == 0 )
  {
    *((_QWORD *)this + 6) = *((_QWORD *)a2 + 45);
    *((_QWORD *)this + 5) |= 1uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 0x20) == 0 )
  {
    *((_DWORD *)this + 22) ^= (*((_DWORD *)this + 22) ^ *((_DWORD *)a2 + 11)) & 3;
    *((_QWORD *)this + 5) |= 0x20uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 0x40) == 0 )
  {
    *((_DWORD *)this + 22) ^= (*((_DWORD *)this + 22) ^ *((_DWORD *)a2 + 11)) & 8;
    *((_QWORD *)this + 5) |= 0x40uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 0x80u) == 0LL )
  {
    *((_DWORD *)this + 22) ^= (*((_DWORD *)this + 22) ^ *((_DWORD *)a2 + 11)) & 0x20;
    *((_QWORD *)this + 5) |= 0x80uLL;
    v3 = *((_QWORD *)this + 5);
  }
  if ( (v3 & 0x10) == 0 && (*((_BYTE *)this + 88) & 0x20) != 0 )
  {
    *((_QWORD *)this + 10) = *((_QWORD *)this + 8);
    *((_QWORD *)this + 5) |= 0x10uLL;
  }
  if ( (*((_BYTE *)a2 + 42) & 7) == 3 )
    *((_DWORD *)this + 22) |= 0x20u;
  *((_DWORD *)this + 4) ^= (*((_DWORD *)this + 4) ^ (*((_DWORD *)a2 + 93) >> 18)) & 1;
  v4 = *((_DWORD *)this + 4);
  if ( (v4 & 2) == 0 )
  {
    *(_QWORD *)this = *((_QWORD *)a2 + 17);
    *((_DWORD *)this + 4) |= 2u;
    v4 = *((_DWORD *)this + 4);
  }
  if ( (v4 & 4) == 0 )
  {
    *((_QWORD *)this + 1) = *((_QWORD *)a2 + 14);
    *((_DWORD *)this + 4) = v4 | 4;
  }
  if ( !*((_BYTE *)this + 35) )
  {
    *((_WORD *)this + 16) |= 1u;
    *((_BYTE *)this + 35) = *((_BYTE *)a2 + 8);
    *((_BYTE *)this + 36) = *((_BYTE *)a2 + 32);
  }
}
