/*
 * XREFs of sub_1800BDC70 @ 0x1800BDC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_18005E9D0 @ 0x18005E9D0 (sub_18005E9D0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800BDC70(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rax
  signed int LastError; // eax

  v3 = sub_18005E9D0((void **)a1, a2);
  if ( v3 < 0 )
    goto LABEL_7;
  if ( qword_18019E640 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), __int64))(*(_QWORD *)qword_18019E640 + 8LL))(
           qword_18019E640,
           sub_1800BE2C0,
           a1);
    *(_QWORD *)(a1 + 96) = v4;
    if ( !v4 )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v3 < 0 )
LABEL_7:
    sub_18005E8F8((__int64)"CMuteSoftware::Initialize", 811, v3);
  return (unsigned int)v3;
}
