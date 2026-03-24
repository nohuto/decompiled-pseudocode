/*
 * XREFs of ??1COPM@@QEAA@XZ @ 0x1C00B2D24
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C011BB50 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@OPM@@QEAA@XZ @ 0x1C00B2DF0 (--1CMutex@OPM@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COPM::~COPM(COPM *this)
{
  __int64 i; // rdi
  void *v3; // rcx
  struct _LOOKASIDE_LIST_EX *v4; // rcx
  void *v5; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  struct _LOOKASIDE_LIST_EX *v7; // rcx
  void *v8; // rcx

  OPM::CMutex::~CMutex((COPM *)((char *)this + 56));
  OPM::CMutex::~CMutex((COPM *)((char *)this + 48));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 9); i = (unsigned int)(i + 1) )
  {
    v6 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 3) + 8 * i);
    if ( v6 )
    {
      (**v6)(v6, 1LL);
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i) = 0LL;
    }
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D504F47u);
  v7 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 2);
  if ( v7 )
  {
    ExDeleteLookasideListEx(v7);
    v8 = (void *)*((_QWORD *)this + 2);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x4D504F47u);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    ExDeleteLookasideListEx(v4);
    v5 = (void *)*((_QWORD *)this + 1);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4D504F47u);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    ExDeleteLookasideListEx(*(PLOOKASIDE_LIST_EX *)this);
    if ( *(_QWORD *)this )
      ExFreePoolWithTag(*(PVOID *)this, 0x4D504F47u);
    *(_QWORD *)this = 0LL;
  }
}
