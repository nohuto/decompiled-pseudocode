/*
 * XREFs of GreGetDCPoint @ 0x1C00AB470
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     GreGetDCOrgEx @ 0x1C00AB3F0 (GreGetDCOrgEx.c)
 *     GreGetDCOrg @ 0x1C00CDE60 (GreGetDCOrg.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     EnterSharedCrit @ 0x1C002A270 (EnterSharedCrit.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C002E3D4 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserIsUserCritSecIn @ 0x1C0090AB0 (UserIsUserCritSecIn.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00AF4B0 (UserGetRedirectedWindowOrigin.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C016F338 (-vMakeIso@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCPoint(HDC a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  DC *v7; // r8
  _BOOL8 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  char v14; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  DC *v22[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v6 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v7 = v22[0];
  if ( !v22[0] )
    goto LABEL_30;
  v8 = (a2 & 0x40) != 0;
  v9 = (a2 & 0xFFFFFFBF) - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 4;
        if ( !v12 )
        {
          *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v22[0] + 122) + 308LL);
          *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 304LL);
          goto LABEL_31;
        }
        v13 = v12 - 8;
        if ( v13 )
        {
          if ( v13 == 16 )
          {
            *(_QWORD *)a3 = *((_QWORD *)v22[0] + (*((_DWORD *)v22[0] + 10) & 1LL) + 127);
            if ( v8 && (*((_DWORD *)v7 + 9) & 0x4000) != 0 )
            {
              v23 = 0LL;
              if ( (unsigned int)UserIsUserCritSecIn() )
              {
                v14 = 0;
              }
              else
              {
                v14 = 1;
                EnterSharedCrit();
              }
              if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v23) )
              {
                *(_DWORD *)a3 += v23;
                *(_DWORD *)(a3 + 4) += HIDWORD(v23);
              }
              if ( v14 )
                UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
            }
            goto LABEL_31;
          }
        }
        else
        {
          if ( !qword_1C029B0D0 || (int)qword_1C029B0D0(v8) < 0 )
            goto LABEL_31;
          if ( qword_1C029B0D8 )
          {
            v6 = qword_1C029B0D8(a1, a3);
            goto LABEL_31;
          }
        }
LABEL_30:
        v6 = 0;
        goto LABEL_31;
      }
      v19 = *(_QWORD *)(*((_QWORD *)v22[0] + 122) + 324LL);
    }
    else
    {
      v19 = *(_QWORD *)(*((_QWORD *)v22[0] + 122) + 316LL);
    }
    *(_QWORD *)a3 = v19;
    if ( (*(_DWORD *)(*((_QWORD *)v7 + 122) + 108LL) & 1) != 0 )
      *(_DWORD *)a3 = -*(_DWORD *)a3;
  }
  else
  {
    v20 = *((_QWORD *)v22[0] + 122);
    if ( (*(_DWORD *)(v20 + 340) & 0x4000) != 0 && *(_DWORD *)(v20 + 104) == 7 )
    {
      DC::vMakeIso(v22[0]);
      v7 = v22[0];
    }
    *(_QWORD *)a3 = *(_QWORD *)(*((_QWORD *)v7 + 122) + 332LL);
  }
LABEL_31:
  DCOBJ::~DCOBJ((DCOBJ *)v22);
  return v6;
}
