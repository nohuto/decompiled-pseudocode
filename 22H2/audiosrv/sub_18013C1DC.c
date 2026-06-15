/*
 * XREFs of sub_18013C1DC @ 0x18013C1DC
 * Callers:
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C4A4 @ 0x18013C4A4 (sub_18013C4A4.c)
 *     sub_18013C520 @ 0x18013C520 (sub_18013C520.c)
 *     sub_18013C654 @ 0x18013C654 (sub_18013C654.c)
 */

__int64 __fastcall sub_18013C1DC(_QWORD *a1)
{
  __int64 result; // rax
  char DstBuf[16]; // [rsp+30h] [rbp-28h] BYREF

  result = sub_18013C4A4(DstBuf);
  if ( (int)result >= 0 )
  {
    if ( !*((_DWORD *)a1 + 35)
      || (result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, ", ", 2LL),
          (int)result >= 0) )
    {
      result = sub_18013C520(a1, L"duration");
      if ( (int)result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, " : ", 3LL);
        if ( (int)result >= 0 )
        {
          result = sub_18013C654(a1, DstBuf);
          if ( (int)result >= 0 )
            *((_DWORD *)a1 + 35) = 1;
        }
      }
    }
  }
  return result;
}
