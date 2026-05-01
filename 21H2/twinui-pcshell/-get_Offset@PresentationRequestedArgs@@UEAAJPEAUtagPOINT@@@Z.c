/*
 * XREFs of ?get_Offset@PresentationRequestedArgs@@UEAAJPEAUtagPOINT@@@Z @ 0x1801CAF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_Offset(PresentationRequestedArgs *this, struct tagPOINT *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v6; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 7);
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, &v5);
  if ( (int)result >= 0 )
  {
    v6.x = (int)*(float *)&v5;
    v6.y = (int)*((float *)&v5 + 1);
    *a2 = v6;
    return 0LL;
  }
  return result;
}
