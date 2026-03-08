/*
 * XREFs of OffsetWindow @ 0x1C004C918
 * Callers:
 *     OffsetChildren @ 0x1C004CB34 (OffsetChildren.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00A397C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C002E7A8 (UpdateSprite.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     DwmChildRectChange @ 0x1C00AD03C (DwmChildRectChange.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01FA54C (FindSpb.c)
 */

__int64 __fastcall OffsetWindow(struct tagWND *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int128 *v12; // rdi
  __int64 AlignmentRequirement_low; // r14
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  __int64 Prop; // rdi
  __int64 v17; // rcx
  _DWORD *Spb; // rax
  int v19; // esi
  tagObjLock **v20; // rdi
  struct tagPOINT v21; // [rsp+60h] [rbp-29h] BYREF
  __int128 v22; // [rsp+68h] [rbp-21h]
  __int64 v23; // [rsp+78h] [rbp-11h]
  __int64 v24; // [rsp+80h] [rbp-9h]
  char v25; // [rsp+88h] [rbp-1h]
  __int128 v26; // [rsp+90h] [rbp+7h] BYREF
  char v27; // [rsp+A0h] [rbp+17h]
  char v28; // [rsp+A8h] [rbp+1Fh]

  v4 = a3;
  v5 = a2;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) += a2;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) += a2;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) += a3;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) += a3;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL) += a2;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) += a2;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL) += a3;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) += a3;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( v6 > 1 )
    GreOffsetRgn(v6, a2, a3);
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 21) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v7 + 168);
    if ( v8 )
      GreOffsetRgn(v8, v5, v4);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    Spb = (_DWORD *)FindSpb(a1);
    Spb[6] += v5;
    Spb[8] += v5;
    Spb[9] += v4;
    Spb[7] += v4;
  }
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(gptiCurrent + 456LL);
    if ( result )
    {
      result = *(_QWORD *)(result + 8);
      v11 = *(_QWORD *)result;
      if ( (*(_DWORD *)(*(_QWORD *)result + 64LL) & 1) != 0 )
      {
        v12 = (__int128 *)*((_QWORD *)a1 + 18);
        AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
        v24 = gDomainDummyLock;
        v25 = 0;
        v26 = 0LL;
        v27 = 0;
        v14 = *((_QWORD *)v12 + 2);
        v22 = *v12;
        v28 = 0;
        v23 = v14;
        if ( !IS_USERCRIT_OWNED_EXCLUSIVE(v11) && IS_USERCRIT_OWNED_AT_ALL(v15) )
        {
          v28 = 1;
          if ( v12 == (__int128 *)gObjDummyLock )
            v12 = 0LL;
          *(_QWORD *)&v26 = v12;
          v19 = 0;
          v20 = (tagObjLock **)&v26;
          do
          {
            if ( *v20 )
              tagObjLock::LockExclusive(*v20);
            ++v19;
            ++v20;
          }
          while ( !v19 );
          v27 = 1;
        }
        Prop = RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
        if ( v28 && v27 )
        {
          if ( (_QWORD)v26 )
            tagObjLock::UnLockExclusive((tagObjLock *)v26);
          v27 = 0;
        }
        result = Prop != 0;
        if ( Prop )
          result = DwmChildRectChange(a1);
      }
    }
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) != 0 )
  {
    v21 = *(struct tagPOINT *)(v17 + 88);
    return UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v10, 0LL, &v21, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
  }
  return result;
}
