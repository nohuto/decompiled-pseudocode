/*
 * XREFs of HalpApicSetLogicalId @ 0x140525680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpApicSetLogicalId(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = 0;
  if ( HalpApicX2Mode )
    return (unsigned int)-1073741637;
  switch ( *(_DWORD *)a2 )
  {
    case 4:
      ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(208LL, 0LL);
      if ( !HalpApicClusterModeEnabled )
        return v2;
      v7 = 0xFFFFFFFLL;
      v6 = 224LL;
LABEL_13:
      ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(v6, v7);
      return v2;
    case 5:
      HalpApicClusterModeEnabled = 0;
      ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(224LL, 0xFFFFFFFFLL);
      v6 = 208LL;
      v7 = (unsigned int)(*(_DWORD *)(a2 + 8) << 24);
      goto LABEL_13;
    case 6:
      HalpApicClusterModeEnabled = 1;
      ((void (__fastcall *)(__int64, __int64))HalpApicWrite)(224LL, 0xFFFFFFFLL);
      if ( (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(224LL) == 0xFFFFFFF )
      {
        v5 = (*(unsigned __int16 *)(a2 + 12) | (unsigned __int16)(16 * *(_WORD *)(a2 + 8))) << 24;
        ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(208LL, v5);
        if ( (unsigned int)((__int64 (__fastcall *)(__int64))HalpApicRead)(208LL) == v5 )
          return v2;
        ((void (__fastcall *)(__int64, _QWORD))HalpApicWrite)(208LL, 0LL);
      }
      return 3221225659LL;
  }
  return (unsigned int)-1073741637;
}
