/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C02A0ADC
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C02A09C0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C02A07F0 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, struct PFF *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  __int64 i; // rcx
  __int64 v15; // rax
  struct PFF *result; // rax
  struct PFF *v17; // rdi
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v17 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v6 = *((_QWORD *)result + 9);
      if ( v6 )
      {
        v18 = 0LL;
        while ( 1 )
        {
          v7 = *(_DWORD *)(v6 + 840);
          v8 = 0LL;
          v9 = 1;
          if ( v7 )
          {
            v10 = *(_QWORD *)(v6 + 744);
            while ( 1 )
            {
              v11 = *(_QWORD *)(v10 + 8 * v8);
              if ( v11 )
              {
                v12 = *(_QWORD *)(v11 + 120);
                v9 = 0;
                if ( v12 == *a1 || v12 == a1[1] )
                  break;
              }
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= v7 )
                goto LABEL_13;
            }
            vMakeInactiveHelper((__int64 *)(v10 + 8 * v8));
            if ( *(_QWORD *)(*(_QWORD *)(v6 + 120) + 120LL) == a2 )
              break;
          }
LABEL_13:
          if ( *(_QWORD *)(v6 + 744) && v9 )
            break;
LABEL_18:
          *(_DWORD *)(v6 + 712) = 0;
          v6 = *(_QWORD *)(v6 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
          if ( !v6 )
            goto LABEL_19;
        }
        v13 = *(void **)(v6 + 744);
        if ( v13 != (void *)(v6 + 752) )
          Win32FreePool(v13);
        *(_QWORD *)(v6 + 744) = 0LL;
        *(_DWORD *)(v6 + 840) = 0;
        *(_DWORD *)(v6 + 832) = 0;
        *(_DWORD *)(v6 + 836) = 0;
        goto LABEL_18;
      }
LABEL_19:
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v17 + 52); i = (unsigned int)(i + 1) )
      {
        v15 = *((_QWORD *)v17 + i + 27);
        if ( *(_QWORD *)(v15 + 120) == a2 )
          *(_QWORD *)(v15 + 120) = 0LL;
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v17 + 1);
  }
}
