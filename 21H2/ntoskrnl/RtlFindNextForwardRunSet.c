/*
 * XREFs of RtlFindNextForwardRunSet @ 0x1402581FC
 * Callers:
 *     HvpResetPageProtection @ 0x14063B214 (HvpResetPageProtection.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407CAF10 (CmFcpManagerDrainUsageNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunSet(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r11d
  unsigned int v5; // r9d
  __int64 v7; // rdx
  _DWORD *v8; // rbx
  _DWORD *v9; // r8
  unsigned int v10; // edx
  int v11; // r11d
  unsigned int v12; // ecx
  unsigned int i; // eax
  _DWORD *v15; // r8

  v3 = *(_DWORD *)a1;
  v5 = a2;
  if ( *(_DWORD *)a1 <= a2 )
  {
    *a3 = a2;
    return 0;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)(v3 - 1) >> 5));
  v9 = (_DWORD *)(v7 + 4 * ((unsigned __int64)v5 >> 5));
  v10 = 0;
  if ( v9 != v8 && (~*((_DWORD *)qword_140012120 + (v5 & 0x1F)) & *v9) == 0 )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v9; v9 < v8 && !*v9; ++v9 )
      v5 += 32;
  }
  for ( ; v5 < v3; ++v5 )
  {
    if ( _bittest(*(const signed __int32 **)(a1 + 8), v5) )
      break;
  }
  if ( v9 == v8 )
    goto LABEL_9;
  v11 = v5 & 0x1F;
  if ( (*v9 | *((_DWORD *)qword_140012120 + (v5 & 0x1F))) != -1 )
    goto LABEL_9;
  v10 = 32 - v11;
  if ( v11 != 33 )
  {
    v15 = v9 + 1;
    while ( v15 < v8 && *v15 == -1 )
    {
      ++v15;
      v10 += 32;
      if ( v10 == -1 )
        goto LABEL_13;
    }
LABEL_9:
    v12 = *(_DWORD *)a1;
    for ( i = v10 + v5; i < v12; ++v10 )
    {
      if ( !_bittest(*(const signed __int32 **)(a1 + 8), i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
  }
LABEL_13:
  *a3 = v5;
  return v10;
}
