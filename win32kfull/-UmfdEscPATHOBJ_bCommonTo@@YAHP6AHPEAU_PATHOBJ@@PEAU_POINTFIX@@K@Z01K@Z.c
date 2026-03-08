/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C02A9E20
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00BBD4C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ULongLongMult @ 0x1C014D830 (ULongLongMult.c)
 */

__int64 __fastcall UmfdEscPATHOBJ_bCommonTo(
        int (*a1)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        unsigned int a4)
{
  struct UmfdTls *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  size_t v11; // rbx
  void *v12; // rdi
  unsigned int v13; // ebx
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  Size = 0LL;
  if ( ULongLongMult(a4, 8uLL, &Size) < 0 )
    return 0LL;
  v7 = UmfdTls::EnsureTls();
  if ( !v7 )
    return 0LL;
  v10 = *((_QWORD *)v7 + 6);
  if ( !v10 )
    return 0LL;
  v11 = Size;
  v12 = (_DWORD)Size ? (void *)Win32AllocPool((unsigned int)Size, 1801733703LL, v8, v9) : 0LL;
  if ( !v12 )
    return 0LL;
  if ( v11 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a3 + v11 > MmUserProbeAddress || (struct _POINTFIX *)((char *)a3 + v11) < a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v12, a3, v11);
  v13 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))a1)(v10, v12, a4);
  Win32FreePool(v12);
  return v13;
}
