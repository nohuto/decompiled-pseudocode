/*
 * XREFs of sub_180053C10 @ 0x180053C10
 * Callers:
 *     HandlerProc @ 0x180038010 (HandlerProc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_1801155A0 @ 0x1801155A0 (sub_1801155A0.c)
 */

__int64 __fastcall sub_180053C10(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned int)dword_18019C4B8 > 4 )
  {
    v9 = sub_1801155A0();
    sub_1800B7704((unsigned int)&dword_18019C4B8, (unsigned int)&unk_180169B8B, v7, v8, (__int64)&v9);
  }
  if ( a1 <= 0x8013 )
  {
    if ( (unsigned int)a1 <= 9 )
    {
      if ( (_DWORD)a1 != 9 && (_DWORD)a1 && (_DWORD)a1 != 2 )
      {
        if ( (_DWORD)a1 == 4 )
        {
          return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 88LL))(
                                 qword_18019E678,
                                 a2);
        }
        else
        {
          if ( (_DWORD)a1 != 7 )
            return v2;
          return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 80LL))(
                                 qword_18019E678,
                                 a2);
        }
      }
    }
    else if ( (_DWORD)a1 == 32787 )
    {
      return (unsigned int)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E678 + 96LL))(
                             qword_18019E678,
                             a2);
    }
  }
  return v2;
}
