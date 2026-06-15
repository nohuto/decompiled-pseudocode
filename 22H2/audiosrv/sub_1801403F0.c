/*
 * XREFs of sub_1801403F0 @ 0x1801403F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013EAB4 @ 0x18013EAB4 (sub_18013EAB4.c)
 *     sub_18013EC44 @ 0x18013EC44 (sub_18013EC44.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801403F0(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // esi
  _QWORD *v7; // rbx
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rcx
  _WORD *v11; // rbp
  _QWORD *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v6 = 0;
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_29;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 56LL))(a3);
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v18);
  if ( v8 < 0 )
  {
    v6 = v8;
    goto LABEL_29;
  }
  v9 = v18;
  if ( a2 )
  {
    if ( v18 == *(_DWORD *)(a1 + 1300) )
    {
      v12 = v7;
      if ( v7[3] >= 8uLL )
        v12 = (_QWORD *)*v7;
      v11 = (_WORD *)(a1 + 780);
      if ( !(unsigned int)o__wcsnicmp(v12, a1 + 780, 260LL) )
        goto LABEL_29;
      v9 = v18;
    }
    else
    {
      v11 = (_WORD *)(a1 + 780);
    }
    *(_DWORD *)(a1 + 1300) = v9;
    goto LABEL_20;
  }
  if ( v18 != *(_DWORD *)(a1 + 776) )
  {
    v11 = (_WORD *)(a1 + 256);
    goto LABEL_12;
  }
  v10 = v7;
  if ( v7[3] >= 8uLL )
    v10 = (_QWORD *)*v7;
  v11 = (_WORD *)(a1 + 256);
  if ( (unsigned int)o__wcsnicmp(v10, a1 + 256, 260LL) )
  {
    v9 = v18;
LABEL_12:
    *(_DWORD *)(a1 + 776) = v9;
LABEL_20:
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    sub_180057300(v11, 260LL, (__int64)v7);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v13 = (__int64)sub_180055F40(0x438uLL);
      v19 = v13;
      if ( v13 )
        v13 = sub_18013EAB4(v13, (_OWORD *)(a1 + 256));
      if ( v13 )
      {
        v14 = sub_18013EC44(a1, v13);
        if ( v14 < 0 )
          v6 = v14;
      }
      else
      {
        v6 = -2147024882;
      }
    }
  }
LABEL_29:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
