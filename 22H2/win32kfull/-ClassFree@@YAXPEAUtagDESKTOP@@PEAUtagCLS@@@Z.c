/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C010BC3C
 * Callers:
 *     ReferenceClass @ 0x1C00254E0 (ReferenceClass.c)
 *     DestroyClass @ 0x1C0078FA0 (DestroyClass.c)
 *     InternalRegisterClassEx @ 0x1C0079D30 (InternalRegisterClassEx.c)
 * Callees:
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0167A2C (--$UserFreeIsolatedType@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall ClassFree(PVOID *a1, PVOID *a2)
{
  _DWORD *v3; // rdx
  bool v4; // zf

  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2[1]);
  else
    Win32FreePool(a2[1]);
  v3 = a2[16];
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    v4 = v3[2] == 0;
    *((_BYTE *)v3 + 12) = 1;
    if ( v4 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v3);
  }
  UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<36864,144>>(a2);
}
