/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00D51B4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C0055E80 (Win32CreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReserveUserSessionViewsWorker(void **a1, void **a2, __int64 a3)
{
  int v5; // r14d
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  ULONG_PTR v9; // rbp
  NTSTATUS Section; // eax
  unsigned int v11; // ebx
  PVOID v12; // rcx
  int v13; // eax
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+20h] [rbp-48h]
  ULONG_PTR v24; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  if ( qword_1C029C5E0 )
    v5 = qword_1C029C5E0(1LL);
  else
    v5 = 0;
  if ( qword_1C029C5E0 )
    v6 = qword_1C029C5E0(2LL);
  else
    v6 = 0;
  if ( qword_1C029C5E0 )
    v7 = qword_1C029C5E0(0LL);
  else
    v7 = 0;
  v8 = (int)qword_1C029C5E0;
  if ( qword_1C029C5E0 )
    v8 = qword_1C029C5E0(3LL);
  v9 = (unsigned int)(v5 + v7 + 10 * v8 + v6);
  v24 = v9;
  Section = Win32CreateSection(a1, 983071LL, a3, (__int64)&v24, v23, 0x4000000);
  v11 = Section;
  if ( Section < 0 )
  {
    v15 = RtlNtStatusToDosError(Section);
    UserSetLastError(v15, v16, v17, v18);
  }
  else
  {
    *a2 = 0LL;
    v12 = *a1;
    ViewSize = v9;
    v13 = MmMapViewInSessionSpace(v12, a2, &ViewSize);
    v11 = v13;
    if ( v13 < 0 )
    {
      v19 = RtlNtStatusToDosError(v13);
      UserSetLastError(v19, v20, v21, v22);
      ObfDereferenceObject(*a1);
    }
  }
  return v11;
}
