/*
 * XREFs of sub_18013F570 @ 0x18013F570
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013FDDC @ 0x18013FDDC (sub_18013FDDC.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013F570(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v14; // [rsp+68h] [rbp+10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v6 = 0;
  v7 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  if ( a2 && a3 )
  {
    if ( *(int *)a2 < 3 )
    {
      v9 = sub_180055F40(0x438uLL);
      v8 = v9;
      v14 = v9;
      if ( v9 )
      {
        *(_QWORD *)v9 = off_18014B3E0;
        *((_QWORD *)v9 + 1) = *(_QWORD *)a2;
        v9[4] = 0;
        v9[5] = 0;
        v9[268] = 0;
        memset(v9 + 6, 0, 0x418uLL);
        *(_QWORD *)v8 = off_1801563E0;
      }
      else
      {
        v8 = 0LL;
      }
      v14 = v8;
      if ( v8 )
      {
        if ( (unsigned int)sub_18013FDDC(a1, v8) )
        {
          *a3 = v8[4];
        }
        else
        {
          *a3 = (unsigned __int8)sub_180140028(a1 + 184, *(unsigned int *)(a2 + 4), &v13) != 0;
          v7 = v13;
        }
      }
      else
      {
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
