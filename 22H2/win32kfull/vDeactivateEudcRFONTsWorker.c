/*
 * XREFs of vDeactivateEudcRFONTsWorker @ 0x1C016BD98
 * Callers:
 *     prfntDeactivateEudcRFONTs @ 0x1C00A22E4 (prfntDeactivateEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009D600 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009E3C0 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009E430 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C009E458 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C009F0E4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C009F3D0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00E8AA0 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016A260 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vDeactivateEudcRFONTsWorker(struct RFONT *a1, _QWORD *a2, struct PFF *a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  bool v9; // cc
  __int64 v10; // rbx
  int v11; // eax
  struct PFF *result; // rax
  struct PFF *v13; // rsi
  unsigned __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  struct RFONT *v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF

  v16 = a1;
  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v13 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
    {
      v7 = *((_QWORD *)result + 9);
      if ( v7 )
      {
        v15 = 0LL;
        do
        {
          v8 = *(_QWORD *)(v7 + 120);
          if ( v8 == *a2 || v8 == a2[1] )
          {
            v9 = *(_DWORD *)(v7 + 660) <= 0;
            v10 = *(_QWORD *)(v7 + 104);
            v17 = v10;
            v14 = v7;
            if ( v9 )
            {
              v16 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v17);
              RFONTOBJ::vRemove((__int64)&v14, (unsigned __int64 *)&v16, 1);
              PDEVOBJ::prfntInactive((PDEVOBJ *)&v17, v16);
              v11 = PDEVOBJ::cInactive((PDEVOBJ *)&v17) - 1;
              if ( (*(_DWORD *)(v10 + 40) & 0x800000) != 0 )
                *(_DWORD *)(*(_QWORD *)(v10 + 3520) + 1536LL) = v11;
              else
                *(_DWORD *)(v10 + 1536) = v11;
            }
            else
            {
              v16 = PDEVOBJ::prfntActive((PDEVOBJ *)&v17);
              RFONTOBJ::vRemove((__int64)&v14, (unsigned __int64 *)&v16, 1);
              PDEVOBJ::prfntActive((PDEVOBJ *)&v17, v16);
            }
            RFONTOBJ::vInsert(&v14, a4, 1);
            v14 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
          }
          v7 = *(_QWORD *)(v7 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
        }
        while ( v7 );
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v13 + 1);
  }
  return result;
}
