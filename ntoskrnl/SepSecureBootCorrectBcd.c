/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1409CDB74
 * Callers:
 *     NtFilterBootOption @ 0x1409CD700 (NtFilterBootOption.c)
 * Callees:
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiLogMessage @ 0x14082ECFC (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x14082ED10 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14082EDB8 (BiReleaseBcdSyncMutant.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE004 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  int updated; // ebx
  char *Pool2; // r14
  unsigned int v5; // r15d
  unsigned int v6; // r12d
  __int64 i; // rsi
  _DWORD *v8; // r9
  __int16 v9; // dx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int *v17; // [rsp+A8h] [rbp+58h] BYREF

  *a1 = 0;
  v1 = 0LL;
  v11 = 0LL;
  v16 = 0;
  LODWORD(v17) = 0;
  v13 = 0LL;
  v15 = 0;
  v2 = BiAcquireBcdSyncMutant(0);
  updated = v2;
  if ( v2 >= 0 )
  {
    updated = BiOpenSystemStore(&v13, 0);
    BiReleaseBcdSyncMutant(0);
    v1 = v13;
    if ( updated >= 0 )
    {
      v12 = 1LL;
      updated = BcdEnumerateObjects(v13, (unsigned int)&v12, 0, (unsigned int)&v17, (__int64)&v16);
      if ( updated == -1073741789 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v17, 1649632595LL);
        if ( Pool2 )
        {
          updated = BcdEnumerateObjects(v1, (unsigned int)&v12, (_DWORD)Pool2, (unsigned int)&v17, (__int64)&v16);
          if ( updated >= 0 )
          {
            v5 = 0;
            if ( v16 )
            {
              while ( 1 )
              {
                v17 = (unsigned int *)&Pool2[24 * v5];
                updated = BcdOpenObject(v1, v17, &v11);
                if ( updated < 0 )
                  break;
                v6 = 0;
                for ( i = v11; v6 < *((unsigned __int16 *)qword_140D17BD0 + 18); ++v6 )
                {
                  v8 = (_DWORD *)(qword_140D1BC38 + 12LL * v6);
                  if ( !*v8 || *v8 == *(_DWORD *)(*((_QWORD *)v17 + 2) + 4LL) )
                  {
                    v9 = *(_WORD *)((unsigned int)v8[2] + qword_140D1BC48);
                    if ( ((v9 & 0x20) == 0 || (dword_140C70C04 & 4) != 0)
                      && ((v9 & 0x40) == 0 || (dword_140C70C04 & 0x10) != 0) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule(qword_140D1BC38 + 12LL * v6, i, &v15);
                      if ( updated < 0 )
                        goto LABEL_24;
                      if ( v15 )
                        *a1 = 1;
                    }
                  }
                }
                BcdCloseObject(i);
                i = 0LL;
                ++v5;
                v11 = 0LL;
                if ( v5 >= v16 )
                  goto LABEL_24;
              }
              i = v11;
LABEL_24:
              if ( i )
                BcdCloseObject(i);
            }
          }
          ExFreePoolWithTag(Pool2, 0x62536553u);
        }
        else
        {
          updated = -1073741801;
        }
      }
    }
  }
  else
  {
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v2);
  }
  if ( v1 )
    BcdCloseStore(v1);
  return (unsigned int)updated;
}
