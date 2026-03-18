/*
 * XREFs of OffsetWindow @ 0x1C00F1570
 * Callers:
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00CFC14 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     OffsetChildren @ 0x1C00F147C (OffsetChildren.c)
 * Callees:
 *     UpdateSprite @ 0x1C00D5D64 (UpdateSprite.c)
 *     DwmChildRectChange @ 0x1C00EDE40 (DwmChildRectChange.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01F935C (FindSpb.c)
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
  __int128 *v11; // rdi
  __int64 AlignmentRequirement_low; // r14
  __int64 v13; // xmm1_8
  __int64 Prop; // rdi
  __int64 v15; // rcx
  _DWORD *Spb; // rax
  int v17; // esi
  tagObjLock **v18; // rdi
  struct tagPOINT v19; // [rsp+60h] [rbp-29h] BYREF
  __int128 v20; // [rsp+68h] [rbp-21h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  __int64 v22; // [rsp+80h] [rbp-9h]
  char v23; // [rsp+88h] [rbp-1h]
  __int128 v24; // [rsp+90h] [rbp+7h] BYREF
  char v25; // [rsp+A0h] [rbp+17h]
  char v26; // [rsp+A8h] [rbp+1Fh]

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
      if ( (*(_DWORD *)(*(_QWORD *)result + 64LL) & 1) != 0 )
      {
        v11 = (__int128 *)*((_QWORD *)a1 + 18);
        AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
        v22 = gDomainDummyLock;
        v23 = 0;
        v24 = 0LL;
        v25 = 0;
        v13 = *((_QWORD *)v11 + 2);
        v20 = *v11;
        v26 = 0;
        v21 = v13;
        if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL() )
        {
          v26 = 1;
          if ( v11 == (__int128 *)gObjDummyLock )
            v11 = 0LL;
          *(_QWORD *)&v24 = v11;
          v17 = 0;
          v18 = (tagObjLock **)&v24;
          do
          {
            if ( *v18 )
              tagObjLock::LockExclusive(*v18);
            ++v17;
            ++v18;
          }
          while ( !v17 );
          v25 = 1;
        }
        Prop = RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
        if ( v26 && v25 )
        {
          if ( (_QWORD)v24 )
            tagObjLock::UnLockExclusive((tagObjLock *)v24);
          v25 = 0;
        }
        result = Prop != 0;
        if ( Prop )
          result = DwmChildRectChange(a1);
      }
    }
  }
  v15 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v15 + 26) & 8) != 0 )
  {
    v19 = *(struct tagPOINT *)(v15 + 88);
    return UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v10, 0LL, &v19, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
  }
  return result;
}
