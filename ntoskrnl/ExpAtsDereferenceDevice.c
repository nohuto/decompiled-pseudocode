/*
 * XREFs of ExpAtsDereferenceDevice @ 0x14060A2C0
 * Callers:
 *     ExUninitializeDeviceAts @ 0x14060A134 (ExUninitializeDeviceAts.c)
 * Callees:
 *     ExpAtsConfigureSecureDevice @ 0x14040D320 (ExpAtsConfigureSecureDevice.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpAtsDereferenceDevice(_QWORD *P)
{
  unsigned int v1; // edi
  __int64 (__fastcall *v4)(__int64, int *); // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  PVOID *v7; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_DWORD *)P + 8))-- == 1 )
  {
    v4 = (__int64 (__fastcall *)(__int64, int *))P[11];
    v5 = P[6];
    v9 = 1;
    v1 = v4(v5, &v9);
    v6 = (_QWORD *)*P;
    if ( *(_QWORD **)(*P + 8LL) != P || (v7 = (PVOID *)P[1], *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    if ( *((_BYTE *)P + 188) )
      v1 = ExpAtsConfigureSecureDevice((__int64)P, 0);
    else
      (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 168))(P[22]);
    ((void (__fastcall *)(_QWORD))P[8])(P[6]);
    ((void (__fastcall *)(_QWORD))P[18])(P[16]);
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
