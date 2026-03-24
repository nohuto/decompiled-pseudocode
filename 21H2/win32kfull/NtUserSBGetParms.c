/*
 * XREFs of NtUserSBGetParms @ 0x1C00FAAE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, int a2, _QWORD *a3, ULONG64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // ebx
  __int128 v11; // xmm1
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+30h] [rbp-58h]

  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    if ( a4 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a4;
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24);
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = *(_OWORD *)a4;
    v16 = *(_OWORD *)a4;
    v17 = *(_QWORD *)(a4 + 16);
    v8 = *(unsigned int *)(a4 + 24);
    v12 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 720LL);
    v13 = HIDWORD(*(_QWORD *)a4);
    if ( (*(_QWORD *)a4 & 0x100000000LL) != 0 )
    {
      *((_QWORD *)&v16 + 1) = *a3;
      v11 = v16;
    }
    v14 = *(_QWORD *)(a4 + 16);
    if ( (v13 & 2) != 0 )
      v14 = a3[1];
    LODWORD(v17) = v14;
    if ( (v13 & 4) != 0 )
      HIDWORD(v17) = HIDWORD(*(_OWORD *)a3);
    if ( (v13 & 0x10) != 0 )
    {
      if ( v12 && *(_DWORD *)(v12 + 88) == a2 && *(_QWORD *)(v12 + 8) == v9 )
        v8 = *(unsigned int *)(v12 + 84);
      else
        v8 = HIDWORD(a3[1]);
    }
    LOBYTE(v10) = (v13 & 0x17) != 0;
    *(_OWORD *)a4 = v11;
    *(_QWORD *)(a4 + 16) = v17;
    *(_DWORD *)(a4 + 24) = v8;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
