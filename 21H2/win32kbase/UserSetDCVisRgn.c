/*
 * XREFs of UserSetDCVisRgn @ 0x1C002C8B0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C001B040 (GreOffsetRgn.c)
 *     GreDeleteObject @ 0x1C0023690 (GreDeleteObject.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     IsGetStyleWindowSupported @ 0x1C006AC48 (IsGetStyleWindowSupported.c)
 *     CreateEmptyRgnPublic @ 0x1C006EF60 (CreateEmptyRgnPublic.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreSetRectRgn @ 0x1C008E9A0 (GreSetRectRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  _DWORD *v2; // rbx
  HRGN EmptyRgnPublic; // rsi
  int v4; // ebp
  __int64 v5; // rbp
  HRGN v6; // rcx
  int v7; // r9d
  HRGN v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( !qword_1C029C3D8 || (int)qword_1C029C3D8() < 0 )
  {
    v2 = (_DWORD *)((char *)a1 + 64);
LABEL_12:
    *v2 |= 0x10000000u;
    goto LABEL_6;
  }
  v2 = (_DWORD *)((char *)a1 + 64);
  if ( !qword_1C029C3E0
    || !(unsigned int)qword_1C029C3E0(&v8, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3), *((unsigned int *)a1 + 16)) )
  {
    goto LABEL_12;
  }
  *v2 &= ~0x10000000u;
LABEL_6:
  if ( *((_QWORD *)a1 + 6) > 2uLL
    && (int)IsGetStyleWindowSupported() >= 0
    && qword_1C029C3F0
    && (v5 = qword_1C029C3F0(*((_QWORD *)a1 + 2), 2848LL)) != 0 )
  {
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 6), 0LL, 5);
    GreOffsetRgn(EmptyRgnPublic, *(_DWORD *)(*(_QWORD *)(v5 + 40) + 88LL), *(_DWORD *)(*(_QWORD *)(v5 + 40) + 92LL));
    v4 = 1;
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 6);
    v4 = 0;
  }
  if ( (*v2 & 0x80u) != 0 )
  {
    v6 = v8;
    if ( EmptyRgnPublic )
    {
      v7 = 1;
LABEL_19:
      GreCombineRgn(v6, v6, EmptyRgnPublic, v7);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v2 & 0x40) == 0 )
      goto LABEL_10;
    v6 = v8;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      v7 = 4;
      goto LABEL_19;
    }
  }
  GreSetRectRgn(v6, 0);
LABEL_10:
  ResetOrg(v8, a1, 1);
  if ( v4 )
    GreDeleteObject(EmptyRgnPublic);
}
