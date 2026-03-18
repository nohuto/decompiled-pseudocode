/*
 * XREFs of NtUserSBGetParms @ 0x1C00E1E90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, __int64 a2, _QWORD *a3, ULONG64 a4)
{
  int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // ebx
  _BYTE *v11; // rdx
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int128 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+30h] [rbp-58h]

  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    v11 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[27] = v11[27];
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_OWORD *)a4;
    v17 = *(_OWORD *)a4;
    v18 = *(_QWORD *)(a4 + 16);
    v8 = *(unsigned int *)(a4 + 24);
    v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 720LL);
    v14 = HIDWORD(*(_QWORD *)a4);
    if ( (*(_QWORD *)a4 & 0x100000000LL) != 0 )
    {
      *((_QWORD *)&v17 + 1) = *a3;
      v12 = v17;
    }
    v15 = *(_QWORD *)(a4 + 16);
    if ( (v14 & 2) != 0 )
      v15 = a3[1];
    LODWORD(v18) = v15;
    if ( (v14 & 4) != 0 )
      HIDWORD(v18) = HIDWORD(*(_OWORD *)a3);
    if ( (v14 & 0x10) != 0 )
    {
      if ( v13 && *(_DWORD *)(v13 + 88) == v6 && *(_QWORD *)(v13 + 8) == v9 )
        v8 = *(unsigned int *)(v13 + 84);
      else
        v8 = HIDWORD(a3[1]);
    }
    LOBYTE(v10) = (v14 & 0x17) != 0;
    *(_OWORD *)a4 = v12;
    *(_QWORD *)(a4 + 16) = v18;
    *(_DWORD *)(a4 + 24) = v8;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
