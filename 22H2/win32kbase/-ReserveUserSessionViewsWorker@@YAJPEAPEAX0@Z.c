/*
 * XREFs of ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0137BA4
 * Callers:
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0137B48 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     Win32CreateSection @ 0x1C006C828 (Win32CreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
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
  ULONG v12; // eax
  __int64 v13; // rdx
  PVOID v14; // rcx
  int v15; // eax
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v19; // [rsp+20h] [rbp-48h]
  ULONG_PTR v20; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  if ( qword_1C0256890 )
    v5 = qword_1C0256890(1LL);
  else
    v5 = 0;
  if ( qword_1C0256890 )
    v6 = qword_1C0256890(2LL);
  else
    v6 = 0;
  if ( qword_1C0256890 )
    v7 = qword_1C0256890(0LL);
  else
    v7 = 0;
  v8 = (int)qword_1C0256890;
  if ( qword_1C0256890 )
    v8 = qword_1C0256890(3LL);
  v9 = (unsigned int)(v5 + v7 + 10 * v8 + v6);
  v20 = v9;
  Section = Win32CreateSection(a1, 983071LL, a3, (__int64)&v20, v19, 0x4000000);
  v11 = Section;
  if ( Section >= 0 )
  {
    *a2 = 0LL;
    v14 = *a1;
    ViewSize = v9;
    v15 = MmMapViewInSessionSpace(v14, a2, &ViewSize);
    v11 = v15;
    if ( v15 < 0 )
    {
      v16 = RtlNtStatusToDosError(v15);
      UserSetLastError(v16, v17);
      ObfDereferenceObject(*a1);
    }
  }
  else
  {
    v12 = RtlNtStatusToDosError(Section);
    UserSetLastError(v12, v13);
  }
  return v11;
}
