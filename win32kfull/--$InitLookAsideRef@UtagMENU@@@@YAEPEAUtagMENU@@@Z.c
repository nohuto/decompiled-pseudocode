/*
 * XREFs of ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C00D783C
 * Callers:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00D76B8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagMENU>(__int64 a1)
{
  _QWORD *v2; // rax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v2 = (_QWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
  *(_QWORD *)(a1 + 152) = v2;
  if ( v2 )
  {
    *v2 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 152) + 12LL) = 0;
    LOBYTE(v2) = 1;
  }
  return (char)v2;
}
