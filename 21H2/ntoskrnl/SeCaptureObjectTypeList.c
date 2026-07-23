/*
 * XREFs of SeCaptureObjectTypeList @ 0x14026C060
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(unsigned __int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  int v7; // edi
  char *PoolWithTag; // r9
  __int64 v9; // rax
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // r8
  char *v15; // rcx
  _OWORD *v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // r10
  int v20; // [rsp+24h] [rbp-74h]
  char *v21; // [rsp+28h] [rbp-70h]
  _QWORD v22[4]; // [rsp+30h] [rbp-68h]

  v22[0] = a4;
  v7 = 0;
  PoolWithTag = 0LL;
  *(_QWORD *)v22[0] = 0LL;
  if ( a3 != 1 )
    return 3221225474LL;
  if ( a2 )
  {
    if ( a1 )
    {
      v9 = 16LL * a2;
      if ( v9 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 + a1 > 0x7FFFFFFF0000LL || v9 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
      v21 = PoolWithTag;
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        v11 = 0LL;
        v20 = 0;
        while ( (unsigned int)v11 < a2 )
        {
          v12 = (unsigned int)v11;
          v13 = 2 * v11;
          v14 = *(unsigned __int16 *)(a1 + 8 * v13);
          if ( (unsigned int)v14 > 4 )
            goto LABEL_27;
          v15 = &PoolWithTag[48 * v12];
          *(_DWORD *)v15 = (unsigned __int16)v14;
          v16 = *(_OWORD **)(a1 + 8 * v13 + 8);
          if ( ((unsigned __int8)v16 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_OWORD *)(v15 + 4) = *v16;
          *((_QWORD *)v15 + 3) = 0LL;
          *((_DWORD *)v15 + 8) = 0;
          *((_QWORD *)v15 + 5) = 0LL;
          if ( v20 )
          {
            v17 = v14;
            PoolWithTag = v21;
            if ( (unsigned int)v14 > (unsigned int)*(unsigned __int16 *)&v21[48 * (v20 - 1)] + 1 || !(_WORD)v14 )
              goto LABEL_27;
          }
          else
          {
            if ( (_WORD)v14 )
            {
              v7 = -1073741811;
              PoolWithTag = v21;
              break;
            }
            v17 = 0;
            PoolWithTag = v21;
          }
          v18 = 6 * v12;
          if ( (_WORD)v14 )
            *(_DWORD *)&v10[8 * v18 + 20] = *((_DWORD *)v22 + v17 + 1);
          else
            *(_DWORD *)&v10[8 * v18 + 20] = -1;
          *((_DWORD *)&v22[1] + v14) = v20;
          v11 = (unsigned int)++v20;
          v7 = 0;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
LABEL_27:
      v7 = -1073741811;
    }
  }
  if ( v7 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    *a4 = PoolWithTag;
  }
  return (unsigned int)v7;
}
