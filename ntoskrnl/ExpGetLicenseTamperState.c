/*
 * XREFs of ExpGetLicenseTamperState @ 0x140606C7C
 * Callers:
 *     ExGetLicenseTamperState @ 0x1409F6890 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1409F6950 (ExSetLicenseTamperState.c)
 *     sub_1409F6C60 @ 0x1409F6C60 (sub_1409F6C60.c)
 *     sub_1409F7450 @ 0x1409F7450 (sub_1409F7450.c)
 *     sub_1409F74D0 @ 0x1409F74D0 (sub_1409F74D0.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpLicUpdateChecksum @ 0x140606DE8 (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x14075B0D0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14075B2C0 (ExpGetKernelDataProtection.c)
 */

__int64 __fastcall ExpGetLicenseTamperState(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int updated; // ecx
  __int64 v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // edx
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-10h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !*(_QWORD *)(a1 + 46832) )
  {
    result = *(unsigned int *)(a1 + 46988);
    *a2 = result;
    return result;
  }
  result = ExpGetKernelDataProtection(a1, &v15);
  if ( (int)result >= 0 )
  {
    result = DWORD2(v15);
    *a2 = DWORD2(v15);
    return result;
  }
  if ( (_DWORD)result == -1073741275 )
  {
    v5 = *(_QWORD *)(a1 + 46832);
    v6 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v12) = 0;
    *(_DWORD *)((char *)&v14 + 9) = 0;
    *(_WORD *)((char *)&v14 + 13) = 0;
    HIBYTE(v14) = 0;
    if ( v5 )
    {
      if ( !(_DWORD)v6 || a1 != -24 )
      {
        *(_QWORD *)&v12 = 0LL;
        v13 = 0uLL;
        DWORD2(v12) = 4;
        *(_QWORD *)&v14 = 0LL;
        BYTE8(v14) = 1;
        updated = ExpLicUpdateChecksum(v5 + 20, v6, &v12, a1 + 24);
        v10 = -1;
        if ( !updated && (_DWORD)v7 )
        {
          if ( (unsigned __int64)(16 * v7) > 0xFFFFFFFF )
          {
            updated = -1073741675;
            v11 = -1073741675;
            goto LABEL_15;
          }
          updated = ExpLicUpdateChecksum(v9, v7, &v12, v9);
        }
        v11 = updated;
        if ( !updated )
        {
LABEL_16:
          result = 0LL;
          if ( !updated )
            result = v11;
          v15 = v12;
          v16 = v13;
          v17 = v14;
          if ( (int)result >= 0 )
          {
            DWORD2(v15) = 4;
            result = ExpSetKernelDataProtection(a1, &v15, v10, 0LL);
          }
          goto LABEL_20;
        }
LABEL_15:
        *(_QWORD *)&v12 = 0LL;
        DWORD2(v12) = 4;
        goto LABEL_16;
      }
    }
  }
LABEL_20:
  *a2 = 4;
  return result;
}
