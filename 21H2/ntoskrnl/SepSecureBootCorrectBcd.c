/*
 * XREFs of SepSecureBootCorrectBcd @ 0x1409CDCC8
 * Callers:
 *     NtFilterBootOption @ 0x1409CD880 (NtFilterBootOption.c)
 * Callees:
 *     BcdCloseStore @ 0x1408124A0 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140812D00 (BcdCloseObject.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 SepSecureBootCorrectBcd()
{
  __int64 v0; // rdi
  NTSTATUS v1; // eax
  int updated; // ebx
  char *Pool2; // r14
  unsigned int v4; // r15d
  unsigned __int16 *v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rsi
  _DWORD *v8; // r9
  __int16 v9; // r8
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned int *v13; // [rsp+88h] [rbp+48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v14 = 0LL;
  v0 = 0LL;
  v12 = 0;
  LODWORD(v13) = 0;
  v11 = 0LL;
  v1 = BiAcquireBcdSyncMutant(0);
  updated = v1;
  if ( v1 >= 0 )
  {
    updated = BiOpenSystemStore(&v11, 0);
    BiReleaseBcdSyncMutant(0);
    v0 = v11;
    if ( updated >= 0 )
    {
      v15 = 1LL;
      updated = BcdEnumerateObjects(v11, (unsigned int)&v15, 0, (unsigned int)&v13, (__int64)&v12);
      if ( updated == -1073741789 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v13, 1649632595LL);
        if ( Pool2 )
        {
          updated = BcdEnumerateObjects(v0, (unsigned int)&v15, (_DWORD)Pool2, (unsigned int)&v13, (__int64)&v12);
          if ( updated >= 0 )
          {
            v4 = 0;
            if ( v12 )
            {
              while ( 1 )
              {
                v13 = (unsigned int *)&Pool2[24 * v4];
                updated = BcdOpenObject(v0, v13, &v14);
                if ( updated < 0 )
                  break;
                v5 = (unsigned __int16 *)qword_140D01440;
                v6 = 0;
                v7 = v14;
                if ( *((_WORD *)qword_140D01440 + 18) )
                {
                  do
                  {
                    v8 = (_DWORD *)(qword_140D04970 + 12LL * v6);
                    if ( !*v8 || *v8 == *(_DWORD *)(*((_QWORD *)v13 + 2) + 4LL) )
                    {
                      v9 = *(_WORD *)((unsigned int)v8[2] + qword_140D04980);
                      if ( ((v9 & 0x20) == 0 || (dword_140C5AFDC & 4) != 0)
                        && ((v9 & 0x40) == 0 || (dword_140C5AFDC & 0x10) != 0) )
                      {
                        updated = SepSecureBootUpdateBcdDataForRule(qword_140D04970 + 12LL * v6, v7);
                        if ( updated < 0 )
                          goto LABEL_23;
                        v5 = (unsigned __int16 *)qword_140D01440;
                      }
                    }
                    ++v6;
                  }
                  while ( v6 < v5[18] );
                }
                BcdCloseObject(v7);
                v7 = 0LL;
                ++v4;
                v14 = 0LL;
                if ( v4 >= v12 )
                  goto LABEL_23;
              }
              v7 = v14;
LABEL_23:
              if ( v7 )
                BcdCloseObject(v7);
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
    BiLogMessage(4LL, L"BcdOpenSystemStore: Failed to acquire BCD sync mutant.Status: %x", (unsigned int)v1);
  }
  if ( v0 )
    BcdCloseStore(v0);
  return (unsigned int)updated;
}
