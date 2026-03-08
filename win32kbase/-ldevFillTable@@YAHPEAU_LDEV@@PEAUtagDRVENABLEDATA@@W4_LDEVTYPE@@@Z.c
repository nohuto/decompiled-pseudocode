/*
 * XREFs of ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00272A0
 * Callers:
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0024F5C (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ldevLoadInternal @ 0x1C00CD9B0 (ldevLoadInternal.c)
 * Callees:
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x1C0027350 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 */

__int64 __fastcall ldevFillTable(__int64 a1, int *a2)
{
  struct _DRVFN *v3; // rcx
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rcx

  v3 = (struct _DRVFN *)*((_QWORD *)a2 + 1);
  v4 = *a2;
  v5 = a2[1];
  *(_DWORD *)(a1 + 56) = v4;
  if ( bFillFunctionTable(v3, v5, (__int64 (**)(void))(a1 + 64)) )
  {
    LODWORD(v6) = 3;
    while ( 1 )
    {
      v6 = (unsigned int)(v6 - 1);
      if ( !*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0292FE0[v6] + 64) )
        break;
      if ( !(_DWORD)v6 )
      {
        if ( *(_DWORD *)(a1 + 24) == 6 )
        {
          LODWORD(v9) = 7;
          while ( 1 )
          {
            v9 = (unsigned int)(v9 - 1);
            if ( !*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C02A2A38[v9] + 64) )
              break;
            if ( !(_DWORD)v9 )
              goto LABEL_6;
          }
        }
        else
        {
LABEL_6:
          LODWORD(v7) = 2;
          while ( 1 )
          {
            v7 = (unsigned int)(v7 - 1);
            if ( (*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0292FF0[2 * v7] + 64) == 0LL) != (*(_QWORD *)(a1 + 8LL * (unsigned int)dword_1C0292FF4[2 * v7] + 64) == 0LL) )
              break;
            if ( !(_DWORD)v7 )
              return 1LL;
          }
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
